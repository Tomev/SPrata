// Solution to problem 8.7 from S. Prata's C++ Primer Plus VI ed.
#include <iostream>

template<typename T> // Szablon A
void ShowArray(T arr[], int n);

template<typename T> // Szablon B
void ShowArray(T * arr[], int n);

template<typename summable>
summable SumArray(summable arr[], int arSize){
  summable sum = 0;

  for(int i = 0; i < arSize; ++i)
    sum += arr[i];

  std::cout << "Number of things in array: " << arSize << ",\nSum of things in array: " << sum << std::endl;
  return sum;
}

template<typename summable>
summable SumArray(summable *arr[], int arSize){
  summable sum = 0;

  for(int i = 0; i < arSize; ++i)
    sum += *arr[i];

  std::cout << "Number of things in array: " << arSize << ",\nSum of things in array: " << sum << std::endl;
  return sum;
}


struct debts{
  char name[50];
  double amount;
};

int main() {
  using namespace std;
  int things[6] = {13, 31, 103, 301, 310, 130};
  struct debts mr_E[3] = {
      {"Ima Wolfe", 2400},
      {"Ura Foxe", 1300},
      {"Iby Stour", 1800}
  };
  double * pd[3];

  // Ustawienie wskaźników na pola amount struktur z tablicy Mr_E
  for(int i = 0; i < 3; ++i){
    pd[i] = &mr_E[i].amount;
  }

  cout << "Wyliczanie rzeczy pana E.:\n";
  // things to tablica int
  SumArray(things, 6); // używamy szablonu A
  // pd to tablica wskaźników na double
  SumArray(pd, 3); // używa szablonu B (bardziej wyspecjalizowanego)
  return 0;
}

template<typename T> // Szablon A
void ShowArray(T arr[], int n){
  using namespace std;
  cout << "Szablon A\n";
  for(int i = 0; i < n; ++i){
    cout << arr[i] << ' ';
  }
  cout << endl;
}

template<typename T> // Szablon B
void ShowArray(T * arr[], int n){
  using namespace std;
  cout << "Szablon B\n";
  for(int i = 0; i < n; ++i){
    cout << *arr[i] << ' ';
  }
  cout << endl;
}