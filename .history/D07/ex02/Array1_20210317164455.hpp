/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array1.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbliss <dbliss@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/16 20:24:27 by dbliss            #+#    #+#             */
/*   Updated: 2021/03/17 16:44:55 by dbliss           ###   ########.fr       */
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
    Array &operator=(Array const &rhs)
    unsigned int const &size(void) const;
    Array *getArr(void) const;
    Array &operator[](unsigned int index) const

private:
    unsigned int _n;
    T *_arr;

    class ElementOutOfLimits : public std::exception
    {
        virtual const char *what() const throw()
        {
            return ("Element is out of limits");
        }
    };
};

template <typename T>
std::ostream &operator<<(std::ostream &o, Array<T> const &p)
{
    o << "Array ( " << p.size() << ", ";
    for (int i = 0; i < p.size(); i++)
        o << p.getArr()[i];
    o << " )";
    return o;
}

template <typename T>
class Array
{
public:
    Array<T>() : _n(0), _arr(NULL) {}
    Array<T>(unsigned int n) : _n(n)
    {
        this->_arr = new T[_n];
        for (int i = 0; i < this->_n; i++)
            this->_arr[i] = i;
    }
    ~Array<T>(void)
    {
        if (this->_arr != NULL)
            delete [] this->_arr;
    }
    Array<T>(Array<T> const &src)
    {
        this->_arr = new T[src._n];
        this->_n = src._n;
        for (int i = 0; i < this->_n; i++)
            this->_arr[i] = src._arr[i];
    }
    
    Array<T> &operator=(Array<T> const &rhs)
    {
       if (*this != rhs)
       {
            delete[] this->_arr;
            this->_arr = new T[rhs._n];
            this->_n = rhs._n;
            for (int i = 0; i < this->_n; i++)
                this->_arr[i] = rhs._arr[i];
       }
        return (*this);
    }

    unsigned int const &size(void) const { return this->_n; }
    T const *getArr(void) const { return this->_arr; }


    T &operator[](unsigned int index) const
    {
        if (this->_n == 0 || index >= this->_n)
            throw ElementOutOfLimits();
        return (this->_arr[index]);
    }


private:
    unsigned int _n;
    T *_arr;

    class ElementOutOfLimits : public std::exception
    {
        virtual const char *what() const throw()
        {
            return ("Element is out of limits");
        }
    };
};

template <typename T>
std::ostream &operator<<(std::ostream &o, Array<T> const &p)
{
    o << "Array ( " << p.size() << ", ";
    for (int i = 0; i < p.size(); i++)
        o << p.getArr()[i];
    o << " )";
    return o;
}