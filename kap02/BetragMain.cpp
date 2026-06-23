#include "./Betrag.h"
#include <iostream>

int main() {
  int i = -5;
  std::cout << betrag(i) << "\n";
  const char *j{2} = "f";
  std::cout << betrag(j) << "\n";
}
