#include <iostream>

struct bar{
  std::string producer;
  double weight;
  unsigned int calories;
};

void fillBarData(bar &b, const char *producer = "Millenium Munch", const double weight = 2.85,
                 const unsigned int calories = 350){
  b.producer = producer;
  b.weight = weight;
  b.calories = calories;
}

void showBarData(const bar &b){
  using std::cout, std::endl;

  cout << "Producer: "     << b.producer
       << ",\n Weight: "   << b.weight
       << ",\n Calories: " << b.calories << endl;
}

int main() {
  bar b{};
  fillBarData(b, "a", 3.4, 5);
  showBarData(b);

  bar c{};
  fillBarData(c);
  showBarData(c);

  return 0;
}