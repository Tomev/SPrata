#include "golf.h"
#include <iostream>
#include <cstring>

void setgolf(golf & g, const char * name, int hc){
  strcpy(g.fullName, name);
  g.handicap = hc;
}

void setgolf(golf & g){
  std::string name;
  std::cout << "Get name.\n";
  std::cin >> name;
  std::strcpy(g.fullName, name.c_str());
  std::cout << "Input handicap.\n";
  std::cin >> g.handicap;
}

void handicap(golf & g, int hc){
  g.handicap = hc;
}

void showgolf(const golf & g){
  std::cout << "Name: " << g.fullName << ",\nHandicap: " << g.handicap << std::endl;
}