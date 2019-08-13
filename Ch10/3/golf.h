//
// Created by Tomev on 13.08.2019.
//

#ifndef INC_3_GOLF_H
#define INC_3_GOLF_H

const int Len = 40;

class golf {
  public:
    golf();
    golf(const golf &g);
    golf(const char * name, int hc);
    void show() const;

    char fullName[Len]{};
    int handicap;
};

#endif //IN{}C_3_GOLF_H