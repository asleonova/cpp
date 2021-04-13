    #include  <iostream>
    #include <vector>

    using  namespace  std;

    vector<int>  isPrime(int n)
    {
        vector<int> primes;
        for (int  i =  2;  n > 0;  ++i)
        {
            bool  isPrime  =  true ;
            for (int  j =  2;  j < i;  ++j)
            {
                if (i  % j ==  0)
                {
                    isPrime  =  false ;
                    break ;
                }
            }
            if (isPrime)
            {
                --n;
                primes.push_back(i);
            }
        }
        return  primes;
    }

    int main()
    {
        std::vector<int> i = isPrime(5);
        for (int k = 0; k < i.size(); ++k)
            cout << i[k] << ", ";
    }