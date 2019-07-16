// Solution to problem 7.4 from S. Prata C++ Primer Plus.
// Note that I didn't really understand what is required of me, and thus I'll just write a function that counts
// probability of winning at mentioned lottery.

#include <iostream>


double countProbability(){
  int powerBallMaxNumber = 26;
  int maxBallNumber = 47;
  int ballsNumber = 5;
  double probability = 1.0 / powerBallMaxNumber;

  for(int i = 0; i < ballsNumber; ++i){
    probability /= maxBallNumber - i;
  }

  return probability;
}

int main() {
  std::cout << "Probability of winning at the lottery is: " << countProbability() << ".\n";
  return 0;
}