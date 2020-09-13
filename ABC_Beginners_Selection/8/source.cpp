#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    // prepare. 
    int N = 0;
    std::cin >> N;
    if ((N < 1) || (N > 100))
    {
        return -1;
    }

    int tmpInput = 0;
    std::vector<int> mochiVector;
    for (int i = 0; i < N; ++i)
    {
        std::cin >> tmpInput;
        if ((tmpInput < 1) || (tmpInput > 100))
        {
            return -2;
        }
        mochiVector.push_back(tmpInput);
    }

    // stack up mochi. 
    int mochiCount = 0;
    int previousMochi = 101;

    while (!mochiVector.empty())
    {
        if (*std::max_element(mochiVector.begin(), mochiVector.end()) < previousMochi)
        {
            ++mochiCount;
            previousMochi = *std::max_element(mochiVector.begin(), mochiVector.end());
        }
        mochiVector.erase(std::max_element(mochiVector.begin(), mochiVector.end()));
    }

    std::cout << mochiCount;

    return 0;
}
