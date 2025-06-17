// ABC202 A
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    // ans = (7-a)+(7-b)+(7-c)
    cout << 7 * 3 - (a + b + c) << endl;
    return 0;
}
