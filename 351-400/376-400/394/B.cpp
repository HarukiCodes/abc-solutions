#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int N;
    cin >> N;
    vector<string> S(N);
    for (int i = 0; i < N; i++)
    {
        cin >> S[i];
    }
    for (int length = 1; length <= 50; length++)
    {
        for (int i = 0; i < N; i++)
        {
            if (static_cast<int>(S[i].size()) == length)
            {
                cout << S[i];
            }
        }
    }
    cout << "\n";
    return 0;
}
