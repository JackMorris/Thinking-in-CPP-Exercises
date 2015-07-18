#include <iostream>
#include "Functions.h"

using namespace std;

void Functions::myFunc() {
  cout << "Overridden. No arguments." << endl;
}

void Functions::myFunc(int a) {
  cout << "Overridden. One argument: " << a << endl;
}

void Functions::myFunc(int a, int b) {
  cout << "Overridden. Two arguments: " << a << ", " << b << endl;
}

void Functions::myFunc(int a, int b, int c) {
  cout << "Overridden. Three arguments: " << a << ", " << b << ", " << c << endl;
}

void Functions::myFuncDefault(int a /* = 0 */, int b /* = 0 */, int c /* = 0 */) {
  cout << "Default arguments. Argument values (default = 0): " << a << ", " << b << ", " << c << endl;
}

int main() {
  Functions f;

  // Overridden functions.
  f.myFunc();
  f.myFunc(1);
  f.myFunc(1, 2);
  f.myFunc(1, 2, 3);

  // Default-argument functions.
  f.myFuncDefault();
  f.myFuncDefault(1);
  f.myFuncDefault(1, 2);
  f.myFuncDefault(1, 2, 3);

  // This shows that the calls to the overridden function myFunc() to four separate functions.
  // The calls to myFuncDefault only calls a single function, as expected.
  // Both styles of function can be used in main() with identical syntax (same function name, varying arguments).
}
