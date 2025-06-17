#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

long long CountSnake(string num)
{
    long long ret = 0;
    // sigma(1<=i<=9)j^i
    for (int i = 1; i < num.size() - 1; i++)
    {
        for (int j = 1; j <= 9; j++)
        {
            ret += (long long)pow(j, i);
        }
    }
    // 最上位桁について
    int exponent = (int)num.size() - 1;
    for (int i = 1; i < (num[0] - '0'); i++)
    {
        ret += (long long)pow(i, exponent);
    }
    int base = num.front() - '0';
    reverse(num.begin(), num.end());
    for (int i = 0; i < num.size() - 1; i++)
    {
        ret += (long long)(pow(base, i) * std::clamp(num[i] - '0', 0, base - 1));
    }
    return ret + 1LL;
}

int main()
{
    long long L, R;
    cin >> L >> R;
    cout << CountSnake(to_string(R)) - CountSnake(to_string(L)) + 1LL << endl;
    return 0;
}
