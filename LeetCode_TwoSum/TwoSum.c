/*Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

You may assume that each input would have exactly one solution, and you may not use the same element twice.

Input: nums = [2,7,11,15], target = 9
Output: [0,1]
Output: Because nums[0] + nums[1] == 9, we return [0, 1].

*/

#include<stdio.h>
#include<stdlib.h>

int* twoSum( int*, int ,int, int* );

int main() {
    int nums[] = {2, 7, 11, 15}; 					// Example input array
    int numsSize = sizeof(nums) / sizeof(nums[0]);  // Calculate the size of the array
    int target = 9; 								// Example target value
    int returnSize = 2; 							// To hold the size of the returned array

    int* result = twoSum(nums, numsSize, target, &returnSize);

    // Print the result
    if (result != NULL) 
	{
        printf("Indices of the two numbers are: %d and %d\n", result[0], result[1]);
        free(result); 								// Free the allocated memory
    } else {
        printf("No solution found.\n");
    		}

    return 0;
}

int* twoSum(int* nums, int numsSize, int target, int *returnSize)
{
//*returnSize = 2;
int *arr = (int*)malloc(*returnSize * sizeof(int));
int count = 0;    
for (int i=0;i<numsSize;i++)
{
    int diff = target - nums[i];
    for (int j=i+1; j< numsSize; j++)
    {
    if(nums[j] == diff)
     {
        arr[0]=i;
        arr[1]=j;
        count ++;
     }
 }
  
}
if (count != 0)  return arr;
else return 0 ;
}
