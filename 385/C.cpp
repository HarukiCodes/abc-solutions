#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int N;
    cin >> N;
    vector<int> heights(N);
    for (int i = 0; i < N; i++)
    {
        cin >> heights[i];
    }
    vector<vector<int>> building(3001);
    // 同じ高さのビルの位置を記録
    for (int i = 0; i < N; i++)
    {
        building[heights[i]].push_back(i);
    }

    for (int i = 0; i < 3001; i++)
    {
        if (building[i].size())
        {
            cout << "height: " << i << endl;
        }
        for (int j = 0; j < building[i].size(); j++)
        {
            cout << building[i][j] << " ";
        }
    }

    // int ans = 0;
    // for (int i = 0; i < 3001; i++)
    // {
    //     int numBuilding = (int)building[i].size();
    //     if (numBuilding <= 1)
    //     {
    //         ans = max(ans, numBuilding);
    //         continue;
    //     }
    //     cout << numBuilding << endl;
    //     // 等間隔であるか確認する
    //     int distance = building[i][1] - building[i][0];
    //     bool isEquallySpaced = true;
    //     for (int j = 2; j < numBuilding; j++)
    //     {
    //         if (building[i][j] - building[i][j - 1] != distance)
    //         {
    //             isEquallySpaced = false;
    //             break;
    //         }
    //     }
    //     if (isEquallySpaced)
    //     {
    //         ans = max(ans, numBuilding);
    //     }
    // }
    //cout << ans << "\n";
    return 0;
}
