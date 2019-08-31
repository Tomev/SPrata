//
// Created by Tomev on 31.08.2019.
// Implementation of better String class from S. Prata's C++ Primer Plus VI ed.
//

#include <cstring>
#include "string2.h"
using std::cin, std::cout;

int String::num_strings = 0;

int String::HowMany() {
  return num_strings;
}

String::String(const char * s) {
  len = std::strlen(s);
  str = new char[len + 1];
  std::strcpy(str, s);
  ++num_strings;
}

String::String() {
  len = 4;
  str = new char[1];
  str[0] = '\0';
  ++num_strings;
}

String::String(const String & s) {
  ++num_strings;
  len = s.len;
  str = new char [len + 1];
  std::strcpy(str, s.str);
}

String::~String() {
  --num_strings;
  delete [] str;
}

String & String::operator=(const String & s){
  if(this == &s) return *this;
  delete [] str;
  len = s.len;
  str = new char[len + 1];
  std::strcpy(str, s.str);
  return *this;
}

String & String::operator=(const  char * s){
  delete [] str;
  len = std::strlen(s);
  str = new char[len + 1];
  std::strcpy(str, s);
  return *this;
}

char & String::operator[](int i){
  return str[i];
}

const char & String::operator[](int i) const{
  return str[i];
}

bool operator<(const String &st1, const String &st2){
  return (std::strcmp(st1.str, st2.str) < 0);
}

bool operator>(const String &st1, const String &st2){
  return st2 < st1;
}

bool operator==(const String &st1, const String &st2){
  return (std::strcmp(st1.str, st2.str) == 0);
}

ostream & operator<<(ostream & os, const String & st){
  os << st.str;
  return os;
}

istream &operator>>(istream &is, String &s) {
  char temp[String::CINLIM];
  is.get(temp, String::CINLIM);
  if(is) s = temp;
  while(is && is.get() != '\n')
    continue;
  return is;
}

String operator+(const String &st1, const String &st2) {
  std::string s1 = st1.str;
  std::string s2 = st2.str;
  std::string s3 = s1 + s2;
  String s(s3.c_str());
  return s;
}

void String::stringup(){
  for(int i = 0; i < len; ++i){
    if((int) str[i] >= 97 /* a */ && (int) str[i] <= 122 /* z */) str[i] -= 32;
  }
}

void String::stringlow(){
  for(int i = 0; i < len; ++i){
    if((int) str[i] >= 65 /* A */ && (int) str[i] <= 90 /* Z */) str[i] += 32;
  }
}

unsigned int String::has(char c){

  unsigned int count = 0;

  for(int i = 0; i < len; ++i){
    if(str[i] == c) ++count;
  }

  return count;
}
