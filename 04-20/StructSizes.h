struct XYPoint {
  double x;
  double y;
};

struct XYZPoint {
  double x;
  double y;
  double z;
};

struct Rectangle {
  XYPoint origin;
  double width;
  double height;
  double area();
};

struct Empty {};
