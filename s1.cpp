
#include "Utilities.hpp"
#include "Filters.hpp"
#include <cstdlib>
#include <iostream>
#include <fstream>
#include <vector>
#include <cmath>
#include <opencv2/opencv.hpp>

using namespace cv;
using namespace std;


int main(int argc, char *argv[]) {
  if (!argsS1Check(argc)) return -1;
  Mat image = imread(argv[1], CV_LOAD_IMAGE_GRAYSCALE);
  if (!imageValidityCheck(image)) return -1;
  CV_Assert(image.depth() == CV_8U);

  int threshold = atoi(argv[2]);
  ofstream parametersFile(argv[3]);

  Mat binaryImage;
  applyBinary(image, binaryImage, threshold);

  vector<Point> TRBLArray = getTRBLArrayOfSphere(binaryImage);
  Point top = TRBLArray[0];
  Point right = TRBLArray[1];
  Point bot = TRBLArray[2];