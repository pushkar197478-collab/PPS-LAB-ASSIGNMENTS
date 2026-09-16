#include <stdio.h>

int main() {
    int l , b , area ;
    printf("Enter the value of length and breadth\n");
    scanf("%d\n %d", &l, &b);
    area = l * b ;
    printf("Then the area of rectangle is %d", area);
    return 0;
}