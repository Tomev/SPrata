//
// Created by Tomev on 30.08.2019.
// Cow class header.
//

#ifndef INC_1_COW_H
#define INC_1_COW_H

class Cow {
  public:
    Cow();
    Cow(const char * nm, const char * ho, double wt);
    Cow(const Cow &c);
    ~Cow();
    Cow & operator=(const Cow & c);
    void ShowCow() const;
  private:
    char name[20]{};
    char *hobby;
    double weight;
};

#endif //INC_1_COW_H
