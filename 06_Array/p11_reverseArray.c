// reversing the array without using any extra array

#include <stdio.h>

int main()
{
    int arr[5] = {9,6,4,2,1};

    for (int i = 4; i >= 0; i--)
    {
        int temp;
        
        printf("%d ", arr[i]); // printing an array
    }

    return 0;
}