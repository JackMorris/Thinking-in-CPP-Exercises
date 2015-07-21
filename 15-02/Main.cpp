#include "Shape.h"
#include "Circle.h"
#include "Square.h"
#include "Triangle.h"

void Shape::draw() const {}

int main() {
  Shape shape;
  // Causes a compilation error, since Shape is an abstract class (and therefore can't be directly instantiated).

  // With the call in the constructor (in Shape.h), a warning is given. This is because late-binding isn't
  // used in the constructor, so the derived version of draw() isn't called (and Shape's version has no definition).
  // The warning persists even when a definition is given (see top of file) for Shape's version of draw.
}
