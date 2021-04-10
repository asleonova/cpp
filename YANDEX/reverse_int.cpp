#include <iostream>

int reverse_num(int x)
{
    int rev, remainder;
    while (x != 0)
    {
        remainder = x % 10;
        if (rev > INT_MAX / 10 || rev < INT_MIN / 10)
            return 0;
       
        rev = rev * 10 + remainder;
         x /= 10;
    }
    return rev;

}

    bool isPalindrome(int x) {
        if (x < 0 || (x % 10 == 0 && x != 0)) return false;
        
        int xx = x;
        int rev = 0;
        int remainder;
        while (x != 0) {
            remainder = x % 10;
            if (rev > INT_MAX / 10 || rev < INT_MIN / 10)
                return false;
            rev = rev*10 + remainder;
            x /= 10;
        }
        return rev == xx;
    }
       

int main()
{
    int x = reverse_num(-2147483641);
    bool y = isPalindrome(121);
    std::cout << y << std::endl;
    std::cout << x << std::endl;
    return 0;
}