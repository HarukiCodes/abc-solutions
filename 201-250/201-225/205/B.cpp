#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int N;
    cin >> N;
    vector<int> A(N), contains(N, false);
    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
        contains[A[i] - 1] = true;
    }
    for (int i = 0; i < N; i++)
    {
        if (!contains[i])
        {
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;
    return 0;
}