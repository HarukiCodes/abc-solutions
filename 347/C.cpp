// C
#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long N, A, B;
    cin >> N >> A >> B;
    long long W = A + B;
    vector<long long> D;
    for (int i = 0; i < N; i++)
    {
        long long d;
        cin >> d;
        d %= W;
        D.push_back(d);
        D.push_back(d + W);
    }
    // sort
    sort(D.begin(), D.end());
    // d•¡‚ğÁ‚·
    // D.erase(unique(D.begin(), D.end()), D.end());

    for (int i = 1; i < D.size(); i++)
    {
        if (D[i] - D[i - 1] > B)
        {
            // B“ú‚Ì—¼’[‚Í‚·‚×‚Ä‹x“ú‚È‚Ì‚Å
            // D[1],D[2],...,D[i-1] B“ú‹²‚ñ‚Å D[i],D[i+1],...,D[D.size()-1]
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
    return 0;
}