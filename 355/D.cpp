#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N;
    cin >> N;
    int kukan[500005] = {};
    for (int i = 1; i <= N; i++)
    {
        int l, r;
        cin >> l >> r;
        for (int j = l; j <= r; i++)
        {
            kukan[j]++;
        }
    }
    sort(kukan + 0, kukan + 500005);
    cout << kukan[500004] << endl;

    return 0;
}