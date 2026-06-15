#include "./ab112.cpp"
#include <iostream>
using namespace std;

int main() {
  int x;
  cout << "Bitte gebe eine Ganzzahl ein: ";
  cin >> x;
  printf("Die eingegebene Zahl %d als Binärzahl: %c", x, calcBinaryDigit(x));
}
