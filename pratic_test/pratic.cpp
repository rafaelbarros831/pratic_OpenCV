#include <opencv2/opencv.hpp>
#include <iostream>

using namespace cv;

int main() {

	VideoCapture camera(0, CAP_DSHOW);

	Mat imagem_webcam;

	while(true){


		camera >> imagem_webcam;

		imshow("Webcam", imagem_webcam);


		if (waitKey(30) == 114 || waitKey(30) == 82) {
			std::cout << "A tecla r foi pressionada.";
			break;
		}

	 }

	camera.release();
	destroyAllWindows();


 return 0;

}