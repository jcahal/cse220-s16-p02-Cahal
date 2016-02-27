//
// Created by Jonathan Cahal on 2/25/16.
//

#include <stdio.h>

int main() {
    int n, count = 0;

    printf("Enter an integer: ");
    if(scanf("%d", &n) != 1) {
        printf("Invalid input, exiting\n");
        return 1;
    }

    while(n != 1) {
        count++;
        if((n % 2) == 0) {
            n = n / 2;
        } else {
            n = (3 * n) + 1;
        }
    }

    printf("n = %d, after %d loop iterations\n", n, count);
    return 0;
}
