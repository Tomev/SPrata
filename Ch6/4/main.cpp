#include <iostream>
#include <cstring>

const int strSize = 50;
struct zdpw {
  char name[strSize];
  char job[strSize];
  char nick[strSize];
  int preference = 0;
};

enum preferences{
  NAME, JOB, NICK
};
void showMenu() {
  std::cout << "a) by names \t b) by jobs \nc) by nicks \t d) by preferences\n";
}

void showByNames(zdpw members[], int membersNumber){
  for(int i = 0; i < membersNumber; ++i){
    std::cout << members[i].name << std::endl;
  }
}

void showByJob(zdpw members[], int membersNumber){
  for(int i = 0; i < membersNumber; ++i){
    std::cout << members[i].job << std::endl;
  }
}

void showByNick(zdpw members[], int membersNumber){
  for(int i = 0; i < membersNumber; ++i){
    std::cout << members[i].nick << std::endl;
  }
}

void showByPreferences(zdpw members[], int membersNumber){
  for(int i = 0; i < membersNumber; ++i){
    switch(members[i].preference){
      case NAME:
        std::cout << members[i].name << std::endl;
        break;
      case JOB:
        std::cout << members[i].job << std::endl;
        break;
      case NICK:
      default:
        std::cout << members[i].nick << std::endl;
        break;
    }
  }
}

int main() {

  const int membersNum = 3;

  zdpw members[membersNum];
  strcpy(members[0].name, "z");
  strcpy(members[0].job, "s");
  strcpy(members[0].nick, "a");
  members[0].preference = 0;

  strcpy(members[1].name, "q");
  strcpy(members[1].job, "a");
  strcpy(members[1].nick, "z");
  members[1].preference = 1;

  strcpy(members[2].name, "w");
  strcpy(members[2].job, "e");
  strcpy(members[2].nick, "x");
  members[2].preference = 2;

  showMenu();
  char choice = ' ';
  do {
    std::cout << "Pick your poison (a, b, c, d). Enter q to quit.\n>";
    std::cin >> choice;
    switch(choice) {
      case 'a':std::cout << "By names:\n";
        showByNames(members, membersNum);
        break;
      case 'b':std::cout << "By jobs:\n";
        showByJob(members, membersNum);
        break;
      case 'c':std::cout << "By nicks:\n";
        showByNick(members, membersNum);
        break;
      case 'd':std::cout << "By preferences:\n";
      default:
        showByPreferences(members, membersNum);
        break;
    }
  } while(choice != 'q');
  return 0;
}

