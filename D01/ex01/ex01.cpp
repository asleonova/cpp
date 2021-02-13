/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex01.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbliss <dbliss@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/13 16:47:22 by dbliss            #+#    #+#             */
/*   Updated: 2021/02/13 17:52:02 by dbliss           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <unistd.h>

// Here's the func which has memory leak
void memoryLeak()
{
    std::string*        panther = new std::string("String panther");
    std::cout << *panther << std::endl;
}

// Here we free the allocated memory with the call "delete" (that's why no memory leak)
void noMemoryLeak()
{
    std::string*        panther = new std::string("String panther");
    std::cout << *panther << std::endl;
    delete panther;
}

// Here we don't allocate the memory on heap, but on the stack instead
void noMemoryLeak1()
{
    std::string panther = std::string("String panther");
    std::cout << panther << std::endl;
}

int main(void)
{
    memoryLeak();
    //noMemoryLeak1();
    //noMemoryLeak();
    sleep(100);
    return (0); 
}



