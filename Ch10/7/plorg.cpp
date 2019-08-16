//
// Created by Tomev on 16.08.2019.
//

#include <iostream>
#include <utility>
#include "plorg.h"

Plorg::Plorg(std::string name, int repletionCoefficient) : _name(std::move(name)), _repletionCoefficient(repletionCoefficient){}

void Plorg::setRepletionCoefficient(int newRepletionCoefficient) {
  _repletionCoefficient = newRepletionCoefficient;
}

void Plorg::show() const {
  std::cout << "My name is " << _name << ". My repletion coefficient is " << _repletionCoefficient << ".\n";
}


