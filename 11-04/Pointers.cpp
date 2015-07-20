#include <iostream>

using namespace std;

int& increment(int* x) {
  (*x)++;
  return *x;
}

int main() {
  int value = 4;
  cout << increment(&value) << endl;
  // Prints 5. increment returns a reference, so it can be directly printed.
}
