#include <stdio.h>

int main(void)
{
    int vybor = 0;
    double massa, obem, plotnost;

    while (vybor != 5)
    {
        printf("\n1 - плотность (масса / объем)\n");
        printf("2 - масса (плотность * объем)\n");
        printf("3 - объем (масса / плотность)\n");
        printf("4 - удельный объем (объем / масса)\n");
        printf("5 - выход\n");
        printf("Ваш выбор: ");

        if (scanf("%d", &vybor) != 1)
        {
            while (getchar() != '\n')
                ;
            printf("Ошибка: нужно ввести число\n");
            vybor = 0;
            continue;
        }

        switch (vybor)
        {
        case 1:
            printf("Масса (кг) и объем (м3): ");
            if (scanf("%lf %lf", &massa, &obem) == 2 && obem != 0)
                printf("Плотность: %.3f кг/м3\n", massa / obem);
            else
                printf("Ошибка ввода\n");
            break;
        case 2:
            printf("Плотность (кг/м3) и объем (м3): ");
            if (scanf("%lf %lf", &plotnost, &obem) == 2)
                printf("Масса: %.3f кг\n", plotnost * obem);
            else
                printf("Ошибка ввода\n");
            break;
        case 3:
            printf("Масса (кг) и плотность (кг/м3): ");
            if (scanf("%lf %lf", &massa, &plotnost) == 2 && plotnost != 0)
                printf("Объем: %.3f м3\n", massa / plotnost);
            else
                printf("Ошибка ввода\n");
            break;
        case 4:
            printf("Объем (м3) и масса (кг): ");
            if (scanf("%lf %lf", &obem, &massa) == 2 && massa != 0)
                printf("Удельный объем: %.6f м3/кг\n", obem / massa);
            else
                printf("Ошибка ввода\n");
            break;
        case 5:
            printf("Выход\n");
            break;
        default:
            printf("Ошибка: нет такого пункта\n");
            break;
        }
    }

    return 0;
}
