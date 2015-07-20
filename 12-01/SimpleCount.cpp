#include <iostream>
#include "SimpleCount.h"

using namespace std;

SimpleCount& SimpleCount::operator++() {
  count++;
  return *this;
}

const SimpleCount SimpleCount::operator++(int) {
  SimpleCount before(count);
  count++;
  return before;
}

ostream& operator<<(ostream& os, const SimpleCount& c) {
  os << "COUNT: " << c.count;
  return os;
}

int main() {
  SimpleCount c;

  cout << c++ << endl;
  // Postfix returns a const. It doesn't really make sense to allow the user to modify the old value.
  // Prints 0 (default value, pre increment).

  cout << ++(++c) << endl;
  // Prefix doesn't return const, so we can do two prefix operations in a row.
  // Prints 3 (postfix increment and two increments here).
}
