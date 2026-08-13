#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;
    vector<int> A(N);
    vector<int> countOf(N + 1);
    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
        countOf[A[i]]++;
    }
    int ans = 0;
    set<int> left, right(A.begin(), A.end());
    for (int i = 0; i < N; i++)
    {
        if (countOf[A[i]] >= 2)
        {
            left.insert(A[i]);
            countOf[A[i]]--;
        }
        else
        {
            left.insert(A[i]);
            right.erase(A[i]);
        }
        int numType = left.size() + right.size();
        ans = max(ans, numType);
    }
    cout << ans << endl;
    return 0;
}
