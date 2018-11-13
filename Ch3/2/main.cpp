#include <iostream>

const double metersInInch = 0.0254;
const int inchesInFoot = 12;
const double kgsInPound = 0.45;

double countBMI(double massInKg, double heightInMeters)
{
  return massInKg / (heightInMeters * heightInMeters);
}

double inchesToMeters(double inches)
{
  return inches * metersInInch;
}

double poundsToKg(double pounds)
{
  return pounds * kgsInPound;
}

int main(void)
{
  using namespace std;

  cout << "Input weight in pounds.\n>";
  double weightInPounds = 0;
  cin >> weightInPounds;

  cout << "Input heights feet (int).\n>";
  int heightsFeet = 0;
  cin >> heightsFeet;

  cout << "Input heights inches (int).\n>";
  int heightsInches = 0;
  cin >> heightsInches;

  cout  << "Your BMI equals " << countBMI(
        poundsToKg(weightInPounds),
        inchesToMeters(heightsInches + heightsFeet * inchesInFoot)
        )
        << ".\n";


  return 0;
}