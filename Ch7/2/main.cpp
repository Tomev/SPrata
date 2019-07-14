// Solution to problem 7.2 from S. Prata C++ Primer Plus

#include <iostream>
#include <vector>

using std::vector, std::cin, std::cout, std::string, std::stod;

void fillScoreTable(vector<double> &scoreTable){

  string input;
  int maxSize= 10;

  while(scoreTable.size() < maxSize){
    cout << "Input score (max 10 scores, currently " << scoreTable.size() << "). Input q to quit.\n>";
    cin >> input;
    if(input == "q") break;
    scoreTable.push_back(stod(input));
  }
}

double countScoreAverage(const vector<double> &scoreTable){
  double avg = 0;
  for(double i : scoreTable){
    avg += i;
  }
  return avg / scoreTable.size();
}

void printScoreTable(const vector<double> &scoreTable){

  cout << "Current score: ";

  for(double i : scoreTable){
    cout << i << ", ";
  }

  cout << "Avg.: " << countScoreAverage(scoreTable);
}

int main() {
  vector<double> scoreTable;
  fillScoreTable(scoreTable);
  printScoreTable(scoreTable);
  return 0;
}