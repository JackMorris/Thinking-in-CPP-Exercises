#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
#include <vector>
#include <cmath>

using namespace std;

int main() {
  ifstream in("Fillvector.cpp");
  vector<string> lines;

  string line;
  while(getline(in, line)) {
    lines.push_back(line);
  }

  int requiredLineNumLength = log10(lines.size()) + 1;
  for(int lineNum = lines.size(); lineNum > 0; --lineNum) {
    cout << setw(requiredLineNumLength) << lineNum;   // setw pads line number to ensure : lines up.
    cout << ": " << lines[lineNum-1] << endl;
  }
}
