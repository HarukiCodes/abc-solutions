// B
#include <bits/stdc++.h>
using namespace std;
int main()
{
    // prepare
    string S, T = "wbwbwwbwbwbw";
    for (int i = 0; i < 30; i++)
        S += T;
    // input
    int W, B;
    cin >> W >> B;
    // solve
    int w_cnt = 0, b_cnt = 0;
    bool flag = false;
    for (int i = 0; i < (int)T.size(); i++)
    {
        for (int j = i; j < i + W + B + 1; j++)
        {
            if (S[j] == 'w')
                w_cnt++;
            if (S[j] == 'b')
                b_cnt++;
            if (w_cnt == W && b_cnt == B)
            {
                flag = true;
                break;
            }
        }
        if (flag)
            break;
        w_cnt = 0, b_cnt = 0, flag = false;
    }
    // output
    if (flag)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
    return 0;
}