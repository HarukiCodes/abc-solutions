// 1回目
#include <cmath>
#include <iostream>
using namespace std;

int main()
{
    long long N;
    cin >> N;
    for (int x = 0; x < 60; x++)
    {
        for (int y = 0; y < 60; y++)
        {
            long long product = pow(2, x) * pow(3, y);
            if (product == N)
            {
                cout << "Yes" << endl;
                return 0;
            }
        }
    }
    cout << "No" << endl;
    return 0;
}

// 2回目
#include <cmath>
#include <iostream>
using namespace std;

long long power(long long x, long long y) {
    long long result = 1;
    while (y--) {
        result *= x;
    }
    return result;
}

int main() {
    long long n;
    cin >> n;
    int max_x = ceil(log2(n));
    int max_y = ceil(log(n) / log(3));

    bool yes = false;
    for (int x = 0; x <= max_x; x++) {
        for (int y = 0; y <= max_y; y++) {
            if (power(2, x) * power(3, y) == n) {
                yes = true;
            }
        }
    }
    cout << (yes ? "Yes\n" : "No\n");
    return 0;
}

// 別解
#include <iostream>
using namespace std;

int main() {
    long long n;
    cin >> n;
    while (n % 2 == 0) {
        n /= 2;
    }
    while (n % 3 == 0) {
        n /= 3;
    }
    cout << (n == 1 ? "Yes\n" : "No\n");
    return 0;
}
