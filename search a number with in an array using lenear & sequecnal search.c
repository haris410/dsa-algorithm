LAB-14
Write a c program to search a number with in an array using lenear & sequecnal search
#include<stdio.h>
#include<conio.h>
void main()
{
    int arr[30],n,i,pos,key;
    int lsearch (int[],int,int);
    printf("\nEnter no of elements");
    scanf("%d",&n);
    printf("\nEnter %d value",n);
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    printf("Enter key value");
    scanf("%d",&key);
    pos=lsearch (arr,n,key);
    if(pos==-1)
        printf("\n search no %d is not found",key);
    else
        printf("\n search no %d is found of index %d",key,pos);
}
int lsearch (int arr[],int n,int key)
{
    int pos=-1,i;
    for(i=0;i<n;i++)
    {
        if (arr[i]==key)
        {
            pos=i;
            break;
        }
    }
    return pos;
} 
 
 
OUTPUT
Enter no of elements5
 
Enter 5 value12 34 65 98 10
Enter key value98
 
search no 98 is found of index 3
