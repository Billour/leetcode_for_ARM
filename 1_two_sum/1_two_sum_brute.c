#include <stdio.h>
#include <stdlib.h>

int* twoSum(int*, int, int, int* );

int main(void)
{
	
  int i_data[] = {1,2,3,4,5};
  int i_numsSize =5;
  int i_target = 3;
  int *p_nums;
  int returnSize =2;
  
  int * rv; 
  p_nums = i_data;
  
  rv  =  twoSum(p_nums, i_numsSize, i_target, &returnSize);
  
  printf("[  %d ,  %d   ]  \n",  rv[0], rv[1]);
  free(rv);
  
  system("pause");
  return 0;
}

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
