// A
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int scoreA = 0, scoreB = 0;
    for (int i = 0; i < 9; i++)
    {
        int tmp;
        cin >> tmp;
        scoreA += tmp;
    }
    for (int i = 0; i < 8; i++)
    {
        int tmp;
        cin >> tmp;
        scoreB += tmp;
    }
    cout << scoreA + 1 - scoreB << endl;
    return 0;
}