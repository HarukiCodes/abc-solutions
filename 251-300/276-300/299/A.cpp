#include <iostream>
using namespace std;

int main() {
  int n;
  string s;
  cin >> n >> s;
  int bar[2], ast, index = 0;
  for (int i = 0; i < n; i++) {
    if (s[i] == '|') {
      bar[index++] = i;
    } else if (s[i] == '*') {
      ast = i;
    }
  }
  cout << (bar[0] < ast && ast < bar[1] ? "in" : "out") << endl;
  return 0;
}