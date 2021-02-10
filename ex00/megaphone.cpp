/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbliss <dbliss@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/08 13:07:05 by dbliss            #+#    #+#             */
/*   Updated: 2021/02/08 14:16:47 by dbliss           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>
#include <cstring>

char *strup(char *str)
{
    for (size_t i = 0; i < strlen(str); i++)
        str[i] = toupper(str[i]);
    return (str);
}
int main(int argc, char **argv)
{
    if (argc == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    else
    {
        for (int i = 1; i < argc; i++)
            std::cout << strup(argv[i]);
    }
    std::cout << std::endl;
    return (0);
}
