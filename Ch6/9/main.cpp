// Stephen Prata C++ Primer Plus, Ch. 6, A. 9 Solution
#include <iostream>
#include <fstream>
#include <vector>

using std::cin, std::cout, std::endl, std::string, std::vector, std::getline;

struct sponsor{
  string surname;
  double amount;

  void print() const {
    cout << surname << ", Amount: " << amount << endl;
  }

};

int greatSponsorThresholdValue = 10000;

string greatSponsorsHeadline = "\nOur Great Sponsors\n\n";
string sponsorsHeadline = "\nOur Sponsors\n\n";
string noSponsorInGroupInfo = "None\n";

int main() {

  std::fstream file("D:\\Coding\\C++\\SPrata\\Ch6\\9\\input.txt", std::fstream::in);

  if(!file) return 1;

  string line = "";

  // There's no need for first line, hence I'm omitting it.
  getline(file, line);

  vector<sponsor> sponsors;

  while (getline(file, line)) {
    sponsor s;
    s.surname = line;
    getline(file, line);
    s.amount = std::stod(line);
    sponsors.push_back(s);
  }

  file.close();

  // Print great sponsors
  int greatSponsorsNumber = 0;
  cout << greatSponsorsHeadline;

  for(const sponsor &s : sponsors)
    if(s.amount >= greatSponsorThresholdValue){
      ++greatSponsorsNumber;
      s.print();
    }

  if(greatSponsorsNumber == 0) cout << noSponsorInGroupInfo;

  // Print sponsors
  int sponsorsNumber = 0;
  cout << sponsorsHeadline;

  for(const sponsor &s : sponsors)
    if(s.amount < greatSponsorThresholdValue){
      s.print();
      ++sponsorsNumber;
    }

  if(sponsorsNumber == 0) cout << noSponsorInGroupInfo;

  return 0;
}