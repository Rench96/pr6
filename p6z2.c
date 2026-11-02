#include <stdio.h>
#include <wchar.h>
#include <locale.h>

// getchar() читает по 1 байту, а русская буква в UTF-8 занимает 2 байта, и она бьется на куски
// getwchar() читает букву целиком и дает ее нормальный код

int main(void)
{
    wchar_t simvol;
    wchar_t minkod = 0;
    int kol = 0;

    setlocale(LC_ALL, "");
    wprintf(L"Введите текст, в конце поставьте #:\n");
    while ((simvol = getwchar()) != L'#' && simvol != WEOF)
    {
        if (kol == 0 || simvol < minkod)
            minkod = simvol;
        kol++;
    }
    if (kol > 0)
        wprintf(L"Минимальный Unicode-код: %d\n", minkod);
    else
        wprintf(L"Символы не введены\n");

    return 0;
}
