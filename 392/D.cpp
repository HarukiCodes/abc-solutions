#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
#include <iomanip>
using namespace std;

int main()
{
    int N;
    cin >> N;
    vector<int> K(N);
    vector<vector<int>> dice(N);
    for (int i = 0; i < N; i++)
    {
        cin >> K[i];
        dice[i].resize(K[i]);
        for (int k = 0; k < K[i]; k++)
        {
            cin >> dice[i][k];
        }
    }
    double ans = 0.0;
    for (int i = 0; i < N; i++)
    {
        for (int j = i + 1; j < N; j++)
        {
            set<int> diceA(dice[i].begin(), dice[i].end());
            set<int> diceB(dice[j].begin(), dice[j].end());
            int first = i, second = j;
            if (diceA.size() > diceB.size())
            {
                swap(diceA, diceB);
                swap(first, second);
            }
            double p = 0.0;
            for (int e : diceA)
            {
                int numIinA = count(dice[first].begin(), dice[first].end(), e);
                int numIinB = count(dice[second].begin(), dice[second].end(), e);
                p += ((double)numIinA / K[first]) * ((double)numIinB / K[second]);
            }
            ans = max(ans, p);
        }
    }
    cout << fixed << setprecision(9) << ans << "\n";
    return 0;
}