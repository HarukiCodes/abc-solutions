#include <bits/stdc++.h>
using namespace std;

int main()
{
    int Q;
    cin >> Q;
    vector<int> cards(100, 0);
    for (int i = 0; i < Q; ++i)
    {
        int type;
        cin >> type;
        if (type == 1)
        {
            int x;
            cin >> x;
            cards.push_back(x);
        }
        else if (type == 2)
        {
            cout << cards.back() << endl;
            cards.pop_back();
        }
    }
    return 0;
}
