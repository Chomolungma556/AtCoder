#include <iostream>
#include <string.h>
#include <algorithm>

int main()
{
    std::string s;
    std::cin >> s;

    if ((s.size() < 1) || (s.size() > 100000))
    {
        return -1;
    }

    reverse(s.begin(), s.end());

    std::string t[4] = { "dream", "dreamer", "erase", "eraser" };

    for (int i = 0; i < 4; ++i)
    {
        reverse(t[i].begin(), t[i].end());
    }

    int length = 0;

    bool isCompleted = true;
    while (length < s.size())
    {
        bool isMatching = false;
        for (int j = 0; j < 4; ++j)
        {
            if (s.substr(length, t[j].size()) == t[j])
            {
                isMatching = true;
                length = length + static_cast<int>(t[j].size());
            }
        }
        if (!isMatching)
        {
            isCompleted = false;
            break;
        }
    }

    if (isCompleted)
    {
        std::cout << "YES";
    }
    else
    {
        std::cout << "NO";
    }

    return 0;
}
