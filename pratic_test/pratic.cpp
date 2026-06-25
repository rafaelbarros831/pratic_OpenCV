#include <opencv2/opencv.hpp>
#include <iostream>

using namespace cv;

void circulo() {

	Mat circulo = Mat::zeros(500, 500, CV_8UC3);

	int raio_circulo = 100;
	int espessura_circulo = 70;

	Point centro_circulo(250, 250);
	Scalar cor_circulo(0, 255, 0);

	circle(circulo, centro_circulo, raio_circulo, cor_circulo, espessura_circulo);

	imshow("MyCircle", circulo);
	waitKey(0);

}

int main() {

	VideoCapture camera(0, CAP_DSHOW);

	Mat imagem_webcam;
	

		while (true) {


			camera >> imagem_webcam;

			imshow("Webcam", imagem_webcam);

			
			if (waitKey(30) == 114 || waitKey(30) == 82) {
				std::cout << "A tecla r foi pressionada.";
				break;
			}

			else if(waitKey(30) == 116 || waitKey(30) == 84){
				std::cout << "A tecla t foi pressionada.";
				circulo();

			}

		}

	camera.release();
	destroyAllWindows();


 return 0;

}