/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbliss <dbliss@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/16 15:23:34 by dbliss            #+#    #+#             */
/*   Updated: 2021/03/17 21:01:29 by dbliss           ###   ########.fr       */
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
    Awesome tab2[5];

    iter(tab, 5, print);
    iter(tab2, 5, print);
    iter(tab2, 5, multiplyByItself)''
    return 0;
}