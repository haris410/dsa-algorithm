// 1.Write a c program to create Initialize & Access pointer Variable
#include<stdio.h>
#include<conio.h>
void main()
{
    int n1,n2,*ptr;
    printf("\nEnter any Number:");
    scanf("%d",&n1);
    ptr=&n1;
    printf("\n VALUE IN ADRESS=%u is %d",ptr,*ptr);
    printf("\nEnter any Number:");
    scanf("%d",&n2);
    ptr=&n2;
    printf("\n VALUE IN ADRESS=%u is %d",ptr,*ptr);
}
 
// OUTPUT
// Enter any Number:12
 
// VALUE IN ADRESS=6422036 is 12
// Enter any Number:13
 
//  VALUE IN ADRESS=6422032 is 1	
