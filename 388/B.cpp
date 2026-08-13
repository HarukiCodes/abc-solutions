#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int N, D;
    cin >> N >> D;
    vector<int> T(N), L(N);
    for (int i = 0; i < N; i++)
    {
        cin >> T[i] >> L[i];
    }
    for (int k = 1; k <= D; k++)
    {
        int maxWeight = 0;
        for (int i = 0; i < N; i++)
        {
            int weight = T[i] * (L[i] + k);
            maxWeight = max(maxWeight, weight);
        }
        cout << maxWeight << "\n";
    }
    return 0;
}
