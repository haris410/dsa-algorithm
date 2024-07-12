// 5.Write a c program to input n student details & display the output
 
#include<stdio.h>
#include<conio.h>
struct student
{
 char  student_name[25],stream[5];
 int roll_no,m1,m2,m3,m4,total;
 float avg;
};
void main()
{
    int n,i;
    printf("Enter Number of student:");
    scanf("%d",&n);
    struct student stud[n];
    printf("Enter student Details");
    for (i=0;i<n;i++)
    {
      fflush(stdin);
      printf("\nEnter student name:");
      gets(stud[i].student_name);
      printf("\nEnter Roll no:");
      scanf("%d",&stud[i].roll_no);
      fflush(stdin);
      printf("\nEnter stream:");
      gets(stud[i].stream);
      printf("\nEnter Marks in 4 subject:");
      scanf("%d %d %d %d",&stud[i].m1,&stud[i].m2,&stud[i].m3,&stud[i].m4);
      stud[i].total=stud[i].m1+stud[i].m2+stud[i].m3+stud[i].m4;
      stud[i].avg=stud[i].total/4;
    }
    printf("\n STUDENT NAME ROLL NO STRAEM SUB1 SUB2 SUB3 SUB4 TOTAL AVG\n");
    for (i=0;i<n;i++)
    {
        printf("\n  %s     %d   %s   %d  %d  %d  %d  %d  %.2f",stud[i].student_name,stud[i].roll_no,stud[i].stream,stud[i].m1,stud[i].m2,stud[i].m3,stud[i].m4,stud[i].total,stud[i].avg);
    }
}
 
 
OUTPUT
Enter Number of student:2
Enter student Details
Enter student name:Azhar
Enter Roll no:42
Enter stream:BCA
Enter Marks in 4 subject:90 98 97 80
