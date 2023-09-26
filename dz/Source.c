#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Russian");
    int a, b, sum, razn, proi, cas;
    printf("введите 2 числа ");
    scanf_s("%d %d", &a, &b);
    sum = a + b;
    razn = a - b;
    proi = a * b;
  
    if ((a != 0) && (b != 0))
    {
        printf("их сумма =  %d \n", sum);
        printf("их разность= %d \n", razn);
        printf("их произведение= %d \n", proi);
        cas = a / b;
        printf("их частное= %d \n", cas);
        
    }

    else
    {
        printf("ошибка");
    }
    return 0;
}