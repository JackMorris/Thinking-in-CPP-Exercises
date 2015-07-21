#include "Shape.h"
#include "Circle.h"
#include "Square.h"
#include "Triangle.h"

int main() {
  Shape* shapes[] = {
    new Shape(),
    new Circle(),
    new Square(),
    new Triangle(),
  };
  int shapeCount = sizeof(shapes) / sizeof(*shapes);
  for (int i = 0; i < shapeCount; ++i) {
    shapes[i]->draw();
  }

  // Prints
  //  Drawing shape.
  //  Drawing circle.
  //  Drawing square.
  //  Drawing triangle.

  // Therefore, even though the pointers are treated as Shape*, the draw function for the underlying
  // object is called using late binding.
}
