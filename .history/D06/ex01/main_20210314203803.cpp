/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbliss <dbliss@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/14 20:10:43 by dbliss            #+#    #+#             */
/*   Updated: 2021/03/14 20:38:02 by dbliss           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stdlib.h>

typedef struct data_s 
{
    std::string s;
    int i;
    std::string s1;
    
} Data;  

char* RandomString(int len)
{
   std::string str = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
   std::string newstr;
   int pos;
   while(newstr.size() != len) {
    pos = ((rand() % (str.size() - 1)));
    newstr += str.substr(pos,1);
   }
   return newstr.c_str();
}

int randomInt()
{
    srand (time(NULL));
    int ret = rand() % 100;
    return (ret);
}

void* serialize(void)
{
    char* s1 = RandomString(10);
    char* s2 = RandomString(20);
    int num = randomInt();

    
}

int main()
{
    void *Sdata = serialize();
    return 0;
}