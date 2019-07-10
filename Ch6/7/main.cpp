#include <iostream>
#include <cctype>

bool isVowel(const char &c){
  return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
          c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');
}

int main() {
  std::cout << "Input words. q quits.\n";
  std::string temp = "";

  int numberOfWordsStartingWithVowel = 0;
  int numberOfWordsStartingWithConsonant = 0;
  int numberOfOtherWords = 0;

  while((std::cin >> temp) and temp != "q") {
    if(! isalpha(temp[0])) {
      ++numberOfOtherWords;
      continue;
    }

    if(isVowel(temp[0])) ++numberOfWordsStartingWithVowel;
    else ++ numberOfWordsStartingWithConsonant;

  }

  std::cout << "Number of words starting with vowel: " << numberOfWordsStartingWithVowel
            << ", Number of words starting with consonant: " << numberOfWordsStartingWithConsonant
            << ", Number of other words: " << numberOfOtherWords << std::endl;

  return 0;
}