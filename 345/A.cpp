// A
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string S;
    cin >> S;
    bool flag[3] = {false};
    if (S[0] == '<')
        flag[0] = true;
    if (*(S.end() - 1) == '>')
        flag[1] = true;
    if (count(S.begin() + 1, S.end() - 1, '=') == S.size() - 2)
        flag[2] = true;
    if (flag[0] && flag[1] && flag[2])
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
    return 0;
}