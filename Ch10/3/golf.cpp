//
// Created by Tomev on 13.08.2019.
//

#include <cstring>
#include <iostream>
#include "golf.h"

golf::golf() : handicap(0) {
  std::string name;
  std::cout << "Get name.\n";
  std::cin >> name;
  std::strcpy(fullName, name.c_str());
  std::cout << "Input handicap.\n";
  std::cin >> handicap;
}

golf::golf(const char *name, int hc) {
  strcpy(fullName, name);
  handicap = hc;
}

void golf::show() const {
  std::cout << fullName << ": " << handicap << std::endl;
}

golf::golf(const golf &g) {
  handicap = g.handicap;
  strcpy(fullName, g.fullName);
}
