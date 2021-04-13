#include <iostream>
#include <vector>

std::vector<int> getPrimes(int n)
{
    std::vector<int>ret;
    for (int i = 2; ret.size() < n; ++i)
    {
        bool isPrime = true;
        for (int j = 2; j < i; ++j)
        {
            if (i % j == 0)
            {
               isPrime = false;
               break;
            }
        }
        if (isPrime)
        {
            ret.push_back(i);
            n--;
        }

    }
    return (ret);
}

int main()
{
    std::vector<int> vec;
    vec = getPrimes(20);
    for (int i = 0; i < 8; ++i)
    {
        std::cout << vec[i] << " , ";
    }
    return 0;
}