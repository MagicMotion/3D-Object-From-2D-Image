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
  if (argc != 6) {
    cout << "usage: ./s2 <input parameters file> <image 1> <image 2> <image 3> <output directions file>" << endl;
    return false;
  }
  return true;
}

bool argsS3Check(int argc) {
  if (argc != 8) {
    cout << "usage: ./s3 <input directions> <image 1> <image 2> <image 3> <step> <threshold> <output>" << endl;
    return false;
  }
  return true;
}

bool argsS4Check(int argc) {
  if (argc != 7) {
    cout << "usage: ./s4 <input directions> <image 1> <image 2> <image 3> <threshold> <output>" << endl;
    return false;
  }
  return true;
}

bool imageValidityCheck(Mat &image) {
  if (!image.data) {
    cout << "No image data " << endl;
    return false;
  }
  return true;
}

vector<Point> getTRBLArrayOfSphere(Mat &image) {
  Point top = Point(image.rows - 1, image.cols - 1);
  Point right = Point(image.rows - 1, 0);
  Point bottom = Point(0, 0);