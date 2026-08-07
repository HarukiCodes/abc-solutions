#include <bits/stdc++.h>
using namespace std;

struct Right
{
    bool allArrowed = false;
    set<int> watchablePages;
};

int main()
{
    int N, M, Q;
    cin >> N >> M >> Q;
    vector<Right> users(N + 1);
    for (int i = 0; i < Q; i++)
    {
        int type, X, Y;
        cin >> type;
        if (type == 1)
        {
            // ユーザXにコンテストページYの閲覧権限を付与する。
            cin >> X >> Y;
            users[X].watchablePages.insert(Y);
            if (users[X].watchablePages.size() == M)
            {
                users[X].allArrowed = true;
            }
        }
        else if (type == 2)
        {
            // ユーザXにすべてのコンテストページの閲覧権限を付与する。
            cin >> X;
            users[X].allArrowed = true;
        }
        else if (type == 3)
        {
            // ユーザXがコンテストページYを閲覧できるかを答える。
            cin >> X >> Y;
            if (users[X].allArrowed || users[X].watchablePages.find(Y) != users[X].watchablePages.end())
            {
                cout << "Yes" << endl;
            }
            else
            {
                cout << "No" << endl;
            }
        }
    }

    return 0;
}
