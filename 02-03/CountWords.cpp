#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(int argc, const char* argv[]) {
  if (argc < 2) {
    cout << "Please supply the path for the file to wordcount." << endl;
    return 0;
  }

  string inputFilePath = argv[1];
  ifstream in(inputFilePath);
  string currentWord;
  int wordCount = 0;

  while (in >> currentWord) {
    ++wordCount;
  }
  cout << wordCount << " words in " << inputFilePath << "." << endl;
}
