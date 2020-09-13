#include <iostream>
#include <vector>

int main()
{
    std::vector<char> charVector;
    char input = 0;

    for (int i = 0; i < 3; ++i)
    {
        std::cin >> input;
        charVector.push_back(input);
    }

    int sum = 0;

    for (int i = 0; i < charVector.size(); ++i)
    {
        if ('1' == charVector.at(i))
        {
            ++sum;
        }
    }

    std::cout << sum;

    return 0;
}
