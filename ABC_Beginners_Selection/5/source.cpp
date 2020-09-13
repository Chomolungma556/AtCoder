#include <iostream>

int main()
{
    int A = 0;
    int B = 0;
    int C = 0;
    int X = 0;

    std::cin >> A;
    std::cin >> B;
    std::cin >> C;
    std::cin >> X;

    if ((A < 0) || (A > 50) || (B < 0) || (B > 50) || (C < 0) || (C > 50))
    {
        return -1;
    }

    if ((A + B + C) < 0)
    {
        return -2;
    }

    if ((0 != X % 50) || (X < 50) || (X > 20000))
    {
        return -3;
    }

    unsigned int count = 0;

    for (int i = 0; i <= A; ++i)
    {
        for (int j = 0; j <= B; ++j)
        {
            for (int k = 0; k <= C; ++k)
            {
                if (X == (500 * i + 100 * j + 50 * k))
                {
                    ++count;
                }
            }
        }
    }

    std::cout << count;

    return 0;
}
