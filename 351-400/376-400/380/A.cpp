#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    int countOf[10]{};
    cin >> N;
    for (int i = 5; i >= 0; i--)
    {
        int numOfDigit = (int)(N / pow(10, i));
        N %= (int)pow(10, i);
        countOf[numOfDigit]++;
    }
    for (int i = 1; i < 4; i++)
    {
        if (countOf[i] != i)
        {
            cout << "No\n";
            return 0;
        }
    }
    cout << "Yes\n";
    return 0;
}