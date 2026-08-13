#include <iostream>
#include <vector>
using namespace std;

vector<int> SwapAt(vector<int> A, int left, int right)
{
    swap(A[left], A[right]);
    return A;
}

int main()
{
    vector<int> A(5);
    for (int i = 0; i < 5; i++)
    {
        cin >> A[i];
    }
    for (int i = 1; i < 5; i++)
    {
        vector<int> swapedA = SwapAt(A, i - 1, i);
        bool canSort = true;
        for (int i = 0; i < 5; i++)
        {
            if (swapedA[i] != i + 1)
            {
                canSort = false;
            }
        }
        if (canSort)
        {
            cout << "Yes\n";
            return 0;
        }
    }
    cout << "No\n";
    return 0;
}