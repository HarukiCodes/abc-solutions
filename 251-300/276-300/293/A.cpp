#include <iostream>
using namespace std;

int main() {
  string s;
  cin >> s;
  for (size_t i = 0; i < s.size(); i += 2) {
    swap(s[i], s[i + 1]);
  }
  cout << s << endl;
  return 0;
}