#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N, K;
    cin >> N >> K;
    size_t currentNum = 1;
    vector<size_t> A(N);
    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
        size_t numDigit = to_string(currentNum * A[i]).size();
        if (numDigit >= (K + 1))
        {
            currentNum = 1;
        }
        else
        {
            currentNum *= A[i];
        }
    }
    cout << currentNum << endl;
    return 0;
}
