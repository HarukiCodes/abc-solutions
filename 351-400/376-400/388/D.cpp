// #include <iostream>
// #include <vector>
// #include <set>
// using namespace std;

// int main()
// {
//     int N;
//     cin >> N;
//     vector<int> A(N);
//     for (int i = 0; i < N; i++)
//     {
//         cin >> A[i];
//     }
//     set<int> B{};
//     vector<int> ans;
//     for (int i = 0; i < N; i++)
//     {
//         // 1個以上持った成人の数
//         int take = distance(B.begin(), B.lower_bound(i));

//         int give = min(A[i] + take, N - i);

//         int numStone = A[i] + take - give;
//         B.insert(numStone);
//         ans.push_back(numStone);
//     }
//     for (int i = 0; i < N; i++)
//     {
//         cout << ans[i] << " ";
//     }
//     cout << "\n";
//     return 0;
// }

#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
using namespace std;

int main()
{
    int N;
    cin >> N;
    vector<int> A(N);
    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
    }
    vector<int> B{};
    for (int i = 0; i < N; i++)
    {
        // 1個以上持った成人の数
        sort(B.begin(), B.end());
        int take = lower_bound(B.begin(), B.end(), i) - B.begin();

        int give = min(A[i] + take, N - i + 1);

        int numStone = A[i] + take - give;
        cout << "take: " << take << " give: " << give << "\n";
        B.push_back(numStone);
    }
    for (int i = 0; i < N; i++)
    {
        cout << B[i] << " ";
    }
    cout << "\n";
    return 0;
}
