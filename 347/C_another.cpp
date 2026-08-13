// C
#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long N, A, B;
    cin >> N >> A >> B;
    long long W = A + B;
    vector<long long> D;
    for (int i = 0; i < N; i++)
    {
        long long d;
        cin >> d;
        d %= W;
        D.push_back(d);
        D.push_back(d + W);
    }
    // sort
    sort(D.begin(), D.end());

    for (int i = 0; i < N; i++)
    {
        // i+N = 1‚Â–Ú‚Ì—\’è -> i+N-1 = NŒÂ–Ú‚Ì—\’è
        int L = D[i], R = D[i + N - 1];
        // “ú”ŠÔ L+d-1=R <->d=R-L+1
        if (R - L + 1 <= A)
        {
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
    return 0;
}