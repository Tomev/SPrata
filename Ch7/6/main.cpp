// Solution to problem 7.6 from S. Prata C++ Primer Plus

#include <iostream>
#include <sstream>

using std::cin, std::cout, std::stod, std::string;

unsigned int fillArray(double *array, const unsigned int &n){

  unsigned int actualNumberOfElements = 0;

  std::stringstream ss;
  string input;
  double convertedInput;

  for(unsigned int i = 0; i < n; ++i){

    cout << "Input element. Non number quit.\n>";
    cin >> input;
    cout << input << std::endl;
    ss << input;
    ss >> convertedInput;

    if(ss.fail()) {
      cout << "Conversion failed.\n";
      return actualNumberOfElements;
    }

    array[i] = convertedInput;
    ++actualNumberOfElements;
    ss.clear();
   }

  return actualNumberOfElements;
}

void showArray(const double *array, const unsigned int &n){

  for(unsigned int i = 0; i < n; ++i){
    cout << array[i] << " ";
  }

  cout << std::endl;
}

// Passing pointer by reference
void reverseArray(double *&array, const unsigned int &n){
  auto *reversedArray = new double[n];

  for(unsigned int i = n; i > 0; -- i){
    reversedArray[n - i] = array[i - 1];
  }

  delete[] array;
  array = reversedArray;
}

int main() {

  unsigned int n = 0;
  cout << "Input elements number.\n>";
  cin >> n;
  auto *array = new double[n];

  n = fillArray(array, n);
  cout << "Input array: ";
  showArray(array, n);
  cout << "Reversed array: ";
  reverseArray(array, n);
  showArray(array, n);
  delete[] array;

  return 0;
}