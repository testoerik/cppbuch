template <typename T> const char *gettype(T) { return "unbekannter Typ!"; }
// Template specialization for int.
template <> const char *gettype(int);
// Template specialization for unsigned int.
template <> const char *gettype(unsigned int);
// Template specialization for char.
template <> const char *gettype(char);
// Template specialization for bool.
template <> const char *gettype(bool);
