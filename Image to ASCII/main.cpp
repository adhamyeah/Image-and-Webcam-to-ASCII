#include <opencv2/opencv.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#include <iostream>
#include <fstream>
#include <vector>

using namespace std;
using namespace cv;

int calculateAvg(Mat image, int row, int col, int rowscale, int colscale) {
	int sum = 0;
	int pixelCount = 0;

	for (int i = row; i < row + rowscale && i < image.rows; i++) { // i = row means we start at specified row and loop it as many times as rowscale is
		// && i<image.rows ensures we don't go beyond the actual image
		for (int j = col; j < col + colscale && j < image.cols; j++) { // same concept as above
			sum += (int)image.at<uchar>(i, j); // image.at<uachar>(i, j) returns brightness level of the pixel at row i column j as a number (0 for black 255 for white) and stores this number in sum
			// (int) converts type from uchar (unsigned char ranging 0-255) to int so we can store it in sum type int
			pixelCount++; // so we know the total number of pixels when calculating the avg
		}
	}

	return pixelCount > 0 ? sum / pixelCount : 0;

}


int main() {

	const string density = "'_.-,=+:;cba!?0123456789$W#@Ñ";
	int scale = 8;
	
	Mat image = imread("C:\\Users\\Adham\\OneDrive\\Pictures\\Camera Roll\\WIN_20240923_13_19_22_Pro.jpg"); // takes in the picture
	if (image.empty()) {
		cout << "Empty Image";
		return -1;
	}

	imshow("image", image); // the image in quotations is just the name of the popup for the photo

	Mat greyimage;
	cvtColor(image, greyimage, COLOR_RGB2GRAY);

	imshow("test", greyimage);
	ofstream outputFile("ascii.txt"); // creates a text file to input the ascii in 

	int rowscale = 12;
	int colscale = 6;


	for (int i = 0; i < greyimage.rows; i+= rowscale) { // += skips over however many pixels rowscale is (4) so every 4 pixels it makes 1 ascii 
		// for rows, it runs vertically.
		//row 1
		//row 2
		//row 3
		string text = ""; // adds a string named text for each row
		for (int j = 0; j < greyimage.cols; j+= colscale) { // same concept as rowscale
			// for columns, it runs horizontally as it counts how many columns there are.
			// column1, column2, column3 
			int avgBrightness = calculateAvg(greyimage, i, j, rowscale, colscale);
			int index = avgBrightness * (density.length() - 1) / 255; // desnity.length() - 1 is done because this is going to be array so end is 28 not 29.
			// multiply by brightness to set the max value from 0 to (density.length - 1)
			// dividing maps the brightness from a value between 0 - 28 (desnity array) 
			// so basically if the brightness is 255 and mutliplied by 28 then divided by 255 the index is 28
			// brightness 150 * 28 =4200 / 255  =  16.4 = 16 so it's going to be array index 16 which is in the middle (accurate)
			text += density[index];
		}
		outputFile << text << endl;
	}

	waitKey(0); //only closes the image when a user presses something. if it doesnt exist image will immediately close after opening



return 0;
}
