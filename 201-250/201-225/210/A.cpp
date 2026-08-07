// ABC210 A.cpp
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N, A, X, Y;
    cin >> N >> A >> X >> Y;
    if (N < A)
    {
        cout << X * N << endl;
    }
    else
    {
        cout << X * A + Y * (N - A) << endl;
    }
    return 0;
}
