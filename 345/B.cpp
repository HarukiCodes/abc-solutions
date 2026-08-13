// B
#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long N;
    ;
    cin >> N;
    if (N > 0 && N % 10 != 0)
        N += 10;
    cout << N / 10 << endl;
    return 0;
}