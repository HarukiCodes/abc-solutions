// C
#include <bits/stdc++.h>
using namespace std;
int main()
{
    // input
    int N, M, L, Q;
    vector<long long> A, B, C, X;
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        long long tmp = 0;
        cin >> tmp;
        A.push_back(tmp);
    }
    cin >> M;
    for (int i = 0; i < M; i++)
    {
        long long tmp = 0;
        cin >> tmp;
        B.push_back(tmp);
    }
    cin >> L;
    for (int i = 0; i < L; i++)
    {
        long long tmp = 0;
        cin >> tmp;
        C.push_back(tmp);
    }
    cin >> Q;
    for (int i = 0; i < Q; i++)
    {
        long long tmp = 0;
        cin >> tmp;
        X.push_back(tmp);
    }

    // algorithm
    vector<size_t> num = {A.size(), B.size(), C.size()};
    sort(num.begin(), num.end());

    vector<long long> one, two, three;
    // àÍî‘è¨Ç≥Ç¢îzóÒ
    if ((A.size()) == num[0])
        one = A;
    if ((B.size()) == num[0])
        one = B;
    if ((C.size()) == num[0])
        one = C;
    // ìÒî‘ñ⁄Ç…è¨Ç≥Ç¢îzóÒ
    if ((A.size()) == num[1])
        two = A;
    if ((B.size()) == num[1])
        two = B;
    if ((C.size()) == num[1])
        two = C;
    // àÍî‘ëÂÇ´Ç¢îzóÒ
    if ((A.size()) == num[2])
        three = A;
    if ((B.size()) == num[2])
        three = B;
    if ((C.size()) == num[2])
        three = C;
    sort(three.begin(), three.end());

    auto is_sum_x = [one, two, three](long long X)
    {
        for (long long ONE : one)
        {
            for (long long TWO : two)
            {
                if (binary_search(three.begin(), three.end(), X - ONE - TWO))
                    return true;
            }
        }
        return false;
    };
    vector<long long> one_two;
    for (long long ONE : one)
    {
        for (long long TWO : two)
        {
            one_two.push_back(ONE + TWO);
        }
    }

    // output
    clock_t S = clock();
    for (long long x : X)
    {
        if (is_sum_x(x))
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
    clock_t E = clock();
    cout << static_cast<double>((E - S) / CLOCKS_PER_SEC) << endl;
    S = clock();
    for (long long x : X)
    {
        bool found = false;
        for (long long ONE_TWO : one_two)
        {
            if (binary_search(three.begin(), three.end(), x - ONE_TWO))
            {
                break;
                found = true;
            }
        }
        if (found)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
    E = clock();
    cout << static_cast<double>((E - S) / CLOCKS_PER_SEC) << endl;
    return 0;
}
// C âìöó·
#include <bits/stdc++.h>
using namespace std;
int main()
{
    // input
    vector<long long> n(3);
    vector<vector<long long>> a(3);
    for (long long i = 0; i < 3; i++)
    {
        cin >> n[i];
        a[i] = vector<long long>(n[i]);
        for (long long j = 0; j < n[i]; j++)
            cin >> a[i][j];
    }

    unordered_set<long long> S;
    for (long long i = 0; i < n[0]; i++)
    {
        for (long long j = 0; j < n[1]; j++)
        {
            for (long long k = 0; k < n[2]; k++)
            {
                long long s = a[0][i] + a[1][j] + a[2][k];
                S.insert(s);
            }
        }
    }

    long long q = 0;
    cin >> q;
    for (long long i = 0; i < q; i++)
    {
        long long x;
        cin >> x;
        /*if (S.count(x))cout << "Yes" << endl;*/
        if (S.find(x) != S.end())
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
    return 0;
}