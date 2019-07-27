// Solution to problem 7.9 from S. Prata C++ Primer Plus VI ed.

#include <iostream>
using namespace std;

const int SLEN = 30;

struct student{
  char fullname[SLEN];
  char hobby[SLEN];
  int ooplevel;
};

/*
 * Funkcja getinfo() ma dwa parametry: wskaźnik pierwszego elementu tablicy
 * struktur student oraz liczbę int określającą liczbę elementów tablicy.
 * Funkcja pobiera i zapisuje dane o studentach. Wprowadzenie danych kończy
 * się, kiedy tablica jest pełna lub podane zostanie puste nazwisko studenta.
 * Funkcja zwraca liczbę studentów wpisanych do tablicy.
 */
int getinfo(student pa[], int n);

// Funkcja display1() pobiera jako parametr strukturę student i pokazuje jej zawartość.
void display1(student st);

// Funkcja display2() pobiera jako parametr adres struktury student i pokazuje zawartość
// tej struktury.
void display2(const student *ps);

/*
 * Funkcja display3() pobiera jako parametry adres pierwszego elementu tablicy
 * ze strukturami student oraz liczbę elementów w tablicy, po czym wyświetla
 * zawartość wskazanych struktur.
 */
void display3(const student pa[], int n);

int main() {
  cout << "Podaj wielkość grupy: ";
  int class_size;
  cin >> class_size;
  while(cin.get() != '\n') continue;
  auto *ptr_stu = new student[class_size];
  int entered = getinfo(ptr_stu, class_size);
  for(int i = 0; i < entered; ++i){
    display1(ptr_stu[i]);
    display2(&ptr_stu[i]);
  }
  display3(ptr_stu, entered);
  delete[] ptr_stu;
  cout << "Gotowe.\n";
  return 0;
}

int getinfo(student pa[], int n){
  int i = 0;
  for(; i < n; ++i){

    cin.sync();
    pa[i].fullname[0] = '\0';

    cout << "Podaj " << i << ". nazwisko: ";

    for(int j = 0; j < SLEN && cin.peek() != '\n'; ++j){
      cin >> pa[i].fullname[j];
    }

    if(pa[i].fullname[0] == '\0'){
      cout << "Wprowadzono puste nazwisko. Wyjście z funkcji.\n";
      break;
    }

    cout << "Podaj hobby: ";
    cin >> pa[i].hobby;
    cout << "Podaj level: ";
    cin >> pa[i].ooplevel;
  }
  return i;
}

void display1(student st){
  cout << "Name: "    << st.fullname
       << "\nHobby: " << st.hobby
       << "\nLevel: " << st.ooplevel << endl;
}

void display2(const student *ps){
cout << "Name: " << ps->fullname
<< "\nHobby: "   << ps->hobby
<< "\nLevel: "   << ps->ooplevel << endl;
}

void display3(const student pa[], int n){
  for(int i = 0; i < n; ++i){
    display1(pa[i]);
    cout << endl;
  }
}