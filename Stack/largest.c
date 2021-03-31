// write a program to find largest element in an array of given size.

// input:5
// 10 20 30 40 50
// output:50

// input:2
// 88 777
// output:777

#include <stdio.h>

int main()
{
    int n;
    printf("Enter the size of array: \n");
    scanf("%d", &n); //2
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]); // 88 777
    }
    int large = arr[0]; //first element //88
    for (int i = 1; i < n; i++) //2 
    {
        if (arr[i] > large) //777 > 88
        {
            large = arr[i]; //777
        }
    }
    printf("The largest value is %d ", large);

    return 0;
}