#include <iostream>

using namespace std;
struct ListNode
{
    int val;
    struct ListNode *next;
};

struct ListNode *addTwoNumbers(struct ListNode *l1, struct ListNode *l2)
{
    struct ListNode temp;
    temp.val = 0;
    temp.next = NULL;
    struct ListNode *curr = &temp;
    int rem = 0, sum;

    while (l1 !=NULL || l2 != NULL || rem !=0)
    {
        sum = rem +(l1 ==0? 0:l1 ->val) +(l2 ==0 ?0 :l2->val);
        rem = sum/10;
        sum %= 10;
        curr->next = (ListNode)malloc(sizeof( struct ListNode));
        curr->next->next =NULL;
        curr->next->val = sum;
        curr = curr->next;
        l1 =(l1 ==0 ? 0:l1->next);
        l2 =(l2 ==0 ? 0:l2->next);

    }

    return temp.next;
}

int main()
{

    system("pause");
    return 0;
}