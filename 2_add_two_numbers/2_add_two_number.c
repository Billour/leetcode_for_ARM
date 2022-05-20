#include <stdio.h>
#include <stdlib.h>

/*Definition for singly-linked list. 

version:2022051901
Reference: https://leetcode.com/problems/add-two-numbers/discuss/283820/Solution-in-C
*/
struct ListNode
{
    int val;
    struct ListNode *next;
};
/*int* twoSum(int*, int, int, int* );
*/
int main(void)
{
/*
    int i_data[] = {1, 2, 3, 4, 5};
    int i_numsSize = 5;
    int i_target = 3;
    int *p_nums;
    int returnSize = 2;
    int *rv;
    p_nums = i_data;
   rv = twoSum(p_nums, i_numsSize, i_target, &returnSize);
    printf("[  %d ,  %d   ]  \n", rv[0], rv[1]);
    free(rv);
*/
   
   /*free( addTwoNumbers )*/
    system("pause");
    return 0;
}
/** 

 */
struct ListNode *addTwoNumbers(struct ListNode *l1, struct ListNode *l2)
{
    struct ListNode l_temp;
    l_temp.val = 0;
    l_temp.next = NULL;
    struct ListNode *p_curr = &l_temp;
    int i_remainder = 0, i_sum=0;/* i_remainder is carry when over 10 of a sume.*/
    while (l1 != NULL || l2 != NULL || i_remainder != 0)
    {
        i_sum = i_remainder + (l1 == 0 ? 0 : l1->val) + (l2 == 0 ? 0 : l2->val);
        i_remainder = i_sum / 10;
        i_sum %= 10;

        p_curr->next = malloc(sizeof(struct ListNode));/**/
        p_curr->next->next = NULL;
        p_curr->next->val = i_sum;

        /*There are move to nex node.*/
        p_curr = p_curr->next;
        l1 = (l1 == 0 ? 0 : l1->next);
        l2 = (l2 == 0 ? 0 : l2->next);
    }
    return l_temp.next;
}

/*
int* twoSum(int* nums, int numsSize, int target, int* returnSize){
    *returnSize = 2;
    int *returnValues = malloc((*returnSize) * sizeof(int));

    for (int i = 0; i < numsSize - 1; i++) {
        for (int j = i + 1; j < numsSize; j++) {
            if (nums[i] + nums[j] == target) {
                returnValues[0] = i;
                returnValues[1] = j;
                break;
            }
        }
    }
    
    return returnValues;
}
*/
