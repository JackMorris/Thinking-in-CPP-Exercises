#ifndef BUSINESSTRAVELER1414_H
#define BUSINESSTRAVELER1414_H

#include "Traveler.h"
#include "Pager.h"
#include <string>

class BusinessTraveler : public Traveler {
  Pager pager;
public:
  BusinessTraveler() : Traveler(""), pager("") {}
  BusinessTraveler(std::string str) : Traveler(str), pager(str) {}
  BusinessTraveler(const BusinessTraveler& b) : Traveler(b), pager(b.pager) {}
  BusinessTraveler& operator=(const BusinessTraveler& right) {
    Traveler::operator=(right);
    pager = right.pager;
    return *this;
  }
};

#endif
