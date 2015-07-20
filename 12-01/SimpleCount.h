#ifndef SIMPLECOUNT1201_H
#define SIMPLECOUNT1201_H

#include <iostream>

class SimpleCount {
  int count;
public:
  SimpleCount(int v = 0): count(v) {};
  SimpleCount& operator++();          // Prefix ++
  const SimpleCount operator++(int);  // Postfix ++
  friend std::ostream& operator<<(std::ostream& os, const SimpleCount& c);
};

#endif
