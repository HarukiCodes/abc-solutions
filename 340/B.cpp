// B
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int Q;
    cin >> Q;
    vector<long long> A;
    for (int i = 0; i < Q; i++)
    {
        long long x, k;
        cin >> x >> k;
        if (x == 1)
        {
            A.push_back(k);
        }
        else
        {
            cout << A[A.size() - k] << endl;
        }
    }
    return 0;
}