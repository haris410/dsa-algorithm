LAB-11
Write a c program to IMPLMENT CIRCULER QUEUE
#include <stdio.h>
#include <stdlib.h>
#include<conio.h>
 
#define max 5
int cqueue[max];
int front = -1, rear = -1;
count=0;
 
void cinsert()
{
    if (count==max)
    {
        printf("\n Circular Queue Full");
        getch();
        return 0;
    }
 
    if (front == -1)
        front = 0;
    if (rear == -1)
        rear=0;
    if (rear == max - 1)
        rear = 0;
 
    printf("\nEnter value to Insert: ");
    scanf("%d", &cqueue[rear]);
    rear++;
    count++;
 
}
 
void cdelete()
{
    if (count==0)
    {
        printf("\nQueue Empty");
        getch();
        return 0;
    }
 
    printf("\nElements deleted from queue is %d", cqueue[front]);
    count--;
    getch();
 
    if (front == rear)
    {
        front = -1;
        rear = -1;
    }
    else
    {
        if (front == max - 1)
            front = 0;
        else
            front = front +1;
    }
 
}
 
void display()
{
    int fpos = front, rpos = rear;
    if (count == 0)
    {
        printf("\n Circular Queue is Empty");
        getch();
        return 0;
    }
 
    printf("\nElements in Queue are: ");
    if (fpos < rpos)
    {
        while (fpos < rpos)
        {
            printf("%d ", cqueue[fpos]);
            fpos++;
        }
    }
    else
    {
        while (rpos < max - 1)
        {
            printf("%d ", cqueue[rpos]);
            rpos++;
        }
    }
    getch();
}
 
void main()
{
    int choice;
    while(1)
    {
        printf("\nMain-Menu");
        printf("\n1.Insert");
        printf("\n2.Delete");
        printf("\n3.Display");
        printf("\n4.Exit");
        printf("\nEnter your choice[1-4]: ");
        scanf("%d", &choice);
 
        switch (choice)
        {
            case 1:
                cinsert();
                break;
 
            case 2:
                cdelete();
                break;
 
            case 3:
                display();
                break;
 
            case 4:
                exit(0);
 
            default:
                printf("\nInvalid choice only [1-4] allowed");
                break;
        }
    }
}
OUTPUT
 
Main-Menu
1.Insert
2.Delete
3.Display
4.Exit
Enter your choice[1-4]: 1
 
Enter value to Insert: 23
 
Main-Menu
1.Insert
2.Delete
3.Display
4.Exit
Enter your choice[1-4]: 1
 
Enter value to Insert: 54
 
Main-Menu
1.Insert
2.Delete
3.Display
4.Exit
Enter your choice[1-4]: 1
 
Enter value to Insert: 56
 
Main-Menu
1.Insert
2.Delete
3.Display
4.Exit
Enter your choice[1-4]: 2
 
Elements deleted from queue is 23
Main-Menu
1.Insert
2.Delete
3.Display
4.Exit
Enter your choice[1-4]: 3
 
Elements in Queue are: 54 56
Main-Menu
1.Insert
2.Delete
3.Display
