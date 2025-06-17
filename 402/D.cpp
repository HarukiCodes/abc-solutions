#include <bits/stdc++.h>
using namespace std;
using Line = pair<int, int>;
bool isCrossing(Line l1, Line l2)
{
    if (l1.first < l2.first && l1.second > l2.first){
        return true;
    }
    l1.swap(l2);
    if (l1.first < l2.first && l1.second > l2.first){
        return true;
    }
}

int main()
{

    return 0;
}
