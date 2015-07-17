#include <iostream>
#include "Simple.h"

using namespace std;

Simple::Simple() {
  cout << "Constructor called for Simple class." << endl;
}

Simple::~Simple() {
  cout << "Destructor called for Simple class." << endl;
}

int main() {
  Simple s;
}
