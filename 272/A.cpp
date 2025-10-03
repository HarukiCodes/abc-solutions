#include <iostream>
#include <numeric>
#include <vector>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> A(N);
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }
    cout << accumulate(A.begin(), A.end(), 0) << endl;
    return 0;
}