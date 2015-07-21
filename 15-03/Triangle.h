#ifndef TRIANGLE1503_H
#define TRIANGLE1503_H

#include <iostream>
#include "Shape.h"

class Triangle : public Shape {
public:
  void draw() const {
    std::cout << "Drawing triangle." << std::endl;
  }
};

#endif
