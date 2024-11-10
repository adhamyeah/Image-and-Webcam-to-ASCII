# How to use

## Inserting image 

1. Right click the image you would like to use then click on copy as path
2. Go into main.cpp then on line 33 insert the image path inside the quotations
3. After each backslash (\\), add another one so it's two backslashes (\\\\) otherwise the program won't work
4. Run the code and you will be displayed 2 images, your original image and a black and white version. Just close them if you'd like
5. Open the project file location and a new text file named ascii will be added where you can open it and view your ASCII image

## Dependencies

You will need to have the public library OpenCV installed on your machine for this program to work. an installation guide is provided on the README.md file

## Extra info

1. There might be an issue where even if you have your image path pasted in properly and you have proper backslashes (\\) 
the image will not be read by the program. This might be because the image you're trying to input is not stored on 
your local machine but instead on a cloud system like OneDrive.

2. if the background of your notepad or text editor app you're using is white it would be 
better to use this reversed version of the density string --> '_.-,=+:;cba!?0123456789$W#@Ñ
