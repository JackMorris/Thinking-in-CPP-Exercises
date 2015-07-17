#ifndef STRUCTSIZES0420_H
#define STRUCTSIZES0420_H

struct XYPoint {
  double x;
  double y;
};

struct XYZPoint {
  double x;
  double y;
  double z;
};

struct Rectangle {
  XYPoint origin;
  double width;
  double height;
  double area();
};

struct Empty {};

#endif
