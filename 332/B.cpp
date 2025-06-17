// B
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int K, G, M;
    cin >> K >> G >> M;
    int glass = 0, mug = 0; // Å‰‚Í‹ó

    for (int i = 0; i < K; i++)
    {
        if (glass == G)
        {
            glass = 0;
        }
        else if (mug == 0)
        {
            mug = M;
        }
        else
        {
            if (mug >= G - glass)
            {
                mug = (mug - G + glass);
                glass = G;
            }
            else
            {
                glass = (glass + mug);
                mug = 0;
            }
        }
    }
    cout << glass << ' ' << mug << endl;
    return 0;
}