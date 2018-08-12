#include <myalgo.h>

template <typename T>
void gswap(T& r1, T& r2) {
  T temp = r1;
  r1 = r2;
  r2 = r1;
}
