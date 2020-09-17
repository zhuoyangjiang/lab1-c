#include "stdio.h"
#include "stdlib.h"
#include <readline/readline.h>
#include <readline/history.h>

int main()
{
    double tem_c,tem_f;
    char *str;
    str = readline("Eenter temperature in ceisius: ");
    tem_c = atof(str);
    free(str);
    tem_f = 1.8*tem_c + 32;
    printf("%.6f° in Celsius is equivalent to %.6f° Fahrenheit.\n", tem_c, tem_f);
    return 0;
}
