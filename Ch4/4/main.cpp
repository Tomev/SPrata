#include <iostream>
#include <string>

int main()
{
  using namespace std;

  string name = "";
  string surname = "";

  cout << "Input name.\n>";
  cin >> name;
  cout << "Input surname.\n>";
  cin >> surname;

  string concatenatedString = "Concatenated string: " + surname + ", " + name;

  cout << concatenatedString << endl;
  return 0;
}