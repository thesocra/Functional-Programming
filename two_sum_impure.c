#include<stdio.h>

int two_sum(int* arr, int numsSize, int target)
{
    for(int i = 0 ; i<numsSize; i++)
    {
        for(int j = i+1; j<numsSize; i++)
        {
            if(i[arr] + j[arr] == target)
            {
                printf("[%d, %d]",j , i);
                break;
            }
        }
    }
}

void main()
{
    int arr[] = {3, 2, 4};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 6;
    two_sum(arr,size, target);
}