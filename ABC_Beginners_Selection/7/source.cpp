#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    int N = 0;
    std::vector<int> cardVector;

    std::cin >> N;
    if ((N < 1) || (N > 100))
    {
        return -1;
    }

    int tmpInput = 0;
    for (int i = 0; i < N; ++i)
    {
        std::cin >> tmpInput;
        if ((tmpInput >= 1) || (tmpInput <= 100))
        {
            cardVector.push_back(tmpInput);
        }
        else
        {
            return -2;
        }
    }

    int Alice = 0;
    int Bob = 0;

    for (int i = 0; i < N; ++i)
    {
        if (cardVector.empty())
        {
            break;
        }
        Alice = Alice + *std::max_element(cardVector.begin(), cardVector.end());
        cardVector.erase(std::max_element(cardVector.begin(), cardVector.end()));

        if (cardVector.empty())
        {
            break;
        }
        Bob = Bob + *std::max_element(cardVector.begin(), cardVector.end());
        cardVector.erase(std::max_element(cardVector.begin(), cardVector.end()));
    }

    std::cout << Alice - Bob;

    return 0;
}
