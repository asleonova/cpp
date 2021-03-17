/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbliss <dbliss@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/16 15:23:34 by dbliss            #+#    #+#             */
/*   Updated: 2021/03/17 21:09:41 by dbliss           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

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

    std::cout << "Testing iter with the array of ints: " << std::endl;
    iter(tab, 5, print);
    iter(tab2, 5, print);
    iter(tab, 5, justRepeat);
    iter(strTab, 8, print);
    return 0;
}