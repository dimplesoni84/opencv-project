#include<opencv2/imgcodecs.hpp>
#include<opencv2/highgui.hpp>
#include<opencv2/imgproc.hpp>
#include<opencv2/objdetect.hpp>
#include<iostream>

using namespace cv;
using namespace std;

int main() {

	/*string path = "sp.jpg";
	Mat img = imread(path);
	CascadeClassifier faceCas;
	faceCas.load("haarcascade_frontalface_default.xml");
	vector<Rect> faces;
	faceCas.detectMultiScale(img, faces, 1.1, 10);
	for (int i = 0;i < faces.size();i++) {
		rectangle(img, faces[i].tl(), faces[i].br(), Scalar(255, 0, 255), 3);*/

		//Mat bw, blur,can,reimg,crpimg;

		/*cvtColor(img, bw, COLOR_BGR2GRAY);
		GaussianBlur(img, blur, Size(3, 3),100,200);
		Canny(img, can, 100,200);
		resize(blur, reimg, Size(), 10, 10);
		Rect roi(450, 67, 90, 67);
		crpimg=img(roi);*/
		//rectangle(img, Point(130, 220), Point(382, 286), Scalar(255, 0, 255), 3);
		/*imshow("Image",img );
		waitKey(0);*/
	VideoCapture cap(0);
	Mat img;
	CascadeClassifier faceCas;
	faceCas.load("haarcascade_frontalface_default.xml");
	vector<Rect> faces;
	while (1) {
		cap.read(img);
		faceCas.detectMultiScale(img, faces, 1.1, 10);
		for (int i = 0; i < faces.size(); i++) {
			rectangle(img, faces[i].tl(),faces[i].br(), Scalar(255, 0, 255), 3);
			
		}
		imshow("Image", img);
		waitKey(1);

	}
}