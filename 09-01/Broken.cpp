#include <iostream>

using namespace std;

int main() {
  #define F (x) (x + 1)
  cout << F(1) << endl;
  // Expands to:
  //  cout << (x) (x+1)(1) << endl;
  // so fails to compile.

  #define G(x) (x + 1)
  cout << G(8 >> 2) << endl;
  // Expands to:
  //  cout << (8 >> 2 + 1) << endl;
  // Equivalent to:
  //  cout << (8 >> 3) << endl;
  // Which prints 1, rather than the expected 3.
}
