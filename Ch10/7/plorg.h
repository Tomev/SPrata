//
// Created by Tomev on 16.08.2019.
//

#ifndef INC_7_PLORG_H
#define INC_7_PLORG_H

#include <string>

class Plorg {
  private:
    std::string _name;
    int _repletionCoefficient;
  public:
    explicit Plorg(std::string name = "Plorga", int repletionCoefficient = 50);
    void setRepletionCoefficient(int newRepletionCoefficient);
    void show() const;
};

#endif //INC_7_PLORG_H
