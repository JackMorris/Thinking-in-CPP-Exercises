#include <iostream>
#include <fstream>
#include <string>
#include "Text.h"

using namespace std;

Text::Text() {}

Text::Text(string filepath) {
  ifstream in(filepath);
  string line;
  while (getline(in, line)) {
    textContents += line + '\n';
  }
}

string Text::contents() {
  return textContents;
}

int main() {
  Text t("Text.cpp");
  cout << t.contents() << endl;
}
