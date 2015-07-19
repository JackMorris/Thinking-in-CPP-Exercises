#include <iostream>

#define F(x) ((x) + 1)

using namespace std;

int main() {
  cout << F(8 >> 2) << endl;
  // Prints 3, as expected.
}
