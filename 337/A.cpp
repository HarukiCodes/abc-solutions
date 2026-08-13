#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;
    int X = 0, Y = 0;
    for (int i = 0; i < N; i++)
    {
        int x = 0, y = 0;
        cin >> x >> y;
        X += x, Y += y;
    }
    if (X > Y)
        cout << "Takahashi" << endl;
    else if (X < Y)
        cout << "Aoki" << endl;
    else
        cout << "Draw" << endl;
    return 0;
}