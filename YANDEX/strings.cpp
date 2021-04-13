#include <iostream>
#include <set>
int twoStrings(std::string d, std::string s)
{
    int count = 0;
    std::set<char> sett;
    sett.insert(s.begin(), s.end());
    std::set<char>::iterator it = sett.begin();
    std::set<char>::iterator ite = sett.end();
    for (int i =0 ; i < d.length(); ++i)
    {
        for (; it != ite; ++it)
        {
            if (d[i] == *it)
                count += 1;
        }
        it = sett.begin();
    }
    return count;
}

int main()
{
    int i = 0;
    i = twoStrings("qwertyuiopasdfghjklll", "jll");
    std::cout << i << std::endl;
}