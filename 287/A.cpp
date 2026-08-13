#include <iostream>
#include <map>
using namespace std;

int main() {
  int n;
  cin >> n;
  map<string, int> count;
  count["For"] = 0, count["Ageinst"] = 0;
  for (int i = 0; i < n; i++) {
    string s;
    cin >> s;
    count[s]++;
  }
  cout << (count["For"] > count["Against"] ? "Yes" : "No") << endl;
  return 0;
}