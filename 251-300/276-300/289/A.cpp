#include <iostream>
using namespace std;

int main() {
  string s;
  cin >> s;
  for (char &c : s) {
    c = (c == '0' ? '1' : '0');
  }
  cout << s << endl;
  return 0;
}