/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbliss <dbliss@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/15 12:56:59 by dbliss            #+#    #+#             */
/*   Updated: 2021/02/15 13:06:26 by dbliss           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(void)
{
    std::string brain = "HI THIS IS BRAIN";
    std::string* brainPtr = &brain;
    std::string& brainRef = brain;

    std::cout << "Display of a string: " << brain << std::endl;
    std::cout << "Display of a string using a pointer: " << *brainPtr << std::endl;
    std::cout << "Display of a string using a reference: " << brainRef << std::endl;
    
    return (0);
}
