#include <bits/stdc++.h>
using namespace std;

set<int> nest[1000007];

int main()
{
    int N, Q;
    cin >> N >> Q;
    for (int i = 1; i < 1000007; ++i)
    {
        nest[i].insert(i);
    }
    for (int i = 0; i < Q; ++i)
    {
        int type;
        cin >> type;
        if (type == 1)
        {
            int a, b;
            cin >> a >> b;
            nest[b].insert(a);
            nest[a].erase(b);
        }
        else if (type == 2)
        {
            int a, b;
            cin >> a >> b;
            swap(nest[a], nest[b]);
        }
        else if (type == 3)
        {
            int a;
            cin >> a;
            for (int i = 1; i <= N; i++)
            {
                if (nest[i].find(a) != nest[i].end())
                {
                    cout << i << endl;
                }
            }
        }
    }
    return 0;
}
