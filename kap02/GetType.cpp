#include "./GetType.h"
#include <iostream>

template <> char *gettype<int>(T value) { return "int"; }
