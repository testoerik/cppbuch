#pragma once
template <typename T> T betrag(T t);

// Template specialization for char.
template <> char betrag<char>(char t);
