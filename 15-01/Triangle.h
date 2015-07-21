#ifndef TRIANGLE1501_H
#define TRIANGLE1501_H

#include <iostream>
#include "Shape.h"

class Triangle : public Shape {
public:
  void draw() const {
    std::cout << "Drawing triangle." << std::endl;
  }
};

#endif
