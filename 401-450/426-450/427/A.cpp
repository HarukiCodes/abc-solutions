#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;
  for (int i = 0; i < s.size(); i++) {
    if (i == s.size() / 2) {
      continue;
    }
    cout << s[i];
  }
  cout << endl;
  return 0;
}
