#include <iostream>
#include "Simple.h"

using namespace std;

Simple::Simple(int d) : data(d) {
  cout << "Constructor called for Simple class (data = " << data << ")." << endl;
}

Simple::~Simple() {
  cout << "Destructor called for Simple class (data = " << data << ")." << endl;
}

int main() {
  Simple s1(1);
  Simple s2(2);
  Simple s3(3);
}
