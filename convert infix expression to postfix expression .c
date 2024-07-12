
// 7.program to convert infix expression to postfix expression 
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
 
#define MAX 20
 
char STACK[MAX];
int top = -1;
int prcd(char);
void infix2postfix(char[],char[]);
void push(char c) {
        STACK[++top] = c;
}
 
char pop() {
        return STACK[top--];
}
 
int prcd(char x) {
    if (x == '^')
        return 3;
    else if (x == '*' || x == '/')
        return 2;
    else if (x == '+' || x == '-')
        return 1;
    else
        return 0;
}
 
void infix2postfix(char infix[], char postfix[]) {
    char temp, x;
    int i = 0, j = 0;
    while (infix[i] != '\0') {
        temp = infix[i];
        if (isalnum(temp)) {
            postfix[j++] = temp;
        } else if (temp == '(') {
            push(temp);
        } else if (temp == ')') {
            while ((x = pop()) != '(') {
                postfix[j++] = x;
            }
        } else {
            while (top != -1 && prcd(STACK[top]) >= prcd(temp)) {
                postfix[j++] = pop();
            }
            push(temp);
        }
        i++;
    }
    while (top != -1) {
        postfix[j++] = pop();
    }
    postfix[j] = '\0';
}
 
int main() {
    char infix[MAX], postfix[MAX];
    printf("Enter infix expression: ");
    gets(infix);
    infix2postfix(infix, postfix);
    printf("Postfix expression: %s\n", postfix);
    return 0;
}
 
OUTPUT
Enter infix expression: a+b*c-d
Postfix expression: abc+*
