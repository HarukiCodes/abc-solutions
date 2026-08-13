#include <bits/stdc++.h>
using namespace std;

int main()
{
    uint64_t N;
    cin >> N;
    for (uint64_t x = 12; x <= 12; x++)
    {
        uint64_t y3 = x * x * x - N;
        int y = pow(y3, 1 / (double)3);
        cout<<"y:"<<y<<endl;

        cout << y * y * y << endl;
        cout << y3 << endl;
        if (y * y * y == y3 && y > 0)
        {
            cout << x << " " << y << endl;
            return 0;
        }
    }
    cout << "-1" << endl;
    return 0;
}
