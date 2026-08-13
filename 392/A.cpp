#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int A[3];
    for (int i = 0; i < 3; i++)
    {
        cin >> A[i];
    }
    int order[3] = {0, 1, 2};
    do
    {
        int B1 = A[order[0]], B2 = A[order[1]], B3 = A[order[2]];
        if (B1 * B2 == B3)
        {
            cout << "Yes\n";
            return 0;
        }
    } while (next_permutation(order, order + 3));
    cout << "No\n";
    return 0;
}
