// Solution to problem 10.2 from S. Prata's C++ Primer Plus VI ed.

#include <iostream>
#include <cstring>

class Person{
  public:
    Person() { lname = ""; fname[0] = '\0';}
    explicit Person(const std::string & ln, const char * fn = "HejTy");
    void Show() const;
    void FormalShow() const;
  private:
    static const int LIMIT = 256;
    std::string lname;
    char fname[LIMIT]{};
};

Person::Person(const std::string &ln, const char *fn) {
  lname = ln;
  strcpy(fname, fn);
}

void Person::Show() const {
  std::cout << lname << " " << fname << "\n";
}

void Person::FormalShow() const {
  std::cout << fname << " " << lname << "\n";
}

int main() {
  Person one;
  Person two("Staszek");
  Person three("Jacek", "Placek");
  one.Show();
  one.FormalShow();
  two.Show();
  two.FormalShow();
  three.Show();
  three.FormalShow();

  return 0;
}