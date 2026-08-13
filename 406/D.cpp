#include <bits/stdc++.h>
using namespace std;

int main()
{
    int H, W, N;
    cin >> H >> W >> N;
    vector<int> garbageOnX(N + 1), garbageOnY(N + 1);
    for (int i = 1; i < H; i++)
    {
        for (int j = 1; j < W; j++)
        {
            int x, y;
            cin >> x >> y;
            garbageOnX[x]++;
            garbageOnY[x]++;
        }
    }
    int Q;
    cin >> Q;
    for (int i = 0; i < Q; i++)
    {
        int type, input;
        cin >> type >> input;
        if (type == 1)
        {
            cout << garbageOnX[input] << endl;
            garbageOnX[input] = 0;
        }
        else if (type == 2)
        {
            cout << garbageOnY[input] << endl;
            for(int j=0;j<H;j++){

            }
            garbageOnY[input] = 0;
        }
    }
    return 0;
}
