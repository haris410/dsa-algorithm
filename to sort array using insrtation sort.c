LAB-15
Write a c program to sort array using insrtation sort
#include<stdio.h>
#include<conio.h>
void main()
{
    int arr[30],i,n;
    void ins_sort (int[],int);
    printf("\nEnter no of elements");
    scanf("%d",&n);
    printf("\nEnter %d value",n);
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    printf("\nBefore sorting elements are");
    for(i=0;i<n;i++)
        printf("%d ",arr[i]);
    ins_sort(arr,n);
    printf("\nAfter sorting elements are");
    for(i=0;i<n;i++)
        printf("%d ",arr[i]);
}
void ins_sort(int arr[],int n)
{
    int i,j,key;
    for(i=1;i<n;i++)
    {
        key=arr[i];
        j=i-1;
        while(j>0 && arr[j]>key)
        {
            arr[j+1]=arr[j];
            j=j-1;
        }
        arr[j+1]=key;
    }
}
 
OUTPUT
Enter no of elements5
 
Enter 5 value1 8 4 9 5
 
Before sorting elements are1 8 4 9 5
After sorting elements are1 4 5 8 9
