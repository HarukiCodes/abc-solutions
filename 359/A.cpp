#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N, cnt = 0;
    cin >> N;

    string target = "Takahashi";
    string input;
    for (int i = 1; i <= N; i++)
    {
        cin >> input;
        if (input == target)
        {
            cnt++;
        }
    }
    cout << cnt << endl;
    return 0;
}