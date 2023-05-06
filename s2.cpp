
#include "Utilities.hpp"
#include "Filters.hpp"
#include <iostream>
#include <string>
#include <fstream>
#include <opencv2/opencv.hpp>

using namespace cv;
using namespace std;


int main(int argc, char *argv[]) {
  if (!argsS2Check(argc)) return -1;

  ifstream parametersFile(argv[1]);