// C - Loong Tracking
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int N, Q;
    cin >> N >> Q;
    vector<pair<int, int>> dragon(N);

    for (pair<int, int> d : dragon)
    {
        d.first =
    }

    for (int i = 2; i < 2 + Q; i++)
    {
        dragon[i - 2].first = i;
        dragon[i - 2].second = 0;
        int sign;
        char process;
        cin >> sign >> process;
        dragon
    }
    return 0;
}