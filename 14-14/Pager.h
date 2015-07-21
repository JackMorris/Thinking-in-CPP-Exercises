#ifndef PAGER1414_H
#define PAGER1414_H

#include <string>

class Pager {
  std::string s;
public:
  Pager(std::string str) : s(str) {}
  Pager(const Pager& p) : s(p.s) {}
  Pager& operator=(const Pager& right) {
    s = right.s;
    return *this;
  }
};

#endif
