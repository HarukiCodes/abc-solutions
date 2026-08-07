#include <bits/stdc++.h>
using namespace std;

int factorial(int n)
{
    int result = 1;
    for (int i = 2; i <= n; i++)
    {
        result *= i;
    }
    return result;
}

int main()
{
    int coins[11];
    for (int i = 1; i <= 10; i++)
    {
        coins[i] = factorial(i);
    }
    int P;
    cin >> P;
    int ans = 0;
    // 額が大きいコインから払っていく
    for (int i = 10; i >= 1; i--)
    {
        int num_coins = P / coins[i];
        ans += num_coins;
        P -= coins[i] * num_coins;
    }
    cout << ans << endl;
    return 0;
}
