#include <iostream>
using namespace std;

int main() {
  int n;
  string s;
  cin >> n >> s;
  for (int i = 1; i < n; i++) {
    if (s[i - 1] == s[i]) {
      cout << "No" << endl;
      return 0;
    }
  }
  cout << "Yes" << endl;
  return 0;
}