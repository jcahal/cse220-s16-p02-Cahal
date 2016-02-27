#include <stdio.h>

int main() {
    char ch = '+';
    int f, a = 10, b = 20;
    printf("ch = %c\n", ch);
    switch(ch) {
        case '+': f = a + b; printf("f = %d\n", f); break;
        case '-': f = a - b; printf("f = %d\n", f); break;
        case '*': f = a * b; printf("f = %d\n", f); break;
        case '/': f = a / b; printf("f = %d\n", f); break;
        default: printf("Invalid operator\n");
    }
    ch = '-';
    printf("ch = %c\n", ch);
    switch(ch) {
        case '+': f = a + b; printf("f = %d\n", f); break;
        case '-': f = a - b; printf("f = %d\n", f); break;
        case '*': f = a * b; printf("f = %d\n", f); break;
        case '/': f = a / b; printf("f = %d\n", f); break;
        default: printf("Invalid operator\n");
    }
    ch = '*';
    printf("ch = %c\n", ch);
    switch(ch) {
        case '+': f = a + b; printf("f = %d\n", f); break;
        case '-': f = a - b; printf("f = %d\n", f); break;
        case '*': f = a * b; printf("f = %d\n", f); break;
        case '/': f = a / b; printf("f = %d\n", f); break;
        default: printf("Invalid operator\n");
    }
    ch = '/';
    printf("ch = %c\n", ch);
    switch(ch) {
        case '+': f = a + b; printf("f = %d\n", f); break;
        case '-': f = a - b; printf("f = %d\n", f); break;
        case '*': f = a * b; printf("f = %d\n", f); break;
        case '/': f = a / b; printf("f = %d\n", f); break;
        default: printf("Invalid operator\n");
    }
    return 0;
}