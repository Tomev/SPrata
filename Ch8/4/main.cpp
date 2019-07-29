// Solution to problem 8.4 from S. Prata's C++ Primer Plus VI ed.

#include <iostream>
#include <cstring>

using namespace std;

struct stringy{
  char * str;
  int ct;
};

// set, show, show

void set(stringy &s, char * a){
  s.str = a;
  s.ct = strlen(a);
}

void show(const stringy &s, const unsigned int numTimes = 1){
  for(unsigned int i = 0; i < numTimes; ++i)
    std::cout << s.str << std::endl;
}

void show(const char s[], const unsigned int numTimes = 1){
  for(unsigned int i = 0; i < numTimes; ++i)
    std::cout << s << std::endl;
}

int main() {
  stringy beany{};
  char testing[] = "Rzeczywistość to już nie to co kiedyś.";

  set(beany, testing);
  show(beany);
  show(beany, 2);
  testing[0] = 'D';
  testing[1] = 'u';
  show(testing);
  show(testing, 3);

  return 0;
}