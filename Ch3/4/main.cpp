#include <iostream>

const int secondsInDay = 60 * 60 * 24;
const int secondsInHour = 3600;
const int secondsInMinute = 60;
const int hoursInDay = 24;
const int minutesInHour = 60;

int main(void)
{
  using namespace std;

  cout << "Input number of seconds (long).\n>";
  long long seconds = 0;
  cin >> seconds;

  cout  << seconds << " seconds = "
        << seconds / secondsInDay << " days, "
        << (seconds / secondsInHour) % hoursInDay << " hours, "
        << (seconds / secondsInMinute) % minutesInHour << " minutes, "
        << seconds % secondsInMinute << " seconds.\n";

  return 0;
}