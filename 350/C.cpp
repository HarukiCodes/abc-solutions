// C
//ï™Ç©ÇÁÇÒ
#include <bits/stdc++.h>
using namespace std;
vector<pair<int, int>> swap_pair;
int K = 0;
void bubble_sort(vector<int> &vec, int first, int last)
{
    bool is_end = false;

    int c = 1;
    while (!is_end) // èIÇÌÇÁÇ»Ç¢å¿ÇË
    {
        int cnt = 0;
        for (int i = first; i < last - 1; i++)
        {
            int now = i, next = i + 1;
            if (vec[now] > vec[next])
            {
                swap(vec[now], vec[next]);
                swap_pair.push_back(make_pair(now, next));
                K++;
                cnt++;
            }
        }
        if (cnt == 0)
        {
            is_end = true;
        }
    }
}
int main()
{
    int N;
    cin >> N;
    vector<int> A(N, 0);
    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
    }
    bubble_sort(A, 0, A.size());
    cout << K << endl;
    for (int i = 0; i < swap_pair.size(); i++)
    {
        cout << swap_pair[i].first + 1 << " " << swap_pair[i].second + 1 << endl;
    }
    return 0;
}