#include <iostream>

double minutesAndSecondsToDegree(int minutes, int seconds)
{
  double degrees = 0;

  degrees = seconds / 60.0;
  degrees += minutes;

  return degrees / 60.0;
}

int main(void)
{
  using namespace std;

  cout << "Input degrees (int).\n>";
  int degrees = 0;
  cin >> degrees;

  cout << "Input minutes (int).\n>";
  int minutes = 0;
  cin >> minutes;

  cout << "Input seconds (int).\n>";
  int seconds = 0;
  cin >> seconds;

  cout  << degrees << " degrees, "
        << minutes << " minutes, "
        << seconds << " seconds = "
        << degrees + minutesAndSecondsToDegree(minutes, seconds) << " degrees.\n";

  return 0;
}