#include <iostream>
using namespace std;

int main() {
  int n;
  string s;
  cin >> n >> s;
  int goodCount = 0, badCount = 0;
  for (char c : s) {
    if (c == 'o') {
      goodCount++;
    } else if (c == 'x') {
      badCount++;
    }
  }
  cout << (goodCount >= 1 && badCount == 0 ? "Yes" : "No") << endl;
  return 0;
}