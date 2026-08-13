// A
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N;
    cin >> N;
    int sum = 0;
    for (int i = 1; i <= N - 1; i++)
    {
        int A;
        cin >> A;
        sum += A;
    }
    cout << -sum << endl;
    return 0;
}