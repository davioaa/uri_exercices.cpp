#include <stdio.h>

int main(){

    int a, b, c, x, y, z, temp;

    scanf("%d %d %d", &a, &b, &c);

    x = a;
    y = b;
    z = c;

    if (x > y){ // x recebe o valor de y caso for maior
        temp = x;
        x = y;
        y = temp;
    }
    if (x > z){
        temp = x;
        x = z;
        z = temp;
    } 
    if (y > z){
        temp = y;
        y = z;
        z = temp;
    }

printf("%d\n%d\n%d\n", x, y, z);
printf("\n%d\n%d\n%d\n", a, b, c);

return 0;
}
