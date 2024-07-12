// LAB-9
// program to convert prefix expression to postfix expression 
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
 
#define MAX 50
 
char* pop();
char prefix[MAX];
char stack[MAX][MAX];
void push(char*);
void prefix_to_postfix(void);
int top = -1;
 
int main() {
    printf("Enter Prefix Expression: ");
    gets(prefix);
    //prefix[strcspn(prefix, "\n")] = 0;  // Remove newline character
    prefix_to_postfix();
    return 0;
}
 
void prefix_to_postfix() {
    int i;
    char op1[MAX], op2[MAX], symbol, temp[2], string[MAX];
    for (i = strlen(prefix) - 1; i >= 0; i--) {
        symbol = prefix[i];
        temp[0] = symbol;
        temp[1] = '\0';
        switch (symbol) {
            case '+':
            case '-':
            case '*':
            case '/':
            case '^':
                strcpy(op1, pop());
                strcpy(op2, pop());
                strcpy(string, op1);
                strcat(string, op2);
                strcat(string, temp);
                push(string);
                break;
 
            default:
                push(temp);
        }
    }
    printf("\nPostfix Expression: %s\n", stack[0]);
}
 
void push(char* str) {
    if (top >= MAX - 1) {
        printf("\nStack overflow\n");
    } else {
        top = top + 1;
        strcpy(stack[top], str);
    }
}
 
char* pop() {
    if (top == -1)
        {
        printf("\nStack underflow\n");
        return 0;
       }
    else
        return stack[top--];
}
 
OUTPUT
Enter Prefix Expression: *+AB-CD
 
Postfix Expression: AB+CD-*
