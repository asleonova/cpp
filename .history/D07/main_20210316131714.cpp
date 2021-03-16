/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbliss <dbliss@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/16 13:14:48 by dbliss            #+#    #+#             */
/*   Updated: 2021/03/16 13:17:15 by dbliss           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "whatever.hpp"

int main()
{
    int a = 21;
    int b = 42;

    std::cout << "Max of " << a << " and " << b << " is ";
    std::cout << max<int>(a, b) << std::endl; // Explicit instancination

    float c = -1.7f;
    float d = 4.2f;

    std::cout << "Max of " << c << " and " << d << " is ";
    std::cout << max<float>(c, d) << std::endl; // Explicit instancination


    char e = 'a';
    char f = 'z';

    std::cout << "Max of " << e << " and " << f << " is ";
    std::cout << max<char>(e, f) << std::endl; // Explicit instancination

    return 0;
}