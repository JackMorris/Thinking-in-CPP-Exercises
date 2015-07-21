#ifndef SQUARE1501_H
#define SQUARE1501_H

#include <iostream>
#include "Shape.h"

class Square : public Shape {
public:
  void draw() const {
    std::cout << "Drawing square." << std::endl;
  }
};

#endif
