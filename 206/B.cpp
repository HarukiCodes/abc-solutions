// ABC206 B.cpp
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;
    int currentMoney = 0;
    for (int i = 1;; i++)
    {
        currentMoney += i;
        if (currentMoney >= N)
        {
            cout << i << endl;
            return 0;
        }
    }
    return 0;
}
