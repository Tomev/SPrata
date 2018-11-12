#include <iostream>

void writeEntliczekPentliczek(void)
{
  std::cout << "Entliczek pentliczek\n";
}

void writeCzerwonyStoliczek(void)
{
  std::cout << "Czerwony stoliczek\n";
}

int main(void)
{
  writeEntliczekPentliczek();
  writeEntliczekPentliczek();
  writeCzerwonyStoliczek();
  writeCzerwonyStoliczek();
  return 0;
}