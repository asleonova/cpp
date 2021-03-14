/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbliss <dbliss@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/14 20:10:43 by dbliss            #+#    #+#             */
/*   Updated: 2021/03/14 20:22:34 by dbliss           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

typedef struct data_s 
{
    std::string s;
    int i;
    std::string s1;
    
} Data;  

void* serialize(void)
{

}

int main()
{
    void *Sdata = serialize();
    return 0;
}