#include <iostream>

using namespace std;

class A {
public:
  A() {
    cout << "A Constructor" << endl;
  }
  ~A() {
    cout << "A Destructor" << endl;
  }
};

class B : public A {
public:
  B() {
    cout << "B Constructor" << endl;
  }
  ~B() {
    cout << "B Destructor" << endl;
  }
};

class C : public B {
public:
  C() {
    cout << "C Constructor" << endl;
  }
  ~C() {
    cout << "C Destructor" << endl;
  }
};

int main() {
  C c;
  // Prints:
  //  A Constructor
  //  B Constructor
  //  C Constructor
  //  C Destructor
  //  B Destructor
  //  A Destructor

  // This shows that the root of the hierarchy is constructed first, followed by each derived class.
  // This is implemented by the constructor calling its base class's constructor before executing its own.
  // Destructors are called in the opposite order.
  // A class executes its destructor, then calls the destructor for its base class.
}
