#include "vanya-and-fence.h"

int vanyaAndFence(int n, int h, int* heights) {
  int result = 0;
  for (int i = 0; i < n; ++i) {
    result += heights[i] > h ? 2 : 1;
  }
  return result;
}
