LAB-17
Write a c program to sort array using Quick sort
#include<stdio.h>
#include<conio.h>
void main()
{
    int arr[30],i,n;
    void quick_sort (int[],int,int);
    printf("\nEnter no of elements");
    scanf("%d",&n);
    printf("\nEnter %d value",n);
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    printf("\nBefore sorting elements are");
    for(i=0;i<n;i++)
        printf("%d ",arr[i]);
    quick_sort(arr,0,n-1);
    printf("\nAfter sorting elements are");
    for(i=0;i<n;i++)
        printf("%d ",arr[i]);
}
void quick_sort(int arr[],int f,int l)
{
    int i,j,pivot,temp;
    if(f<l)
    {
        pivot=f; i=f; j=l;
        while(i<j){
            while(arr[i]<=arr[pivot]&&i<l)
            i++;
            while(arr[j]>arr[pivot])
                j--;
            if(i<j){
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
        temp=arr[pivot];
        arr[pivot]=arr[j];
        arr[j]=temp;
        quick_sort(arr,f,j-1);
        quick_sort(arr,j+1,l);
 
    }
}
 
OUTPUT
Enter no of elements5
Enter 5 value1 9 5 7 2
Before sorting elements are1 9 5 7 2
After sorting elements are1 2 5 7 9
