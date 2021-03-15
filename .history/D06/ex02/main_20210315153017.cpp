/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbliss <dbliss@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/15 15:02:52 by dbliss            #+#    #+#             */
/*   Updated: 2021/03/15 15:30:17 by dbliss           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include <time.h>

int main()
{
    srand(time(NULL));

    Base *base = generate();
    identify_from_pointer(base);
    identify_from_reference(*base);
    delete base;
    return 0;
}