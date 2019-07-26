// Solution to problem 7.7 from S. Prata C++ Primer Plus

#include <iostream>
const int Max = 5;

double* fill_array(double ar[], int limit);
void show_array(const double ar[], double* lastElement);
void revalue(double r, double ar[], double* lastElement);


int main() {
  using namespace std;
  double properties[Max];

  double* lastElement = fill_array(properties, Max);
  show_array(properties, lastElement);
  if(lastElement != properties){
    cout << "Podaj czynnik zmiany wartości: ";
    double factor;
    while(!(cin >> factor)){
      cin.clear();
      while(cin.get() != '\n')
        continue;
      cout << "Niepoprawna warość. Podaj liczbę: ";
    }
    revalue(factor, properties, lastElement);
    show_array(properties, lastElement);
  }
  cout << "Gotowe." << endl;
  cin.get();
  cin.get();
  return 0;
}

double* fill_array(double ar[], int limit){
  using namespace std;
  double temp;
  int i;
  for(i = 0; i < limit; ++i){
    cout << "Podaj wartość nr " << (i + 1) << ": ";
    cin >> temp;
    if(!cin){
      cin.clear();
      while(cin.get() != '\n')
        continue;
      cout << "Błędne dane, wprowadzenie danych przerwane.\n";
      break;
    } else if (temp < 0)
      break;
    ar[i] = temp;
  }
  // -1 is needed as loop goes beyond limit
  return &ar[i - 1];
}

void show_array(const double ar[], double* lastElement){
  using namespace std;
  int i;
  for(i = 0; &ar[i] != lastElement; ++i)
    cout << "Nieruchomość nr " << (i + 1) << ": " << ar[i] << endl;
  cout << "Nieruchomość nr " << (i + 1) << ": " << ar[i] << endl;
}

void revalue(double r, double ar[], double* lastElement){
  int i;
  for(i = 0; &ar[i] != lastElement; ++i)
    ar[i] *= r;
  ar[i] *= r;
}