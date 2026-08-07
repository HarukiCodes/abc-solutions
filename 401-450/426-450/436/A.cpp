#include <iomanip>
#include <iostream>
using namespace std;

int main() {
    int n;
    string s;
    cin >> n >> s;
    cout << setw(n) << setfill('o') << s << endl;
    return 0;
}