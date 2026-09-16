#include <stdio.h>//345

int main() {
    int num , digit , sum;
    printf("Enter the Number\n");
    scanf("%d", &num);
    sum = 0;
    digit = num % 10;
    num = num / 10;
    sum = sum + digit;
    digit = num % 10;
    num = num / 10;
    sum = sum + digit;
    digit = num % 10;
    num = num / 10;
    sum = sum + digit;
    printf("Then the value of sum is %d", sum);


    return 0;
}