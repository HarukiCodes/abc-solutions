// ABC207 A.cpp
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int input[3];
    for (int &in : input)
    {
        cin >> in;
    }
    sort(input, input + 3);
    cout << input[1] + input[2] << endl;
    return 0;
}
