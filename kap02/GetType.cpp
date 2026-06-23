#include "./GetType.h"
#include <iostream>

template <> const char *gettype<int>(int) { return "int"; }
template <> const char *gettype<unsigned int>(unsigned int) {
  return "unsigned int";
}
template <> const char *gettype<char>(char) { return "char"; }
template <> const char *gettype<bool>(bool) { return "bool"; }
