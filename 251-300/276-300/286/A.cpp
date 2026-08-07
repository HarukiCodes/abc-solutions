#include <iostream>
#include <vector>
using namespace std;

int main() {
  int n, p, q, r, s;
  cin >> n >> p >> q >> r >> s;
  p--, q--, r--, s--;  // 1-based -> 0-based
  vector<int> a(n);
  for (int &i : a) {
    cin >> i;
  }
  for (int i = 0; i < q - p + 1; i++) {
    swap(a[p + i], a[r + i]);
  }
  for (int i : a) {
    cout << i << " ";
  }
  cout << endl;
  return 0;
}