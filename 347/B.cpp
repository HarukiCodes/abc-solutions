// B
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string S;
    cin >> S;
    int N = S.size();
    vector<string> A;
    for (int i = 0; i < N; i++)
    {
        for (int j = 1; j <= N; j++)
        {
            string tmp = S.substr(i, j);
            A.push_back(tmp);
        }
    }
    sort(A.begin(), A.end());
    A.erase(unique(A.begin(), A.end()), A.end());
    cout << A.size() << endl;
    return 0;
}