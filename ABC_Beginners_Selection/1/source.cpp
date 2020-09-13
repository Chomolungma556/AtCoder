#include <iostream>
#include <string.h>

int main()
{
    int a = 0;
    int b = 0;
    int c = 0;
    std::string s;

    std::cin >> a;
    std::cin >> b;
    std::cin >> c;
    std::cin >> s;

    if ((a < 1) || (a > 1000) || (b < 1) || (b > 1000) || (c < 1) || (c > 1000) || (s.size() < 1) || (s.size() > 100))
    {
        return -1;
    }

    std::cout << a + b + c << " " << s;

    return 0;
}
