#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int N;
    cin >> N;
    string S;
    cin >> S;
    std::vector<int> posOne;
    for (int i = 0; i < N; i++)
    {
        if (S[i] == '1')
        {
            posOne.push_back(i);
        }
    }
    int center = posOne.size() / 2, ans = 0;
    for (int i = 0; i < N; i++)
    {
        if (S[i] == '1' && i != posOne[center])
        {
            int numSwap = abs(posOne[center] - i - (&posOne[center] - &posOne[i]) / 4) - 1;
            ans += numSwap;
        }
    }
    cout << ans << "\n";
    return 0;
}
