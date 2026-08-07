#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;
    vector<char> c(N);
    vector<long long> l(N);
    for (int i = 0; i < N; i++)
    {
        cin >> c[i] >> l[i];
    }
    string S;
    for (int i = 0; i < N; i++)
    {
        if (S.size() + l[i] > 100)
        {
            cout << "Too Long" << endl;
            return 0;
        }
        S += string(l[i], c[i]);
    }
    cout << S << endl;
    return 0;
}
