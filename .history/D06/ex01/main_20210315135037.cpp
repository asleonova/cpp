/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbliss <dbliss@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/14 20:10:43 by dbliss            #+#    #+#             */
/*   Updated: 2021/03/15 13:50:37 by dbliss           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stdlib.h>

struct Data
{
    std::string s1;
    int i;
    std::string s2;
    
};

std::string RandomString(unsigned long len)
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
    Data* d = new Data;
    char* new_raw = reinterpret_cast<char*>(raw);
    d->s1 = std::string(new_raw, 10);
    d->i = static_cast<int>(*(new_raw + 10) - 48) * 10;
    d->i += static_cast<int>(*(new_raw + 11) - 48);    
    d->s2 = std::string(new_raw + 12, 20); // add 12 to the adress; 
    std::cout << "d->s1: " << d->s1 << std::endl;
    std::cout << "d->i: " << d->i << std::endl;
    std::cout << "d->s2: "<< d->s2 << std::endl;
    return (d);
    
}


int main()
{
    void *Sdata = serialize();
    deserialize(Sdata);
    return 0;
}