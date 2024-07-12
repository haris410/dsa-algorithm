LAB-16
Write a c program to sort array using bubble sort
#include<stdio.h>
#include<conio.h>
void main()
{
    int arr[30],i,n;
    void bubble_sort (int[],int);
    printf("\nEnter no of elements");
    scanf("%d",&n);
    printf("\nEnter %d value",n);
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    printf("\nBefore sorting elements are");
    for(i=0;i<n;i++)
        printf("%d ",arr[i]);
    bubble_sort(arr,n);
    printf("\nAfter sorting elements are");
    for(i=0;i<n;i++)
        printf("%d ",arr[i]);
}
void bubble_sort (int arr[],int n)
{
    int temp,i,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-1;j++)
        {
            if (arr[j]>arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}
 
OUTPUT
Enter no of elements5
 
Enter 5 value1 8 5 4 9
 
Before sorting elements are1 8 5 4 9
After sorting elements are1 4 5 8 9
