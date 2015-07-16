#include <iostream>
#include "StructSizes.h"

using namespace std;

double Rectangle::area() {
  return width*height;
}

int main() {
  // On my machine, double = 8 bytes.

  cout << "XYPoint (two doubles) size: " << sizeof(XYPoint) << endl;
  // Prints 16, as expected (2*8 byte doubles).

  cout << "XYZPoint (three doubles) size: " << sizeof(XYZPoint) << endl;
  // Prints 24, as expected (3*8 byte doubles).

  cout << "Rectangle (XYPoint, two doubles, function) size: " << sizeof(Rectangle) << endl;
  // Prints 32, as expected (16 + 2*8 byte doubles).
  // Note that the function doesn't take any space, since it isn't unique to each instance (code is shared).

  cout << "Empty struct size: " << sizeof(Empty) << endl;
  // Prints 1. Although it contains no members, it is given a non-zero size so that a declaration following an empty
  // struct isn't given the same address as the empty struct. If this were the case, then these two declarations
  // would actually reference same instance, when semantically two distinct instances were requested and are
  // referred to.
}
