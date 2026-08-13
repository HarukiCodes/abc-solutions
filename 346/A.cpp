// A
#include <bits/stdc++.h>
using namespace std;
int main()
{
    // input
    int N;
    cin >> N;
    vector<int> A(N + 1, 0), B(N + 1, 0);
    for (int i = 1; i <= N; i++)
        cin >> A[i];
    // solve
    for (int i = 1; i < N; i++)
        B[i] = A[i] * A[i + 1];
    // output
    for (int i = 1; i < N; i++)
        cout << B[i] << " ";
    cout << endl;
    return 0;
}