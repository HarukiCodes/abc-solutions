#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> heights(N);
    for (int i = 0; i < N; i++) {
        cin >> heights[i];
    }
    int maxHeight = *max_element(heights.begin(), heights.end());
    for (int i = 0; i < N; i++) {
        if (heights[i] == maxHeight) {
            cout << i + 1 << endl;
            break;
        }
    }
    return 0;
}