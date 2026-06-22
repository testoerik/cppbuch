#include "./GetType.h"
#include <iostream>

template <> const char *gettype<int>(int value) { return "int"; }
template <> const char *gettype<unsigned int>(unsigned int value) {
  return "unsigned int";
}
template <> const char *gettype<char>(char value) { return "char"; }
template <> const char *gettype<bool>(bool value) { return "bool"; }
