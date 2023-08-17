#include <unistd.h>
void print_alphabet(void)
{
                int n = 97;
                while(n <= 122)
        {
                _putchar(n);
                n++;
        }
        putchar('\n');
}
