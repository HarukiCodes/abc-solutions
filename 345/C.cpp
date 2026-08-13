#include <bits/stdc++.h>
using namespace std;
int main()
{
    string S;
    cin >> S;
    int N = S.size();
    string T = S.substr(0, N / 2);
    string U = S.substr(N / 2, N / 2 + 1);
    vector<string> only_T;
    for (int i = 0; i < T.size(); i++)
    {
        for (int j = i + 1; j < T.size(); j++)
        {

            only_T.push_back()
        }
    }
    vector<string> only_U;
    for (int i = 0; i < U.size(); i++)
    {
        for (int j = i + 1; j < U.size(); j++)
        {

            only_U.push_back();
        }
    }
    return 0;
}