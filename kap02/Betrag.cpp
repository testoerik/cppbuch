#include "./Betrag.h"
#include <iostream>
template <typename T> T betrag(T t) {
  if (t < 0) {
    t *= (-1);
    return t;
  } else {
    return t;
  }
}

template <> char betrag<char>(char t) {
  std::cout << "not allowed type!" << "\n";
  return t;
}
