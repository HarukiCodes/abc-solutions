#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    string hexChars = "0123456789ABCDEF";
    cout << hexChars[N / 16] << hexChars[N % 16] << endl;
    return 0;
}