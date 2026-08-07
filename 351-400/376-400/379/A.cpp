#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;
    int a = 2, b = 1, c = 0;
    int numOf[3]{};
    for (int i = 0; i < 3; i++)
    {
        numOf[i] = (N / (int)pow(10, i)) % 10;
    }
    cout << numOf[b] << numOf[c] << numOf[a] << ' ';
    cout << numOf[c] << numOf[a] << numOf[b] << '\n';
    return 0;
}
