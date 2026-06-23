#include "./GetType.h"
#include <iostream>

int main() {
  int i = 0;
  std::cout << gettype(i) << "\n";
  unsigned int j = 0;
  std::cout << gettype(j) << "\n";
  char k = '\0';
  std::cout << gettype(k) << "\n";
  bool l = false;
  std::cout << gettype(l) << "\n";
  float m = 0;
  std::cout << gettype(m) << "\n";
}
