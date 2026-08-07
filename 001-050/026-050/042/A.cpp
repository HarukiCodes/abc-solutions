// A
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int num[3] = {};
    // input
    for (int &i : num)
        cin >> i;
    sort(num, num + 3);
    if (num[0] == 5 && num[1] == 5 && num[2] == 7)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}