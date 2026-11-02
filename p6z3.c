#include <stdio.h>

int main(void)
{
    int chislo, sumcifr;
    long long ostatok;
    int kol1 = 0, kol2 = 0;
    long long summa1 = 0, summa2 = 0;

    printf("Введите целые числа, 0 - конец:\n");
    while (scanf("%d", &chislo) == 1 && chislo != 0)
    {
        ostatok = (chislo < 0) ? -(long long)chislo : chislo;
        sumcifr = 0;
        while (ostatok > 0)
        {
            sumcifr = sumcifr + ostatok % 10;
            ostatok = ostatok / 10;
        }
        if (chislo % sumcifr == 0)
        {
            kol1++;
            summa1 = summa1 + chislo;
        }
        else
        {
            kol2++;
            summa2 = summa2 + chislo;
        }
    }
    printf("Кратные сумме своих цифр: количество %d, среднее %.2f\n",
           kol1, (kol1 > 0) ? (double)summa1 / kol1 : 0.0);
    printf("Остальные: количество %d, среднее %.2f\n",
           kol2, (kol2 > 0) ? (double)summa2 / kol2 : 0.0);

    return 0;
}
