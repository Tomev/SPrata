#include <iostream>
#include <array>

int main() {
  using namespace std;

  array<double, 3> times;

  cout << "Input three sprint times in seconds.\n";

  for(int i = 0; i < 3; ++i)
  {
    cout << ">";
    cin >> times[i];
  }

  cout << "Times entered:\n";
  double averageTime = 0.0;

  for(int i = 0; i < 3; ++i) {
    cout << times[i] << " s\n";
    averageTime += times[i];
  }

  cout << "Average time: " << averageTime / 3 << " s.\n";

  return 0;
}