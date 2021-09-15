#include "main.h"
/**
 * prints putchar
 * @return 0
 */
int main(void)
{
    char school[] = "_putchar";
    int i = 0;
    while (school[i] != '\0')
        {
            _putchar(school[i]);
            i++;
        }
_   _putchar("\n");
    return (0);
}