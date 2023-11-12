#include "main.h"

int main(void)
{
    int len;

    len = _printf("This is a character: %c\n", 'A');
    _printf("Number of characters printed: %d\n", len);

    len = _printf("This is a string: %s\n", "Hello, World!");
    _printf("Number of characters printed: %d\n", len);

    len = _printf("This is a percent sign: %%\n");
    _printf("Number of characters printed: %d\n", len);

    return (0);
}
