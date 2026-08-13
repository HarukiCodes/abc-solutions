#include <iostream>
#include <vector>
using namespace std;

int main() {
  int n, m;
  cin >> n >> m;
  vector<int> a(n), b(m);
  for (int &i : a) {
    cin >> i;
  }
  for (int &i : b) {
    cin >> i;
    i--;  // base:1->0
  }
  int total = 0;
  for (int i : b) {
    total += a[i];
  }
  cout << total << endl;
  return 0;
}