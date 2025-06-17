#include <iostream>
using namespace std;

int main()
{
    int A, cnt[5]{};
    for (int i = 0; i < 4; i++)
    {
        cin >> A;
        cnt[A]++;
    }
    int ans = 0;
    for (int i = 1; i < 5; i++)
    {
        if (cnt[i] >= 2 && cnt[i] <= 3)
        {
            ans++;
        }
        else if (cnt[i] >= 4)
        {
            ans += 2;
        }
    }
    cout << ans << "\n";
    return 0;
}