// A
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N, K;
    cin >> N >> K;
    vector<int> B;
    for (int i = 0; i < N; i++)
    {
        int A;
        cin >> A;
        if (A % K == 0)
        {
            B.push_back(A / K);
        }
    }
    sort(B.begin(), B.end());
    for (int i : B)
    {
        cout << i << ' ';
    }
    cout << endl;
    return 0;
}