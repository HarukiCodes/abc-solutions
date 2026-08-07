#include <bitset>
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int arr[] = {1, 2, 4, 8, 11, 12, 14, 16, 18, 21};
    cout << sizeof(arr) / sizeof(int) << endl;
    for (int i = 0; i < sizeof(arr) / sizeof(int); i++) {
        cout << bitset<8>(arr[i]) << endl;
    }
    return 0;
}
