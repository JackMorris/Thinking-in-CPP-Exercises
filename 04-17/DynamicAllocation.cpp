#include <iostream>

using namespace std;

int main() {
  int* i = new int;
  long* l = new long;
  char* ca = new char[100];
  float* fa = new float[100];

  cout << "Int address: \t\t" << (long)i << endl;
  cout << "Long address: \t\t" << (long)l << endl;
  cout << "Char array address: \t" << (long)ca << endl;
  cout << "Float array address: \t" << (long)fa << endl;

  delete i;
  delete l;
  delete[] ca;
  delete[] fa;
}
