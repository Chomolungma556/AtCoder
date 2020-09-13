#include <iostream>
#include <vector>

int main()
{
    int N = 0;
    std::cin >> N;
    if ((N < 1) || (N > 2000))
    {
        return -1;
    }

    unsigned long Y = 0;
    std::cin >> Y;
    if ((Y < 1000) || (Y > 20000000))
    {
        return -2;
    }

    if (0 != Y % 1000)
    {
        return -3;
    }

    for (int x = 0; x <= N; ++x)
    {
        for (int y = 0; y <= N - x; ++y)
        {
            if (Y == 10000 * (N - x - y) + 5000 * y + 1000 * x)
            {
                std::cout << N - x - y << " " << y << " " << x;
                return 0;
            }
        }
    }

    // not found. 
    std::cout << -1 << " " << -1 << " " << -1;

    return 0;
}
