#ifndef CIRCLE1501_H
#define CIRCLE1501_H

#include <iostream>
#include "Shape.h"

class Circle : public Shape {
public:
  void draw() const {
    std::cout << "Drawing circle." << std::endl;
  }
};

#endif
