#include <stdio.h>

#define GRAN1 10.0
#define GRAN2 30.0
#define TARIF1 1.0
#define TARIF2 2.0
#define TARIF3 3.0

int main(void)
{
    double obem, stupen1, stupen2, stupen3, itog;

    printf("Введите объем воды (м3): ");
    scanf("%lf", &obem);

    if (obem <= GRAN1)
    {
        stupen1 = obem * TARIF1;
        stupen2 = 0.0;
        stupen3 = 0.0;
    }
    else if (obem <= GRAN2)
    {
        stupen1 = GRAN1 * TARIF1;
        stupen2 = (obem - GRAN1) * TARIF2;
        stupen3 = 0.0;
    }
    else
    {
        stupen1 = GRAN1 * TARIF1;
        stupen2 = (GRAN2 - GRAN1) * TARIF2;
        stupen3 = (obem - GRAN2) * TARIF3;
    }
    itog = stupen1 + stupen2 + stupen3;

    printf("Объем: %.2f м3\n", obem);
    printf("Ступень 1 (до %.0f м3 по %.2f): %.2f\n", GRAN1, TARIF1, stupen1);
    printf("Ступень 2 (от %.0f до %.0f м3 по %.2f): %.2f\n", GRAN1, GRAN2, TARIF2, stupen2);
    printf("Ступень 3 (свыше %.0f м3 по %.2f): %.2f\n", GRAN2, TARIF3, stupen3);
    printf("Итого: %.2f\n", itog);

    return 0;
}
