/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbliss <dbliss@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/16 15:23:34 by dbliss            #+#    #+#             */
/*   Updated: 2021/03/17 21:11:44 by dbliss           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

#define CLGREEN "\x1b[32m"
#define CLEND "\x1b[0m"

class Awesome
{
    public:
    Awesome(void): _n(42) { return; }
    int get(void) const { return this->_n; }
    private:
    int _n;
};

std::ostream & operator << (std::ostream & o, Awesome const & rhs) { o << rhs.get(); return o;}

int main()
{
    int tab[] = {0,1,2,3,4};
    std::string strTab[] = {"Every", "Day", "Is", "A", "Wonderful", "Day", "Enjoy", "!"};
    Awesome tab2[5];

    std::cout << CLGREEN << "Testing iter + print() with the array of ints: " << CLEND << std::endl;
    iter(tab, 5, print);
    std::cout << CLGREEN << "Testing iter + print() with the array of the Class 'Awesome' : " << CLEND << std::endl;
    iter(tab2, 5, print);
    std::cout << CLGREEN << "Testing iter + justRepeat() with the array of ints: " << CLEND << std::endl;
    iter(tab, 5, justRepeat);
    std::cout << CLGREEN << "Testing iter + print() with the array of strings: " << CLEND << std::endl;
    iter(strTab, 8, print);
    return 0;
}