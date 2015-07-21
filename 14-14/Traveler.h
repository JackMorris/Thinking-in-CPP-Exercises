#ifndef TRAVELER1414_H
#define TRAVELER1414_H

#include <string>

class Traveler {
  std::string s;
public:
  Traveler(std::string str) : s(str) {}
  Traveler(const Traveler& t) : s(t.s) {}
  Traveler& operator=(const Traveler& right) {
    s = right.s;
    return *this;
  }
};

#endif
