#include <iostream>
#include <cstring>

int main()
{
  using namespace std;

  char name[20] = "";
  char surname[80] = "";

  cout << "Input name.\n>";
  cin >> name;
  cout << "Input surname.\n>";
  cin >> surname;

  char concatenatedString[132] = "Concatenated string: ";
  strcat(concatenatedString, surname);
  strcat(concatenatedString, ", ");
  strcat(concatenatedString, name);

  cout << concatenatedString << endl;
  return 0;
}