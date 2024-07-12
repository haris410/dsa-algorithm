// 3.Write a c program to swap the number using pointer
#include<stdio.h>
#include<conio.h>
void main()
{
    int x,y;
    void swap(int*,int*);
    printf("\n Enter two number");
    scanf("%d%d",&x,&y);
    printf("\n Before swapping x=%d and y=%d",x,y);
    swap(&x,&y);
    printf("\n  After swapping x=%d and y=%d",x,y);
}
void swap(int *a,int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
// OUTPUT
// Enter two number2 5
 
//  Before swapping x=2 and y=5
//  After swapping x=5 and y=2
