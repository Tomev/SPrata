//
// Created by Tomev on 31.08.2019.
// Header of improved String class from S. Prata's C++ Primer Plus VI ed.
//

#ifndef INC_2_STRING2_H
#define INC_2_STRING2_H

#include <iostream>
using std::istream, std::ostream;

class String {
  public:
    String(const char * s);
    String();
    String(const String & s);
    ~String();
    int length () const { return len; };
    String & operator=(const String & s);
    String & operator=(const char * s);
    char &operator[](int i);
    const char & operator[] (int i) const;

    void stringup();
    void stringlow();
    unsigned int has(char c);

    friend bool operator<(const String &st1, const String &st2);
    friend bool operator>(const String &st1, const String &st2);
    friend bool operator==(const String &st1, const String &st2);

    friend ostream & operator<<(ostream & os, const String & st);
    friend istream &operator>>(istream & is, String & s);

    friend String operator+(const String &st1, const String &st2);

    static int HowMany();
  private:
    char * str;
    int len;
    static int num_strings;
    static const int CINLIM = 80;
};

#endif //INC_2_STRING2_H
