#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int N;
    cin >> N;
    vector<long long> A(N);
    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
    }
    long long ans = 0;
    for (int i = 0; i < N; i++)
    {
        int num = lower_bound(A.begin(), A.end(), A[i] * 2) - A.begin();
        ans += (A.size() - num);
    }
    cout << ans << "\n";
    return 0;
}
