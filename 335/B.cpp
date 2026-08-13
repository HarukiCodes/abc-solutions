// B - Tetrahedral Number
#include <iostream>
#include <tuple>
#include <vector>
#include <algorithm>
using namespace std;
typedef tuple<int, int, int> Tetra;
int main()
{
    int N;
    cin >> N;
    vector<Tetra> ans;
    for (int x = 0; x <= N; x++)
    {
        for (int y = 0; y <= N; y++)
        {
            for (int z = 0; z <= N; z++)
            {
                if (x + y + z <= N)
                {
                    Tetra t = make_tuple(x, y, z);
                    ans.push_back(t);
                }
            }
        }
    }
    sort(ans.begin(), ans.end());
    for (Tetra t : ans)
    {
        cout << get<0>(t) << ' ' << get<1>(t) << ' ' << get<2>(t) << '\n';
    }
    return 0;
}