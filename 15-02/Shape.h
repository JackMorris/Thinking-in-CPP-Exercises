#ifndef SHAPE1502_H
#define SHAPE1502_H

#include <iostream>

class Shape {
public:
  Shape() {
    draw();
  }
  virtual void draw() const = 0;
};

#endif
