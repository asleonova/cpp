/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbliss <dbliss@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/16 13:14:48 by dbliss            #+#    #+#             */
/*   Updated: 2021/03/16 15:19:46 by dbliss           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "whatever.hpp"

class Awesome {
    public: Awesome( int n ): _n(n) {}
    bool operator==(Awesome const & rhs) const { return (this->_n == rhs._n); } 
    bool operator!=(Awesome const & rhs) const { return (this->_n != rhs._n); }
    bool operator>(Awesome const & rhs) const { return (this->_n > rhs._n); } 
    bool operator<(Awesome const & rhs) const { return (this->_n < rhs._n); } 
    bool operator>=( Awesome const & rhs ) const { return (this->_n >= rhs._n); } 
    bool operator<=( Awesome const & rhs) const { return (this->_n <- rhs._n); } 
    
    private:
        int _n;
};

int main1()
{
    int a = 21;
    int b = 42;

    std::cout << "Testing int: " << std::endl;
    std::cout << "a value is: " << a << std::endl; 
    std::cout << "b value is: " << b << std::endl; 
    std::cout << "max of " << a << " and " << b << " is ";
    std::cout << max<int>(a, b) << std::endl;
    std::cout << "min of " << a << " and " << b << " is ";
    std::cout << min<int>(a, b) << std::endl;
    std::cout << "swaping values: " << std::endl;
    swap<int>(a, b);
    std::cout << "a value after swap: " << a << std::endl; 
    std::cout << "b value after swap: " << b << std::endl; 
    
    std::cout << "*******************************" << std::endl;
    std::cout << "Testing floats: " << std::endl;
    
    float c = -1.7f;
    float d = 4.2f;

    std::cout << "a value is: " << c << std::endl; 
    std::cout << "b value is: " << d << std::endl; 
    std::cout << "max of " << c << " and " << d << " is ";
    std::cout << max<float>(c, d) << std::endl;
    std::cout << "min of " << c << " and " << d << " is ";
    std::cout << min<float>(c, d) << std::endl;
    std::cout << "swaping values: " << std::endl;
    swap<float>(c, d);
    std::cout << "a value after swap: " << c << std::endl; 
    std::cout << "b value after swap: " << d << std::endl; 
    std::cout << "*******************************" << std::endl;

    std::cout << "Testing chars: " << std::endl;

    char e = 'a';
    char f = 'z';

    std::cout << "a value is: " << e << std::endl; 
    std::cout << "b value is: " << f << std::endl; 
    std::cout << "max of " << e << " and " << f << " is ";
    std::cout << max<char>(e, f) << std::endl;
    std::cout << "min of " << e << " and " << f << " is ";
    std::cout << min<char>(e, f) << std::endl;
    std::cout << "swaping values: " << std::endl;
    swap<char>(e, f);
    std::cout << "a value after swap: " << e << std::endl; 
    std::cout << "b value after swap: " << f << std::endl; 


    std::cout << "*******************************" << std::endl;
    std::cout << "Testing from check-list: " << std::endl; 

    Awesome aw1(5);
    Awesome aw2(10);

    //std::cout << "aw1 value is: " << aw1 << std::endl; 
    //std::cout << "aw2 value is: " << aw2 << std::endl; 
   // std::cout << "max of " << aw1 << " and " << aw2 << " is ";
    max(aw1, aw2);
    // std::cout << "min of " << aw1 << " and " << aw2 << " is ";
    min(aw1,aw2);
    //std::cout << "swaping values: " << std::endl;
    swap(aw1,aw2);
    //std::cout << "a value after swap: " << aw1 << std::endl; 
    //std::cout << "b value after swap: " << aw2 << std::endl;    
    return 0;
}

int main( void ) 
{ 
    int a = 2;
int b = 3;
::swap( a, b );
std::cout << "a = " << a << ", b = " << b << std::endl;
std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
std::string c = "chaine1";
std::string d = "chaine2";
::swap(c, d);
std::cout << "c = " << c << ", d = " << d << std::endl;
std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
return 0; 
}