#include<stdio.h>
int main()
{
    int n;
    printf("Enter the size of 1D-Array:");// Size of Array.
    scanf("%d",&n);
    if(n<=0)
    {
        printf("Invalid Array Size \n"); // Checking for valid array size
        return 0;
    }
    int array1[n];
    printf("Enter the elements of 1D-Array:\n"); //Input of Elements in Array
    for(int i=0; i<n; i++)
    {
        scanf("%d",&array1[i]);
    }
    printf("\n");

    printf("The given Array is: "); // Displaying the Elements of Array
    for(int i=0; i<n; i++)
    {
        printf("%d ",array1[i]);
    }
    printf("\n");

    printf("The Sum of the Array Elements is: ");
    int sum = 0;
    for(int i=0; i<n; i++)
    {
        sum += array1[i];
    }
    printf("%d", sum);// Sum of array
    printf("\n");

    printf("The Multiplication of the Array Elements is: ");
    long long int mul = 1;
    for(int i=0; i<n; i++)
    {
        mul *= array1[i];
    }
    printf("%lld", mul); // Multiplication of Array
    printf("\n");
    printf("The Reverse of the Array is: ");// Reverse of Array
    for(int i=n-1; i>=0; i--)
    {
        printf("%d ", array1[i]);
    }
    printf("\n");
    return 0;
}