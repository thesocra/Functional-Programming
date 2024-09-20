#include<stdio.h>

int Two_sum(int* arr,int current_index, int next_index, int target,int size)
{
    if (arr[current_index] + arr[next_index] == target)
    {
        
        printf("[%d, %d]\n",current_index,next_index);
    }
    return 0;
}
int second_iteration(int* arr,int current_index,int next_index,int target,int size){
    Two_sum(arr,current_index,next_index,target,size);
    if (next_index == size - 1)
    {
        return 0;
    }
    second_iteration(arr,current_index,next_index+1,target,size);
    return 0;
}
int first_iteration(int* arr,int current_index,int next_index,int target,int size)
{
    second_iteration(arr,current_index,next_index,target,size);
    if (next_index == size - 1 )
    {
        return 0;
    }
    first_iteration(arr,current_index+1,next_index+1,target,size);
    return 0;
}

int main()
{
    int arr[] = {2,7,11,15};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 9;
    int res = first_iteration(arr,0,1,target,size);
    return 0;
}

/*
Example 1:
Input: nums = [2,7,11,15], target = 9
Output: [0,1]
Explanation: Because nums[0] + nums[1] == 9, we return [0, 1].

Example 2:
Input: nums = [3,2,4], target = 6
Output: [1,2]

Example 3:
Input: nums = [3,3], target = 6
Output: [0,1]
*/