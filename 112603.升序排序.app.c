#include<stdio.h>
int main() {
    int a, b, c, d;
    scanf_s("%d.%d.%d", &a, &b, &c);
    if (a <= b) {
        d = a;
        a = b;
        b = d;
    }
    if (a <= c) {
        d = c;
        c = a;
        a = d;
    }
    if ( b < c ) {
        d = c;
        c = b;
        b = d;
    }
    printf("%d\n%d\n%d\n", a, b, c);
    return 0;
}
