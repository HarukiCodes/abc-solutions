#include <bits/stdc++.h>
using namespace std;

int f(int n) {
  string s = to_string(n);
  int res = 0;
  for (auto i : s) {
    res += (i - '0');
  }
  return res;
}

int main() {
  int n;
  cin >> n;
  vector<int> a(n + 1);
  a[0] = 1;
  for (int i = 1; i <= n; i++) {
    for (int j = 0; j < i; j++) {
      a[i] += f(a[j]);
    }
  }
  cout << a[n] << endl;
  return 0;
}
