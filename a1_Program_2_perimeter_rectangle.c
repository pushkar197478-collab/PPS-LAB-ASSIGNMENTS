#include <stdio.h>

int main() {
    int l , b , perimeter;
    printf("Enter the value of l and b\n");
    scanf("%d\n %d", &l , &b);
    perimeter = 2*(l + b);
    printf("Then the perimeter of Rectangle is %d", perimeter);

    return 0;
}