// C
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int N;
    cin >> N;
    vector<long long> A(N + 1, 0), E;
    for (int i = 1; i <= N; i++)
    {
        cin >> A[i];
    }
    int S = 0;
    for (int i = 1; i <= N; i++)
    {
        E.push_back(A[i]);
        while (true)
        {
            S = E.size();
            if (S <= 1)
            {
                break;
            }
            if (E[S - 1] != E[S - 2])
            {
                break;
            }
            else
            {
                int tmp = E[S - 1] + 1;
                E.pop_back();
                *E.rbegin() = tmp;
            }
        }
    }
    cout << E.size() << endl;
    return 0;
}