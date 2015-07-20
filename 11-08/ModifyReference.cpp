#include <iostream>

using namespace std;

void incrementChar(char& c) {
  c++;
}

int main() {
  char c = 'A';
  cout << c << endl;
  incrementChar(c);
  cout << c << endl;

  // Prints A, then B, proving that c has been incremented.
  // This is arguably less readable than defining incrementChar to take a char pointer, since it's not
  // evident from the function call alone that c is modified (although in this case, the function name gives it away).
}
