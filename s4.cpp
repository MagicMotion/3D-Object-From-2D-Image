
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
  if (!argsS4Check(argc)) return -1;

  ifstream directionsFile(argv[1]);
  vector<string> imageFiles = {argv[2], argv[3], argv[4]};
  int threshold = atoi(argv[5]);

  auto sourceMatrix = new double[3][3];
  auto inverseMatrix = new double[3][3];