#include <iostream>
#include <fstream>

void printlast_n_lines(char *fileName, int K)
{
        /*
        * Read all lines of file, putting them into
        * a circular buffer of strings.
        * */

    std::ifstream file(fileName);
    std::string line, buffer[K];
    //const int size = sizeof buffer / sizeof *buffer;
    const int size = K;
    int i = 0;
    while (std::getline(file, line))
    {
        buffer[i] = line;
        if (++i >= size)
           i = 0;
    }

    /*print elements in the order they were read*/
    for (int j = 0; j < size; ++j)
    {
        std::cout << buffer[j] << std::endl;
    }
}

int main(int ac, char **av)
{
    printlast_n_lines(av[1], 3);
    return 0;
}


// int main()
// {
//    std::ifstream myfile("test.txt");
//    std::string line, buffer[15];
//    const size_t size = sizeof buffer / sizeof *buffer;
//    size_t i = 0;
//    /*
//     * Read all lines of file, putting them into
//     * a circular buffer of strings.
//     */
//    while (std::getline(myfile, line) )
//    {
//       buffer[i] = line;
//       if ( ++i >= size )
//       {
//          i = 0;
//       }
//    }
//    /*
//     * Print the lines.
//     */
//    for ( size_t j = 0; j < size; ++j )
//    {
//       std::cout << buffer[i] << "\n";
//       if ( ++i >= size )
//       {
//          i = 0;
//       }
//    }
//    return 0;
// }