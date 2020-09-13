#include <iostream>
#include <vector>

int main()
{
    int integerCount = 0;
    std::cin >> integerCount;

    unsigned long inputInteger = 0;
    std::vector<unsigned long> integerVector;

    // prepare element. 
    for (int i = 0; i < integerCount; ++i)
    {
        std::cin >> inputInteger;
        integerVector.push_back(inputInteger);
    }

    unsigned int devideCount = 0;
    bool isCompleted = false;

    while (!isCompleted)
    {
        for (int i = 0; i < integerCount; ++i)
        {
            if (0 == (integerVector.at(i) % 2))
            {
                integerVector.at(i) = integerVector.at(i) / 2;
            }
            else
            {
                isCompleted = true;
                break;
            }
        }
        if (!isCompleted)
        {
            ++devideCount;
        }
    }

    std::cout << devideCount;

    return 0;
}
