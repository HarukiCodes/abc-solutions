#include <cmath>
#include <iostream>
#include <numbers>
#include <vector>
using namespace std;

int main() {
    int n;
    vector<vector<int>> a(n, vector<int>(n));
    for (auto& row : a) {
        for (int& e : row) {
            cin >> e;
        }
    }
    for (int i = 0; i < 8; i++) {
        int dx = round(cos(i * numbers::pi/2));
        int dy = round(sin(i * numbers::pi/2));
        cout << dx << "," << dy << endl;
    }
    return 0;
}