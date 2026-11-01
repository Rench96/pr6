#include <stdio.h>
#include <ctype.h>

int main(void)
{
    int simvol;
    int kol = 0;

    printf("Введите текст, в конце поставьте #:\n");
    while ((simvol = getchar()) != '#' && simvol != EOF)
    {
        if (isspace(simvol))
            kol++;
    }
    printf("Количество пробельных символов: %d\n", kol);

    return 0;
}
