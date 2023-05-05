
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