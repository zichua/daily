#include <iostream>
#include <set>

using namespace std;

struct ListNode
{
    int val;
    ListNode *next;

    ListNode(int x) : val(x),next(NULL)
    {}
};

class solution
{
    //判断链表有无环（集合）
    bool algo(ListNode *head)
    {
        set<ListNode *> se;

        while(head != NULL)
        {
            if(se.count(head))
            {
                return true;
            }
            se.insert(head);
            head = head->next;
        }
        return false;
    }
};