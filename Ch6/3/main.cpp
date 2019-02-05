#include <iostream>

void showMenu() {
  std::cout << "p) plant eater \t v) violinist\nt) tree \t g) game\n";
}

int main() {
  showMenu();
  char choice = ' ';
  do {
    std::cout << "Pick your poison (p, v, t, g). Press q to quit.\n>";
    std::cin >> choice;
    switch(choice) {
      case 'p':std::cout << "Plant eater.\n";
        break;
      case 'v':std::cout << "Violinist.\n";
        break;
      case 't':std::cout << "Tree.\n";
        break;
      case 'g':std::cout << "Game.\n";
      default:break;
    }
  } while(choice != 'q');
  return 0;
}

