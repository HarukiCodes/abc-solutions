#include <algorithm>
#include <iostream>
using namespace std;

int main() {
  string words[5] = {"and", "not", "that", "the", "you"};
  int n;
  cin >> n;
  while (n--) {
    string w;
    cin >> w;
    for (string s : words) {
      if (w == s) {
        cout << "Yes" << endl;
        return 0;
      }
    }
  }
  cout << "No" << endl;
  return 0;
}