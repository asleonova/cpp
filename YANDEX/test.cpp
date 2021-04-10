#include <iostream>
#include <list>

class Person
{
    int id;
    char name[50];

public:
    virtual void aboutMe()
    {
        std::cout << "I'm a person" << std::endl;
    }
    virtual bool addCourse(std::string s) = 0;
    virtual ~Person() { std::cout << "Deleting Person" << std::endl; }
};

class Student : public Person
{
public:
    void aboutMe()
    {
        std::cout << "I'm a student" << std::endl;
    }
    bool addCourse(std::string s)
    {
        std::cout << "Added course" << s << "to student" << std::endl;
        return true;
    }
    virtual ~Student() { std::cout << "Deleting Student" << std::endl; }
};

int main()
{
    Person *p = new Student();
    p->aboutMe();
    p->addCourse("History");
    delete p;
    int *pointer = new int;
    *pointer = 7;
    int *q = pointer;
    *pointer = 8;
    std::cout << *q; // prints 8


    std::cout << "________________" << std::endl;
     std::list<int> lst1;
     int num1;
     lst1.push_front(2);
     lst1.push_front(3);
     lst1.push_front(5);
     std::list<int>::iterator it1 = lst1.begin();
    std::list<int>::iterator ite1 = lst1.end();
    for (; it1 != ite1; ++it1)
    {
        std::cout << "it: " << *it1 << std::endl;
        num1 = (num1 * 10) + *it1;
    }
    std::cout << num1 << std::endl;





}