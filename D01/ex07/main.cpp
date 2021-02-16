/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbliss <dbliss@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/16 13:57:21 by dbliss            #+#    #+#             */
/*   Updated: 2021/02/16 18:03:07 by dbliss           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <stdio.h>

bool is_empty(std::ifstream& pFile)
{
    return pFile.peek() == std::ifstream::traits_type::eof();
}

int replace(char **argv)
{
    std::ifstream ifs(argv[1]);
    std::string s1 = argv[2];
    std::string s2 = argv[3];
    std::string line;

    std::string filename = argv[1];
    filename = filename.append(".replace");
   
	if (!ifs)
	{
		std::cout << "Error: Can't open the file" << std::endl;
		return (1);
	}
    if (is_empty(ifs))
    {
        std::cout << "Error: Seems like you turned an empty file :(" << std::endl;
        return (1);
    }
    std::ofstream ofs(filename);
    if (!ofs)
	{
        std::cout << "Error: Can't create a new file" << std::endl;
        return (1);
	}
    bool is_found = false;
    while (std::getline(ifs, line))
    {
        size_t pos = 0;
        while ((pos = line.find(s1, pos)) != std::string::npos)
        {
            is_found = true;
            line.replace(pos, s1.length(), s2);
            pos += s2.length();
        }
        ofs << line;
        if(!ifs.eof()) 
           ofs << std::endl;
    }
    if (!is_found)
    {
        std::cout << "Error: no symbols to replace in file " << std::endl;
        remove(filename.c_str());
        return (1);
    }
    if (ifs.eof())
    {
        std::cout << "All s1 occurences have been replaced with s2. Check it out!" << std::endl;
    }
    else
    {
        std::cout << "error reading" << std::endl;
    }
    return (0);
}

int main(int argc, char **argv)
{
    if (argc == 4)
    {
        if (replace(argv) == 1)
            return(1);
    }
    else
    {
        std::cout << "Wrong number of args. Usage: ./replace [file] [string to be replaced] [string to replace with]" << std::endl; 
        return (1);
    }
    return (0);
}