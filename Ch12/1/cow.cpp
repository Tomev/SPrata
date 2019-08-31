//
// Created by Tomev on 30.08.2019.
// Implementation of cow class.
//

#include <iostream>
#include <cstring>
#include "cow.h"

Cow::Cow() : hobby(nullptr), weight(0) {
  name[0] = '\n';
}

Cow::Cow(const char *nm, const char *ho, double wt) : weight(wt) {
  strcpy(name, nm);

  if(ho != nullptr) strcpy(hobby, ho);
  else hobby = nullptr;
}

Cow::Cow(const Cow &c) : weight(c.weight){
  strcpy(name, c.name);

  hobby = new char[strlen(c.hobby)];

  if(c.hobby != nullptr) strcpy(hobby, c.hobby);
  else hobby = nullptr;
}

Cow::~Cow() {
  delete hobby;
}

Cow &Cow::operator=(const Cow &c) {
  strcpy(name, c.name);

  hobby = new char[strlen(c.hobby)];;

  if(c.hobby != nullptr) strcpy(hobby, c.hobby);
  else hobby = nullptr;

  weight = c.weight;

  return *this;
}

void Cow::ShowCow() const {
  using std::cout;

  if(name[0] == '\n') cout << "The cow has no name.";
  else cout << "The cows name is " << name << ".";

  if(hobby == nullptr) cout << " The cow has no hobby.";
  else cout << " It's hobby is " << hobby << ".";

  cout << " It weights " << weight << " units.\n";
}