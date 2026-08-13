#include <iostream>
#include <vector>
#include <set>
#include <climits>
#include <string.h>
using namespace std;

int pos_of_num[1000007]{};

int main()
{
    int N;
    cin >> N;
    vector<int> A(N);
    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
    }
    memset(pos_of_num, 0, size(pos_of_num));
    int ans = INT_MAX;
    set<int> s;
    for (int i = 0; i < N; i++)
    {
        if (s.find(A[i]) == s.end())
        {
            s.insert(A[i]);
            pos_of_num[A[i]] = i;
        }
        else
        {
            ans = min(ans, i - pos_of_num[A[i]] + 1);
        }
    }
    if (ans == INT_MAX)
    {
        ans = -1;
    }
    cout << ans << endl;
    return 0;
}
