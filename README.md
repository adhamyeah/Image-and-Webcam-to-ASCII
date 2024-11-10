## Image and Webcam to ASCII (C++)

In this project you can:
- convert an image that you have on your device into ASCII letters.
- convert your real-time webcam video into ASCII.
The project uses OpenCV library to handle image and video input processing

## Table of Contents

1. [Dependencies](#dependencies)
2. [Usage](#usage)
3. [Example](#example)

## Dependencies

1. To use these programs you have to download the public library OpenCV.
2. Link: https://opencv.org/releases/
3. Download the latest release and install it onto your computer
4. Open whichever program you would like to use in your IDE, then go to the Project tab -> Properties -> C/C++ -> General
5. Inside general go to additional include directories then paste in the path to your opencv include folder. (opencv\build\include)
6. Click apply after completing step 5 then go to Linker -> General
7. Click on additional library directories then paste in the path to opencv library folder (opencv\build\x64\vc16\lib)
8. Click apply then in Linker go to Input and in Additional Dependencies paste in the name of the .lib file. Example: if your opencv version is 4.10.0 then type in opencv_world4100.lib.
9. Click Ok and run your code

## Usage

Inside each folder is a guide that shows you how to use the program

## Example

Image to ASCII:

![Screenshot 2024-11-10 163908](https://github.com/user-attachments/assets/d95de4ac-34b8-4c37-af98-181ed602e7ae)

![Screenshot 2024-11-10 172453](https://github.com/user-attachments/assets/9cc011d7-bc19-41ab-b644-a661f3b04f1d)



Webcam to ASCII:

![ezgif-3-27501cb111](https://github.com/user-attachments/assets/96dfb49d-efd4-432d-8928-d8cee4d06564)

(Video is choppy due to gif format)

