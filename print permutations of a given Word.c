// 4.program to print permutations of a given Word
 
#include<stdio.h>
#include<conio.h>
#include<string.h>
void permute(char *s,int sp,int ep)
{
    void swap(char *,char *);
    int i;
    if (sp==ep)
        printf("%s\n",s);
    else
    {
        for(i=sp;i<=ep;i++)
        {
            swap((s+sp),(s+i));
            permute(s,sp+1,ep);
            swap((s+sp),(s+i));
        }
    }
}
 
void swap(char *x,char *y)
{
    char temp;
    temp=*x;
    *x=*y;
    *y=temp;
}
void main()
{
    char string[20];
    int noc;
    void permute (char *,int,int);
    printf("\nEnter a string:");
    gets(string);
    noc=strlen(string);
    permute (string,0,noc-1);
}
 
 
 
// OUTPUT
 
// Enter a string:BCA
// BCA
// BAC
// CBA
// CAB
// ACB
// ABC
