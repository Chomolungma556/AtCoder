#include <iostream>
#include <cmath>

int main()
{
    int N = 0;
    std::cin >> N;

    if ((N < 1) || (N > 100000))
    {
        return -1;
    }

    int t1 = 0;
    int x1 = 0;
    int y1 = 0;

    int t2 = 0;
    int x2 = 0;
    int y2 = 0;

    int T = 0;
    int D = 0;

    bool canExecute = true;

    for (int i = 0; i < N; ++i)
    {
        t1 = t2;
        x1 = x2;
        y1 = y2;

        std::cin >> t2;
        std::cin >> x2;
        std::cin >> y2;

        T = t2 - t1;
        D = std::abs(x2 - x1) + std::abs(y2 - y1);

        if ((T < D) || ((0 == T % 2) && (0 != D % 2)) || ((0 != T % 2) && (0 == D % 2)))
        {
            canExecute = false;
            break;
        }
    }

    if (canExecute)
    {
        std::cout << "Yes";
    }
    else
    {
        std::cout << "No";
    }

    return 0;
}
