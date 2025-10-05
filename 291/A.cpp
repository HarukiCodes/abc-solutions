#include <iostream>
using namespace std;

int main() {
  string s;
  cin >> s;
  for (int i = 0; i < s.size(); i++) {
    if (isupper(s[i])) {
      cout << i + 1 << endl;
      return 0;
    }
  }
}