// ABC206 A.cpp
#include <bits/stdc++.h>
using namespace std;

int main()
{
    const int regularPrice = 206;
    int N;
    cin >> N;
    int price = N * 1.08;
    if (price < regularPrice)
    {
        cout << "Yay!" << endl;
    }
    else if (price == regularPrice)
    {
        cout << "so-so" << endl;
    }
    else
    {
        cout << ":(" << endl;
    }
    return 0;
}
