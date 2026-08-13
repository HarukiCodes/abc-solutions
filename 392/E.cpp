#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int N, M;
    cin >> N >> M;
    vector<vector<int>> gragh(N + 1);
    for (int i = 0; i < M; i++)
    {
        int serverA, serverB;
        cin >> serverA >> serverB;
        gragh[serverA].push_back(serverB);
        gragh[serverB].push_back(serverA);
    }
    
    return 0;
}