// Solution to problem 7.8 from S. Prata C++ Primer Plus

#include <iostream>
#include <array>
#include <string>

// dane stałe
const int Seasons = 4;
const char* Snames [Seasons]= {"Wiosna", "Lato", "Jesień", "Zima"};

/* Default
// Funkcja modyfikująca tablicę typu array
void fill(std::array<double, Seasons> *pa);

// Funkcja przetwarzająca tablicę typu array bez ingerencji w jej zawartość
void show(std::array<double, Seasons> da);
*/

// Variant (a)
/*
void fill(double *ar);
void show(double *ar);
*/

// Variant (b)
struct seasonalExpenses{
  double values[Seasons];
};

void fill(seasonalExpenses &e);
void show(const seasonalExpenses &e);


int main() {
  /* Default
  std::array<double, Seasons> expenses;
  fill(&expenses);
  show(expenses);
  */

  seasonalExpenses expenses{};
  fill(expenses);
  show(expenses);
  return 0;
}

// Default
/*
void fill(std::array<double, Seasons> *pa){
  using namespace std;
  for(int i = 0; i < Seasons; ++i){
    cout << "Podaj wydatki za okres >>" << Snames[i] << "<<: ";
    cin >> (*pa)[i];
  }
}

void show(std::array<double, Seasons> da){
  using namespace std;
  double total = 0.0;
  cout << "\nWydatki\n";
  for(int i = 0; i < Seasons; ++i){
    cout << Snames[i] << ": " << da[i] << " zł" << endl;
    total += da[i];
  }
  cout << "Łącznie wydatki roczne: " << total << "zł\n";
}
 */

// Variant (a)
/*
void fill(double *ar){
  using namespace std;
  for(int i = 0; i < Seasons; ++i){
    cout << "Podaj wydatki za okres >>" << Snames[i] << "<<: ";
    cin >> ar[i];
  }
}

void show(double *ar){
  using namespace std;
  double total = 0.0;
  cout << "\nWydatki\n";
  for(int i = 0; i < Seasons; ++i){
    cout << Snames[i] << ": " << ar[i] << " zł" << endl;
    total += ar[i];
  }
  cout << "Łącznie wydatki roczne: " << total << "zł\n";
}
*/

// Variant (b)
void fill(seasonalExpenses &e){
  using namespace std;
  for(int i = 0; i < Seasons; ++i){
    cout << "Podaj wydatki za okres >>" << Snames[i] << "<<: ";
    cin >> e.values[i];
  }
}

void show(const seasonalExpenses &e){
  using namespace std;
  double total = 0.0;
  cout << "\nWydatki\n";
  for(int i = 0; i < Seasons; ++i){
    cout << Snames[i] << ": " << e.values[i] << " zł" << endl;
    total += e.values[i];
  }
  cout << "Łącznie wydatki roczne: " << total << "zł\n";
}