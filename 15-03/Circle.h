#ifndef CIRCLE1503_H
#define CIRCLE1503_H

#include <iostream>
#include "Shape.h"

class Circle : public Shape {
public:
  void draw() const {
    std::cout << "Drawing circle." << std::endl;
  }
};

#endif
