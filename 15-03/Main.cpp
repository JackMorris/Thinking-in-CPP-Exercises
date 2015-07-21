#include "Shape.h"
#include "Circle.h"
#include "Square.h"
#include "Triangle.h"

void drawShapeValue(Shape s) {
  s.draw();
}

void drawShapeReference(const Shape& s) {
  s.draw();
}

int main() {
  Square square;
  drawShapeValue(square);
  drawShapeReference(square);

  // The definition of drawShapeValue(Shape s) causes a compilation error, since Shape is an abstract class.
  // However, the defintion and usage of drawShapeReference(const Shape& s) works as expected.
}
