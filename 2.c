#include <stdio.h>
int main(){
    
    float c, f;
    scanf("%f", &c);
    f = (c * 1.8) + 32;
    printf("F = %.2f, C = %.0f", f, c);
    return 0;
}