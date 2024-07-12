// 8.program to convert infix expression to prefix expression 
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
 
#define MAX 20
 
char STACK[MAX];
int top = -1;
int prcd(char);
void infix2prefix(char[],char[]);
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
 
void infix2prefix(char infix[], char prefix[]) {
    char temp, x;
    int i = 0, j = 0;
    while (infix[i] != '\0') {
        temp = infix[i];
        if (isalnum(temp)) {
            prefix[j++] = temp;
        } else if (temp == '(') {
            push(temp);
        } else if (temp == ')') {
            while ((x = pop()) != '(') {
                prefix[j++] = x;
            }
        } else {
            while (top != -1 && prcd(STACK[top]) >= prcd(temp)) {
                prefix[j++] = pop();
            }
            push(temp);
        }
        i++;
    }
    while (top != -1) {
        prefix[j++] = pop();
    }
    prefix[j] = '\0';
}
 
int main() {
    char infix[MAX], prefix[MAX];
    printf("Enter infix expression: ");
    gets(infix);
    strrev(infix);
    infix2prefix(infix, prefix);
    strrev(prefix);
    printf("Prefix expression: %s\n", prefix);
    return 0;
}
OUTPUT
Enter infix expression: a+b*c-d
Prefix expression: +a-*bcd
