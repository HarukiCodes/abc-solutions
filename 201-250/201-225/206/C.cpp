#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

int main()
{
    long long n;
    cin >> n;
    vector<long long> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    unordered_map<long long, long long> counts;
    for (int i = 0; i < n; i++)
    {
        counts[a[i]]++;
    }

    auto nC2 = [](long long n)
    { return n * (n - 1) / 2; };

    long long complements = 0;
    for (auto [key, num_elements] : counts)
    {
        complements += nC2(num_elements);
    }

    cout << nC2(n) - complements << endl;
    return 0;
}