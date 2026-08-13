// C
#include <bits/stdc++.h>
using namespace std;
vector<long long> B;
long long N, sum = 0;
bool judge()
{
    long long cnt = 0;
    for (long long x : B)
    {
        if (x < 2)
            cnt++;
    }
    if (cnt == B.size())
    {
        return false;
    }
    return true;
}
void operation()
{
    for (long long i = 0; i < (int)B.size(); i++)
    {
        if (B[i] >= 2)
        {
            sum += B[i];
            long long U, D;
            if (B[i] % 2 != 0)
            {
                U = (B[i] + 1) / 2;
                D = B[i] / 2;
            }
            else
            {
                U = (B[i] / 2);
                D = (B[i] / 2);
            }
            B.erase(B.begin() + i);
            B.push_back(U);
            B.push_back(D);
            return;
        }
    }
}
int main()
{
    cin >> N;
    B.push_back(N);
    while (judge())
    {
        operation();
    }
    cout << sum << endl;
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long N;
    cin >> N;
    N--;
    long long n = log2(N + 1); // 2^n-1=N
    long long m = N - (pow(2, n) - 1);
    long long ans = 0;
    // 2*1+3*2+4*8+...
    for (int i = 2; i <= n + 1; i++)
    {
        ans += i * pow(2, i - 2);
    }
    // ‚×‚«æŒÂ‚È‚¢”—ñ
    ans += (n + 2) * m;
    cout << ans << endl;
    return 0;
}