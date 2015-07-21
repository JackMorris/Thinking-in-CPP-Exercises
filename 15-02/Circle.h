#ifndef CIRCLE1502_H
#define CIRCLE1502_H

#include <iostream>
#include "Shape.h"

class Circle : public Shape {
public:
  void draw() const {
    std::cout << "Drawing circle." << std::endl;
  }
};

#endif
