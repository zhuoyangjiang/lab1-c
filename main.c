#include "stdio.h"
#include "stdlib.h"

int main()
{
    double tem_c,tem_f;
    printf("Eenter temperature in ceisius:");
    scanf("%lf",&tem_c);
    tem_f = 1.8*tem_c + 32;
    printf("%.6f°in Celsius is equivalent to %.6f°Fahrenheit.\n", tem_c, tem_f);
    return 0;
}