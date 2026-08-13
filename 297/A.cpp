#include <iostream>
#include <vector>
using namespace std;

int main() {
  long long n, d;
  cin >> n >> d;
  vector<long long> t(n);
  for (long long &i : t) {
    cin >> i;
  }
  for (int i = 0; i < n - 1; i++) {
    for (int j = i + 1; j < n; j++) {
      long long x[2] = {t[i], t[j]};
      if (x[1] - x[0] <= d) {
        cout << x[1] << endl;
        return 0;
      }
    }
  }
  cout << -1 << endl;
  return 0;
}