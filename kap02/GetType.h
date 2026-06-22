template <typename T> const char *gettype(T value);
// Template specialization for int.
template <> const char *gettype(int value);
// Template specialization for unsigned int.
template <> const char *gettype(unsigned int value);
// Template specialization for char.
template <> const char *gettype(char value);
// Template specialization for bool.
template <> const char *gettype(bool value);
