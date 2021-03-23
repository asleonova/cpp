/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbliss <dbliss@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/21 18:03:44 by dbliss            #+#    #+#             */
/*   Updated: 2021/03/23 12:15:38 by dbliss           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mutantstack.hpp"

void subjectTest()
{

}

void test()
{
    Mutantstack<int> mstack;
   
    mstack.push(5);
    mstack.push(17);
    std::cout << mstack.top() << std::endl;
    mstack.pop();
    std::cout << mstack.size() << std::endl;    
    mstack.push(3);
    mstack.push(5);
    mstack.push(737); //[...] mstack.push(0);
    Mutantstack<int> mstack1 = mstack;
    Mutantstack<int>::const_iterator it = mstack.begin();
    Mutantstack<int>::iterator ite = mstack.begin();
    Mutantstack<int>::const_iterator it1 = mstack1.begin();
    Mutantstack<int>::iterator ite1 = mstack1.end();
    for (; it1 != ite1; it1++)
        std::cout << *it1 << std::endl;
    //Mutantstack<int>::iterator ite = mstack.end();
    //it += 1;
   // *ite += 1;
    // while (it != ite)
    // {
    //     std::cout << *it << std::endl;
    //     ++it;
    // }
    // std::stack<int> s(mstack);
    return 0;
}

int main()
{
    std::cout << std::endl << CLGREEN << "******SUBJECT TEST******" << CLEND << std::endl << std::endl;
    subjectTest();
    std::cout << std::endl <<  CLGREEN << "******SIMPLE TEST******" << CLEND << std::endl << std::endl;
    simpleTest();
    std::cout << std::endl <<CLGREEN << "******COPY CONSTRUCTOR TEST******" << CLEND << std::endl << std::endl;
    copyConstructorTest();
    return 0;