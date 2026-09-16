#include <stdio.h>
int main() {
    int bill, unit;
    printf("Enter the unit\n");
    scanf("%d",&unit);
    bill = 0;
    if(unit <=100)
    {
        bill = unit * 2;
        printf("The bill is %d", bill);
    }
    else if (unit<=200)
    {
        bill = (100 * 2) + ((unit - 100) * 3);
        
        printf("The bill is %d", bill);
    }
    else 
    {
        bill = (100 * 2) + (100 * 3) + ((unit-200) * 5);
        printf("The bill is %d", bill);
    }
    return 0;
}