#include <bits/stdc++.h>
using namespace std;

int main()
{
    int Q;
    cin >> Q;
    deque<int> row;
    for (int i = 0; i < Q; i++)
    {
        int type;
        cin >> type;
        if (type == 1)
        {
            int X;
            cin >> X;
            row.push_back(X);
        }
        else if (type == 2)
        {
            cout << row.front() << endl;
            row.pop_front();
        }
    }
    return 0;
}
