#ifndef SHAPE1501_H
#define SHAPE1501_H

#include <iostream>

class Shape {
public:
  virtual void draw() const {
    std::cout << "Drawing shape." << std::endl;
  }
};

#endif
