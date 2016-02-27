//
// Created by Jonathan Cahal on 2/27/16.
//
/* CSE220 Project 2, question 5
Side effect, Macro versus Function
Test this program on GCC */
#include <stdio.h>
#define mac(a,b) a*a + b*b - 2*a*b
int func(int a, int b) {
	return (a*a + b*b - 2*a*b);
}
int main() {
	int f, g, i, j, x, y;
	printf("Please enter two integers\n");
	scanf("%d%d", &f, &g);
	printf("f = %d\tg = %d\n", f, g);
	i = f;
	j = g;
	x = func(i, j);
	y = mac(i, j);
	printf("x = %d\ty = %d\n", x, y);
	x = func(++i, ++j);
	i = f;
	j = g;
	y = mac(++i, ++j);
	printf("i = %d\tj = %d\n", i, j);
	printf("x = %d\ty = %d\n", x, y);
	return 0;
}
