#include <iostream>
#include <vector>
using namespace std;

int main() {
  int n;
  cin >> n;
  while (n--) {
    int a;
    cin >> a;
    if (a % 2 == 0) {
      cout << a << ' ';
    }
  }
  cout << endl;
  return 0;
}