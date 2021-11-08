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
    public : 
        //链表的奇偶重排
        ListNode *algo(ListNode *head)
        {
            if(head == NULL || head->next == NULL)
                return head;

            ListNode *odd = head;
            ListNode *even = head->next;
            ListNode *odd_1 = odd;
            ListNode *even_1 = even;

            while(odd_1->next != NULL && even_1->next != NULL)
            {
                odd_1->next = even_1->next;
                odd_1 = odd_1->next;
                even_1->next = odd_1->next;
                even_1 = even_1->next;
            }
            odd_1->next = even;

            return odd;
        }
};