#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> colors(n);
    vector<int> counts(n + 1, 0);
    for (int i = 0; i < n; i++)
    {
        cin >> colors[i];
        counts[colors[i]]++;
    }

    int max_count_color = max_element(counts.begin(), counts.end()) - counts.begin();
    int num_same_colors = count(colors.begin(), colors.end(), max_count_color);
    cout << n - num_same_colors << endl;
    return 0;
}