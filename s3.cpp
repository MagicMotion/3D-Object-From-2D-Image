
#include "Utilities.hpp"
#include "Filters.hpp"
#include <cstdlib>
#include <iostream>
#include <string>
#include <fstream>
#include <opencv2/opencv.hpp>

using namespace cv;
using namespace std;


int main(int argc, char *argv[]) {
  const int NEEDLE_LENGTH = 10;

  if (!argsS3Check(argc)) return -1;

  ifstream directionsFile(argv[1]);
  vector<string> imageFiles = {argv[2], argv[3], argv[4]};
  int step = atoi(argv[5]);
  int threshold = atoi(argv[6]);

  auto sourceMatrix = new double[3][3];