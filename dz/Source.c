#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Russian");
    int a, b, sum, razn, proi, cas;
    printf("������� 2 ����� ");
    scanf_s("%d %d", &a, &b);
    sum = a + b;
    razn = a - b;
    proi = a * b;
  
    if ((a != 0) && (b != 0))
    {
        printf("�� ����� =  %d \n", sum);
        printf("�� ��������= %d \n", razn);
        printf("�� ������������= %d \n", proi);
        cas = a / b;
        printf("�� �������= %d \n", cas);
        
    }

    else
    {
        printf("������");
    }
    return 0;
}