#include <algorithm>
#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

vector<vector<string> > groupAnagrams(vector<string>& strs) {
        string tmp;
        vector<vector<string> > res;
        unordered_map<string, int> um;
        for (int i = 0; i < strs.size(); ++i)
        {
            tmp = strs[i]; // "eat"
            sort(tmp.begin(), tmp.end()); // "aet"
            if (um[tmp]>0)                      //anagram group of current string already exists in the array
            {
                res[um[tmp]-1].push_back(strs[i]);
            }
            else
            {
                res.push_back({strs[i]});
                um[tmp] = res.size();           //store index of new anagram group array in map
            }
            
        }
                
        return res;
    }

int main()
{
    vector<string> strs;
    strs.push_back("eat");
    strs.push_back("tea");
    strs.push_back("tan");
    strs.push_back("ate");
    strs.push_back("nat");
    strs.push_back("bat");
    vector <vector<string> > news;
    news = groupAnagrams(strs);
    
    for (int i = 0; i < news.size(); ++i)
    {
        for (int j = 0; j < news[i].size(); ++j)
        {
             std::cout << news[i][j] << " ";
        }
        std::cout << "|" << std::endl;
    }
}