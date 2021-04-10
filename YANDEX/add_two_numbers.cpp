
#include <iostream>
#include <list>

struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

ListNode *addTwoNumbers(ListNode *l1, ListNode *l2)
{
    std::list<int> lst1;
    std::list<int> lst2;
    std::list<int> lst_ret;
    ListNode *node1 = new ListNode();

    int num2 = 0;
    int num1 = 0;
    int ret = 0;

    while (l1 != NULL)
    {
        lst1.push_front(l1->val);
        l1 = l1->next;
    }
    while (l2 != NULL)
    {
        lst2.push_front(l2->val);
        l2 = l2->next;
    }
    std::list<int>::iterator it1 = lst1.begin();
    std::list<int>::iterator ite1 = lst1.end();
    for (; it1 != ite1; ++it1)
    {
        num1 = num1 * 10 + *it1;
    }

    std::list<int>::iterator it2 = lst2.begin();
    std::list<int>::iterator ite2 = lst2.end();
    for (; it2 != ite2; ++it2)
    {
        num2 = (num2 * 10) + *it2;
    }
    ret = num1 + num2;

    while (ret != 0)
    {
        int remainder = ret % 10;
        lst_ret.push_front(remainder);
        ret /= 10;
    }
    std::list<int>::iterator it3 = lst_ret.begin();
    std::list<int>::iterator ite3 = lst_ret.end();
       node1->val = *it3;
       ListNode *node2 = new ListNode(*(++it3), node1);
       ListNode *node3 = new ListNode(*(--ite3), node2);
       std::cout << node3->val << std::endl;
       std::cout << node3->next->val << std::endl;
       std::cout << node3->next->next->val << std::endl;

    return (node3);
}

int main()
{
    ListNode l1(3);
    ListNode l2(4, &l1);
    ListNode l3(2, &l2);

    ListNode l4(4);
    ListNode l5(6, &l4);
    ListNode l6(5, &l5);

    ListNode *ret;
    ret = addTwoNumbers(&l3, &l6);
    return 0;
}