//
// Created by Tomev on 02.08.2019.
//

#ifndef INC_1_GOLF_H
#define INC_1_GOLF_H

const int Len = 40;

struct golf{
  char fullName[Len];
  int handicap;
};

void setgolf(golf & g, const char * name, int hc);
void setgolf(golf & g);
void handicap(golf & g, int hc);
void showgolf(const golf & g);

#endif //INC_1_GOLF_H
