#include <iostream>
#include <map>
int romanToInt(std::string s)
{

    int ret = 0;

    std::map<char, int> m;
    m['I'] = 1;
    m['V'] = 5;
    m['X'] = 10;
    m['L'] = 50;
    m['C'] = 100;
    m['D'] = 500;
    m['M'] = 1000;
    for (int i = 0; i < s.length(); i++)
    {
        if (m[s[i]] >= m[s[i + 1]])
            ret += m[s[i]];
        else 
           ret -= m[s[i]];
    }
    return (ret);
}

int main()
{ 
    int i = romanToInt("MCMXCIV");
    std::cout << i << std::endl;
}