#include "anton-and-danik.h"

string antonAndDanik(int n, string str) {
  int anton = 0;
  int danik = 0;

  for (size_t i = 0; i < (size_t)n; ++i) {
    switch (str[i]) {
      case 'A':
        anton++;
        break;
      case 'D':
        danik++;
    }
  }

  if (anton > danik) return "Anton";
  if (danik > anton) return "Danik";

  return "Friendship";
}
