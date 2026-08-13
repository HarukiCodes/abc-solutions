#include <bits/stdc++.h>
using namespace std;

long long radix_conversion(int num, int radix)
{
    long long result = 0;
    int weight = 1;
    while (num > 0)
    {
        result += (num % radix) * weight;
        num /= radix;
        weight *= 10;
    }
    return result;
}

int main()
{
    // int A;
    // long long N;
    // cin >> A >> N;
    // cout << radix_conversion(24, 2) << endl;

    while (true)
    {
        int A, B;
        cin >> A >> B;
        if (A == -1)
        {
            break;
        }
        cout << radix_conversion(A, B) << endl;
    }
    return 0;
}
