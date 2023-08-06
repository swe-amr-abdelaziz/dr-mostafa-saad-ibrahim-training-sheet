#include "src/vanya-and-fence.h"

int main() {
  int n, h;
  cin >> n >> h;
  int heights[1000];

  for (int i = 0; i < n; ++i) {
    cin >> heights[i];
  }

  int result = vanyaAndFence(n, h, heights);
  cout << result << '\n';

  return 0;
}
