
#ifndef FILTERS_H
#define FILTERS_H

void applyBinary(Mat &src, Mat &dest, int threshold) {
  dest.create(src.size(), src.type());

  for (int r = 0; r < src.rows; r++) {
    for (int c = 0; c < src.cols; c++) {