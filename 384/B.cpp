#include <iostream>
#include <vector>

int main()
{
    int N, R;
    std::cin >> N >> R;
    std::vector<int> D(N, 0), A(N, 0);
    for (int i = 0; i < N; i++)
    {
        std::cin >> D[i] >> A[i];
    }

    for (int i = 0; i < N; i++)
    {
        if (D[i] == 1 && R >= 1600 && R <= 2799)
        {
            R += A[i];
        }
        else if (D[i] == 2 && R >= 1200 && R <= 2399)
        {
            R += A[i];
        }
    }
    std::cout << R << "\n";
    return 0;
}