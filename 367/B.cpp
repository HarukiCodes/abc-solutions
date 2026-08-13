#include <bits/stdc++.h>
using std::cin;
using std::cout;
int main()
{
    double input;
    cin >> input;
    int copy = static_cast<int>(input * 1000);
    int digit = 3;
    for (int i = 10; i <= 1000; i *= 10)
    {
        if (copy % i == 0)
        {
            digit--;
        }
    }
    cout << std::fixed << std::setprecision(digit) << input << '\n';
    return 0;
}