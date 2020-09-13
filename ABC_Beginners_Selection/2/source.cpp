#include <iostream>

int main()
{
    int a = 0;
    int b = 0;
    std::cin >> a;
    std::cin >> b;

    if ((a < 1) || (a > 10000) || (b < 1) || (b > 10000))
    {
        return -1;
    }

    if (0 == ((a * b) % 2))
    {
        std::cout << "Even";
    }
    else
    {
        std::cout << "Odd";
    }

    return 0;
}
