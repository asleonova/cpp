#include <iostream>
#include <map>
#include <vector>



// int		not_seen_before(std::string s, int len, char c)
// {
// 	int i;

// 	i = -1;
// 	while (++i < len)
// 		if (s[i] == c)
// 			return (0);
// 	return (1);
// }

// int lengthOfLongestSubstring(std::string s)
// {
//     std::vector<char> vec;
//     bool added = false;
//     int count = 1;

//     if (s.length() == 0)
//         return 0;
//     if (s.length() == 1)
//         return 1;
   
//    vec.push_back(s[0]);
//    for (int i = 1; i < s.length(); ++i)
//    {
       
//        if (not_seen_before(s, vec.size(), s[i]) == 1)
//        {
//             vec.push_back(s[i]);
//             if (count < vec.size())
//                 count = vec.size();
//        }
//        else 
//        {
//            vec.clear();
//        }       
//    }
//     return count;
// }

int lengthOfLongestSubstring(std::string s) {
        std::vector<int> chars(128);

        int left = 0;
        int right = 0;

        int res = 0;
        while (right < s.length()) {
            char r = s[right];
            chars[r]++;
            for (int i = 0; i < chars.size(); ++i)
            {
                std::cout << "chars[" << i << "] " << chars[i] << std::endl;
            }

            while (chars[r] > 1) {
                char l = s[left];
                chars[l]--;
                left++;
            }

            res = std::max(res, right - left + 1);

            right++;
        }

        return res;
    }

int main()
{

    int count;
    count = lengthOfLongestSubstring("abc");
    std::cout << count << std::endl;
    int *f;
    std::cout << sizeof(f);
    return 0;
}

// int lengthOfLongestSubstring(std::string s)
// {

//     std::vector<char> vec;;
//     int count = 0;
//     for (int i = 0; i < s.length(); ++i)
//     {
//         for (int j = 0; j < s.length(); ++j)
//         {
//               if (map.count(s[i]) == 0)
//                 {
//                     map.insert(std::pair<char, int>(s[i], i));
//                }
//         }
//     }
//      std::cout << "map size: "<< map.size() << std::endl;
//     for (int i = 0; i < s.length(); ++i)
//     {
//        // std:: cout << "curr count : " << count << std::endl;
//         if (map[i + 1] - map[i] == 1)
//             count++;
//     }
//  std::cout << "map size: "<< map.size() << std::endl;
//     return count;
// }

// int main()
// {
//     int count;
//     count = lengthOfLongestSubstring("abcabcbblh");
//     std::cout << count << std::endl;
//     return 0;
// }