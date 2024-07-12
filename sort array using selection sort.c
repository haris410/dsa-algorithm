LAB-18
Write a c program to sort array using selection sort
#include<stdio.h>
#include<conio.h>
void main()
{
    int arr[30],i,n;
    void select_sort (int[],int);
    printf("\nEnter no of elements");
    scanf("%d",&n);
    printf("\nEnter %d value",n);
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    printf("\nBefore sorting elements are");
    for(i=0;i<n;i++)
        printf("%d ",arr[i]);
    select_sort (arr,n);
    printf("\nAfter sorting elements are");
    for(i=0;i<n;i++)
        printf("%d ",arr[i]);
}
void  select_sort(int arr[],int n)
{
    int temp,i,j,pos;
    for(i=0;i<n;i++)
    {
        pos=i;
        for(j=i+1;j<n;j++)
        {
            if (arr[j]<arr[pos])
                pos=j;
        }
        temp=arr[pos];
        arr[pos]=arr[i];
        arr[i]=temp;
    }
}
 
OUTPUT
Enter no of elements5
 
Enter 5 value1 9 4 7 3
 
Before sorting elements are1 9 4 7 3
After sorting elements are1 3 4 7 9
