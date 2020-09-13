#include <iostream>

int main()
{
    int N = 0;
    unsigned int A = 0;
    unsigned int B = 0;

    std::cin >> N;
    std::cin >> A;
    std::cin >> B;

    if ((N < 1) || (N > 10000))
    {
        return -1;
    }

    if ((A < 1) || (A > 36) || (B < 1) || (B > 36) || (A > B))
    {
        return -2;
    }

    unsigned int sum = 0;

    for (int i = 1; i <= N; ++i)
    {
        unsigned int tmp = 0;
        unsigned int S = 0;
        unsigned int T = 0;
        unsigned int U = 0;
        unsigned int V = 0;
        unsigned int W = 0;

        S = i / 10000;
        T = (i - 10000 * S) / 1000;
        U = (i - 10000 * S - 1000 * T) / 100;
        V = (i - 10000 * S - 1000 * T - 100 * U) / 10;
        W = (i - 10000 * S - 1000 * T - 100 * U - 10 * V);

        tmp = S + T + U + V + W;

        if ((tmp >= A) && (tmp <= B))
        {
            sum = sum + i;
        }
    }

    std::cout << sum;

    return 0;
}
