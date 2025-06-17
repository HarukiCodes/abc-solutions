#include <iostream>

int main()
{
    int N;
    std::string S;
    char c1, c2;
    std::cin >> N >> c1 >> c2 >> S;
    for (int i = 0; i < N; i++)
    {
        if (S[i] != c1)
        {
            S[i] = c2;
        }
    }
    std::cout << S << '\n';
    return 0;
}