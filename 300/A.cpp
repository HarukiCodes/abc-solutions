#include <iostream>
using namespace std;

int main() {
  int n, a, b;
  cin >> n >> a >> b;
  int sum = a + b;
  int index = 1;
  while (n--) {
    int c;
    cin >> c;
    if (sum == c) {
      cout << index << endl;
      break;
    }
    index++;
  }
  return 0;
}