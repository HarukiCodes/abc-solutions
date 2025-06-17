#include <iostream>
#include <queue>
using namespace std;

int main()
{
    int Q;
    cin >> Q;
    deque<long long> snakeHeads{0};
    long long frontHead = 0;
    for (int i = 0; i < Q; i++)
    {
        int type;
        cin >> type;
        if (type == 1)
        {
            long long length;
            cin >> length;
            snakeHeads.push_back(snakeHeads.back() + length);
        }
        else if (type == 2)
        {
            snakeHeads.pop_front();
            frontHead = snakeHeads[0];
        }
        else
        {
            int k;
            cin >> k;
            cout << snakeHeads[k - 1] - frontHead << "\n";
        }
    }
    return 0;
}
