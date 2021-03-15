/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbliss <dbliss@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/14 20:10:43 by dbliss            #+#    #+#             */
/*   Updated: 2021/03/15 13:22:17 by dbliss           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stdlib.h>

typedef struct data_s 
{
    std::string s1;
    int i;
    std::string s2;
    
} Data;  

std::string RandomString(int len)
{
   std::string str = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
   std::string newstr;
   int pos;
   while(newstr.size() != len) {
    pos = ((rand() % (str.size() - 1)));
    newstr += str.substr(pos,1);
   }
   return newstr;
}

int randomInt()
{
    srand (time(NULL));
    int ret = rand() % 100;
    return (ret);
}

void* serialize(void) // тут сделать вывод значений!!!!
{
    std::string s1 = RandomString(10);
    std::string s2 = RandomString(20);
    int num = randomInt();

    std::string all = s1 + std::to_string(num) + s2;
    char *s_all = const_cast <char*> (all.c_str());
    void *all_new = reinterpret_cast <void *> (s_all);		

    std::cout << "data before serializing :" << std::endl;
    std::cout << "random string 1: " << s1 << std::endl; 
    std::cout << "interger: " << num << std::endl;
    std::cout << "random string 2: " << s2 << std::endl; 
    return (all_new);
    
}

Data * deserialize(void * raw)
{
    
}


int main()
{
    void *Sdata = serialize();
    return 0;
}