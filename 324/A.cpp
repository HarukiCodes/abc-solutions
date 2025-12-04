// A
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;
    vector<int> A(N);
    for (int &a : A)
        cin >> a;
    int B = A[0];
    for (int i = 1; i < N; i++)
    {
        if (A[i] != B)
        {
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;
    return 0;
}