#include <iostream>

using namespace std;

struct ListNode
{
    int val;
    struct ListNode *next;
    
    ListNode(int x) : val(x),next(NULL)
    {}
};

class solution
{
    public : 
    ListNode *algo(ListNode *phead)
    {
        ListNode *res = NULL;
        ListNode *cur = phead;

        while(cur != NULL)
        {
            ListNode *temp = cur->next;
            cur->next = res;
            res = cur;
            cur = temp;
        }
        return res;
    }
};