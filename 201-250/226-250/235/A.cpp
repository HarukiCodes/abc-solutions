#include <bits/stdc++.h>
using namespace std;

int GetThreeDigits(int a, int b, int c)
{
    return a * 100 + b * 10 + c;
}

int main()
{
    string num;
    cin >> num;
    int a = num[0] - '0', b = num[1] - '0', c = num[2] - '0';
    cout << GetThreeDigits(a, b, c) + GetThreeDigits(b, c, a) + GetThreeDigits(c, a, b) << endl;
    return 0;
}
