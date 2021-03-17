/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array1.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbliss <dbliss@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/16 20:24:27 by dbliss            #+#    #+#             */
/*   Updated: 2021/03/17 19:46:12 by dbliss           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

template <typename T>
class Array
{
public:
    Array();
    Array(unsigned int n);
    ~Array(void);
    Array(Array const &src);
    Array &operator=(Array const &rhs);
    unsigned int const size(void) const;
    T *getArr(void) const;
    T &operator[](unsigned int index) const;
    T &operator[](unsigned int index);

        private : unsigned int _n;
    T *_arr;

    class ElementOutOfLimits : public std::exception
    {
        virtual const char *what() const throw()
        {
            return ("Element is out of limits");
        }
    };
};

/* Constructors*/
template <typename T>
Array<T>::Array() : _n(0), _arr(NULL) {}

template <typename T>
Array<T>::Array(unsigned int n) : _n(n)
{
    this->_arr = new T[_n];
    for (int i = 0; i < this->_n; i++)
        this->_arr[i] = i;
}

/* Destructor*/
template <typename T>
Array<T>::~Array(void)
{
    if (this->_arr != NULL)
        delete[] this->_arr;
}

/* Copy constructor*/
template <typename T>
Array<T>::Array(Array const &src)
{
    this->_arr = new T[src._n];
    this->_n = src._n;
    for (int i = 0; i < this->_n; i++)
        this->_arr[i] = src._arr[i];
}

/*Member functions*/
template <typename T>
unsigned int const Array<T>::size(void) const { return this->_n; }

template <typename T>
T* Array<T>::getArr(void) const { return this->_arr; }


/*Assignment operator*/

template <typename T>
Array<T> & Array<T>::operator=(Array const &rhs)
{
    if (this != rhs)
    {
        delete[] this->_arr;
        this->_arr = new T[rhs._n];
        this->_n = rhs._n;
        for (int i = 0; i < this->_n; i++)
            this->_arr[i] = rhs._arr[i];
    }
    return (*this);
}

template <typename T>
T & Array<T>::operator[](unsigned int index) const
{
    if (this->_n == 0 || index >= this->_n)
        throw ElementOutOfLimits();
    return (this->_arr[index]);
}

template <typename T>
T & Array<T>::operator[](unsigned int index)
{
    if (this->_n == 0 || index >= this->_n)
        throw ElementOutOfLimits();
    return (this->_arr[index]);
}

template <typename T>
std::ostream &operator<<(std::ostream &o, Array<T> const &p)
{
    o << "Array ( " << p.size() << ", ";
    for (int i = 0; i < p.size(); i++)
        o << p.getArr()[i];
    o << " )";
    return o;
}