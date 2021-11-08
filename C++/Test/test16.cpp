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
        //合并有序链表
        ListNode *algo(ListNode *list_01,ListNode *list_02)
        {
            if(list_01 == NULL)
                return list_01;
            if(list_02 == NULL)
                return list_02;

            ListNode *res = new ListNode(-1);
            ListNode *pre = res;

            while(list_01 != NULL && list_02 != NULL)
            {
                if(list_01->val < list_02->val)
                {
                    pre->next = list_01;
                    list_01 = list_01->next;
                }
                else
                {
                    pre->next = list_02;
                    list_02 = list_02->next;
                }

                pre = pre->next;
            }
            pre->next = list_01 == NULL ? list_02 : list_01;

            return res->next;
        }
};