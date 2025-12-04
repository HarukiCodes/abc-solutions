// ABC202 B
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string S;
    cin >> S;
    int length = static_cast<int>(S.size());
    for (int i = length - 1; i >= 0; i--)
    {
        char output = S[i];
        switch (S[i])
        {
        case '6':
            output = '9';
            break;
        case '9':
            output = '6';
            break;
        }
        cout << output;
    }
    cout << endl;
    return 0;
}
