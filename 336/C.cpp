// C
#include <bits/stdc++.h>
using namespace std;

long long kaijo(int a, int b)
{
    long long res = 1;
    for (int i = 0; i < b; i++)
        res *= a;
    return res;
}
int main()
{
    long long N;
    cin >> N;
    N--;
    long long quinary = 0;
    long long cw = 1;
    while (N > 0)
    {
        quinary += (N % 5) * cw;
        cw *= 10;
        N /= 5;
    }
    string S = to_string(quinary);

    reverse(S.begin(), S.end());

    int even[5] = {0, 2, 4, 6, 8};

    long long ans = 0;

    for (int i = 0; i < (int)S.size(); i++)
    {
        int index = S[i] - '0';
        ans += even[index] * kaijo(10, i);
    }
    cout << ans << endl;
    return 0;
}