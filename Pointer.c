#include <stdio.h>
int main()  {
    int x = 5;
    int *y, **z;
    y = &x;
    z = &y;
    printf("%d", y);
    printf("\n");
    printf("%d", *y);
    printf("\n");
    printf("%d", z);
    printf("\n");
    printf("%d", *z);
    printf("\n");
    printf("%d", **z);
}
