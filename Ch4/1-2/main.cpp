// 1-2 are done at once, as it doesn't specify in 1 that I cannot use string (as I meant to from the beginning).

#include <iostream>
#include <string>

int main()
{
  using namespace std;

  string name = "";
  string surname = "";
  short grade = 0;
  short age = 0;

  // Note that no validation was required
  cout << "Input name.\n>";
  cin >> name;
  cout << "Input surname.\n>";
  cin >> surname;
  cout << "Input desired grade.\n";
  cin >> grade;
  cout << "Input age.\n>";
  cin >> age;

  cout << "Name: " << surname << ", " << name << endl << "Grade: " << grade << endl << "Age: " << age << endl;

  return 0;
}