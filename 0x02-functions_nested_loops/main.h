#include <unistd.h>
void print_alphabet(void);
void print_alphabet(void)
{
                int n = 97;
                while(n <= 122)
        {
                putchar(n + 1);
                n++;
        }
        putchar('\n');
}
