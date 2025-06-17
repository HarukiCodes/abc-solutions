#include <bits/stdc++.h>
using namespace std;

// C.cpp 解けなかった
int main()
{
    int N;
    cin >> N;
    vector<long long> H(N + 1, 0);
    for (int i = 1; i <= N; i++)
    {
        cin >> H[i];
    }
    long long T = 0;
    for (int i = 1; i <= N; i++)
    {
        //[1 1 3]が何周期あるか
        T += (H[i] / 5) * 3;

        //[1] or [1 1]
        H[i] %= 5;

        // 残り体力を削る処理
        while (H[i] > 0)
        {
            T++;
            if (T % 3 == 0)
            {
                H[i] -= 3;
            }
            else
            {
                H[i]--;
            }
        }
    }
    cout << T << '\n';
    return 0;
}
// int main()
// {
//     int N;
//     cin >> N;
//     vector<long long> H(N + 1, 0);
//     for (int i = 1; i <= N; i++)
//     {
//         cin >> H[i];
//     }
//     long long T = 0;
//     for (int i = 1; i <= N; i++)
//     {
//         if (H[i] < 0)
//         {
//             continue;
//         }
//         T += (H[i] / 5) * 3;
//         int dH = 0, dT = 3;
//         switch (H[i] % 5)
//         {
//         case 0:
//             dT = 0;
//             break;
//         case 1:     // 1
//             dH = 4; // 1+3
//             break;
//         case 2:     // 1+1
//             dH = 3; // 3
//             break;
//         case 3:
//         case 4:
//             dH = 0;
//             break;
//         }
//         T += dT;
//         if (i < N)
//         {
//             H[i + 1] -= dH;
//         }
//     }
//     if (H[N] % 5 < 3)
//     {
//         T -= (3 - H[N] % 5);
//     }
//     cout << T << '\n';
//     return 0;
// }