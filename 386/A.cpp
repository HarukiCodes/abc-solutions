#include <bits/stdc++.h>
using namespace std;

int main()
{
    set<int> cardNum;
    for (int i = 0; i < 4; i++)
    {
        int num;
        cin >> num;
        cardNum.insert(num);
    }
    // フルハウスになるならカードの種類は必ず2種類になる
    cout << ((cardNum.size() == 2) ? "Yes\n" : "No\n");
    return 0;
}
