#include <iostream>
#include <vector>

int main()
{
    int N;
    std::cin >> N;
    std::vector<int> T(N + 1, 0), V(N, 0);
    for (int i = 0; i < N; i++)
    {
        std::cin >> T[i + 1] >> V[i];
    }
    int ans = 0;
    for (int i = 0; i < N; i++)
    {
        if (ans > 0)
        {
            ans = ans - (T[i + 1] - T[i]);
        }
        if (ans < 0) // 減らした結果、負値になったら、0にする
        {
            ans = 0;
        }
        ans += V[i];
    }
    std::cout << ans << "\n";
    return 0;
}