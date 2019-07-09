// Stephen Prata C++ Primer Plus, Ch. 6, A. 6 Solution

#include <iostream>
#include <vector>

using std::cin, std::cout, std::endl, std::string, std::vector;

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

  int numberOfSponsors = 0;
  vector<sponsor> sponsors;

  // No validity checks
  cout << "Input number of sponsors.\n>";
  cin >> numberOfSponsors;

  // Input sponsors
  for(int i = 0; i < numberOfSponsors; ++i)
  {

    sponsor s;
    cout << "Input sponsor " << i + 1 << " name.\n>";
    cin >> s.surname;
    cout << "Input sponsor " << i + 1 << " amount.\n>";
    cin >> s.amount;

    sponsors.push_back(s);
  }

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