#include "./Betrag.h"

template <typename T> const char *betrag(T) { return "Nicht sinnvoller Typ!"; };
template <> const char *betrag<int>(int t) {
  if (t < 0) {
    t *= (-1);
    return (const char *)t;
  } else {
    return (const char *)t;
  }
}
