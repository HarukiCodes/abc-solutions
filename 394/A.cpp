#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    string S;
    cin >> S;
    int numTwo = count(S.begin(), S.end(), '2');
    cout << string(numTwo, '2') + "\n";
    return 0;
}
