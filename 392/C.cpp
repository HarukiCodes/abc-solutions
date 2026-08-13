#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int N;
    cin >> N;
    vector<int> P(N + 1), Q(N + 1), QtoI(N+1);
    for (int i = 1; i <= N; i++)
    {
        cin >> P[i];
    }
    for (int i = 1; i <= N; i++)
    {
        cin >> Q[i];
        QtoI[Q[i]] = i;
    }
    for (int i = 1; i <= N; i++)
    {
        int personIndex = QtoI[i];
        cout << Q[P[personIndex]] << " ";
    }
    cout << "\n";
    return 0;
}