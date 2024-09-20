#include <stdio.h>

typedef struct
{
    int a;
    int b;
} returnVals;

returnVals twoSum(int *nums, int len, int target, int i, int j)
{
    if (i >= len)
        return (returnVals){-1, -1}; // error state, no solution found
    if (j >= len)
        return twoSum(nums, len, target, i + 1, i + 2); // increment i, reset j
    if (nums[i] + nums[j] == target)
        return (returnVals){i, j};              // found solution
    return twoSum(nums, len, target, i, j + 1); // increment j
}

int main()
{
    int arr[] = {3, 2, 4};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 6;
    returnVals result = twoSum(arr, size, target, 0, 1);

    if (result.a != -1 && result.b != -1)
    {
        printf("Indices found: %d and %d\n", result.a, result.b);
    }
    else
    {
        printf("No solution found.\n");
    }

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