#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int N, M;
    cin >> N >> M;
    vector<int> A(M);
    vector<int> isElementOfA(N + 1);
    for (int i = 0; i < M; i++)
    {
        cin >> A[i];
        isElementOfA[A[i]] = true;
    }
    int numB = 0;
    vector<int> B{};
    for (int i = 1; i <= N; i++)
    {
        if (!isElementOfA[i])
        {
            B.push_back(i);
            numB++;
        }
    }
    cout << numB << "\n";
    for (int i = 0; i < numB; i++)
    {
        cout << B[i] << " ";
    }
    cout << "\n";
    return 0;
}
