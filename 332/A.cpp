// A
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N, S, K;
    int sum = 0;
    int P[105], Q[105];
    cin >> N >> S >> K;
    for (int i = 0; i < N; i++)
    {
        cin >> P[i] >> Q[i];
        sum += P[i] * Q[i];
    }
    if (sum >= S)
        K = 0;
    cout << sum + K << endl;
    return 0;
}