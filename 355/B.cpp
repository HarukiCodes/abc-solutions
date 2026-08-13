#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N, M;
    cin >> N >> M;
    bool ans = false;
    vector<int> A(N + 1, 0), C(N + M + 1, 0);
    for (int i = 1; i <= N; i++)
    {
        cin >> A[i];
        C[i] = A[i];
    }
    for (int i = 1; i <= M; i++)
    {
        cin >> C[N + i];
    }
    sort(A.begin(), A.end());
    sort(C.begin(), C.end());
    for (int i = 2; i <= N + M; i++)
    {
        bool C1 = binary_search(A.begin(), A.end(), C[i - 1]);
        bool C2 = binary_search(A.begin(), A.end(), C[i]);
        if (C1 && C2)
        {
            ans = true;
        }
    }
    if (ans)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
    return 0;
}