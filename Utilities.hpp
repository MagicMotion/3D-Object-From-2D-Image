#ifndef UTILITIES_H
#define UTILITIES_H

#include <iostream>
#include <fstream>
#include <cmath>
#include <opencv2/opencv.hpp>

using namespace std;
using namespace cv;

bool argsS1Check(int argc) {
  if (argc != 4) {
    cout << "usage: ./s1 <input original image> <threshold value> <output parameters file>" << endl;
    return false;
  }
  return true;
}

bool argsS2Check(int argc) {
  if 