#include <iostream>
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
    int val = 0;
    ListNode *ln(nullptr);

    while (l1 || l2 || val)
    {
        if (l1)
        {
            val += l1->val;
            l1 = l1->next;
        }
        if (l2)
        {
            val += l2->val;
            l2 = l2->next;
        }
        ListNode *newNode = new ListNode(val % 10);

        if (ln == nullptr)
            ln = newNode;
        else
        {
            ListNode *head = ln;
            while (ln->next)
                ln = ln->next;
            ln->next = newNode;
            ln = head;
        }
        val /= 10;
    }
    return (ln);
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
    std::cout << ret << std::endl;
    return 0;
}