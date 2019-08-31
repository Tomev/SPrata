// Solution to problem 12.2 from S. Prata's C++ Primer Plus VI ed.

#include <iostream>
#include "string2.h"

int main() {

  using std::cout, std::cin;

  String s1(" i uczę się C++.");
  String s2("Podaj swoje imię: ");
  String s3;
  cout << s2;
  cin >> s3;
  s2 = "Mam na imię " + s3;
  cout << s2 << ".\n";
  s2 = s2 + s1;
  s2.stringup();
  cout << "Ciąg\n" << s2 << "\n zawiera " << s2.has('A') << " 'A'.\n";

  s1 = "czerwona";
  String rgb[3] = {String(s1), String("zielona"), String("niebieska")};
  cout << "Podaj nazwę barwy podstawowej: ";
  String ans;
  bool success = false;

  while(cin >> ans){
    ans.stringlow();
    for(const auto & i : rgb){
      if(ans == i){
        cout << "Prawidłowo!\n";
        success = true;
        break;
      }
    }
    if(success) break;
    else cout << "Spróbuj ponownie.";

  }

  return 0;
}