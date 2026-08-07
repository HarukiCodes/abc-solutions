// B
#include <bits/stdc++.h>
using namespace std;
int main()
{
    // input
    vector<long long> A;
    while (true)
    {
        int tmp;
        cin >> tmp;
        A.push_back(tmp);
        if (tmp == 0)
            break;
    }

    // algorithm
    reverse(A.begin(), A.end());

    // output
    for (long long a : A)
        cout << a << endl;
    return 0;
}