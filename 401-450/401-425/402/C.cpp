#include <bits/stdc++.h>
using namespace std;

int main()
{
    int foods, meals;
    cin >> foods >> meals;
    vector<int> K(meals);
    vector<vector<int>> A(meals);
    int days = foods;
    vector<int> B(days);
    for (int i = 0; i < meals; i++)
    {
        cin >> K[i];
        for (int j = 0; j < K[i]; j++)
        {
            int food;
            cin >> food;
            A[i].push_back(food);
        }
    }
    for (int i = 0; i < days; i++)
    {
        cin >> B[i];
    }

    // solve
    int edibleCount = meals;
    vector<int> ans(days), edible(meals, true);
    for (int i = days - 1; i >= 0; i--) // N
    {
        ans[i] = edibleCount;
        for (int j = 0; j < meals; j++) // about sum of K
        {
            if (edible[j])
            {
                // i日目から食べられるようになる
                if (find(A[j].begin(), A[j].end(), B[i]) != A[j].end())
                {
                    edibleCount--;
                    edible[j] = false;
                }
            }
        }
    }

    for (int i = 0; i < foods; i++)
    {
        cout << ans[i] << endl;
    }
    return 0;
}