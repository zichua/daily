#include <iostream>

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
    //判断链表有无环(快慢指针)
    bool algo(ListNode *head)
    {
        if(head == NULL || head->next == NULL)
            return false;

        ListNode *fast = head->next;
        ListNode *slow = head;

        while(slow != fast)
        {
            if(fast == NULL || fast->next == NULL)
                return false;
            
            fast = fast->next->next;
            slow = slow->next;
        }
        return true;
    }
};