// 2.Write a c program to find the length of string using pointer & Function user defined function
 
#include<stdio.h>
#include<conio.h>
void main()
{
    int strlength(char *),toc;
    char str[80];
    printf("\nEnter a string:");
    gets(str);
    toc=strlength(str);
    printf("\nTotal Charscter=%d",toc);
}
 int strlength(char *s)
 {
    int tc=0;
    while(*s!='\0')
    {
        tc++;
        s++;
    }
    return tc;
 }
 
// OUTPUT
// Enter a string:Jafar
// Total Charscter=5
