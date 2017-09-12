/* ----------------- */ 
/* Proc non std */
/* ----------------- */
#include <unistd.h>

int ft_putchar(char c)
{
    write(1, &c, 1);
    return (0);
}

void ft_print(void)
{

}

void ft_print_comb2(void)
{
    char t[] = {"0123456789"};
    int i = 0;
    int j = 0;
    int k = 0;
    int l = 0;
 
while (i < 10)
{
    while(j < 10)
    {
        while (k < 10)
        {
            while(l < 10)
            {
                if (l > j && k >= i)
                {
                    ft_putchar(t[i]);
                    ft_putchar(t[j]);
                    ft_putchar(' ');
                    ft_putchar(t[k]);
                    ft_putchar(t[l]);
                    ft_putchar(',');
                    ft_putchar(' ');
                }
                l++;
            }
            l = 0;
            k ++;
        }
        k = 0;
        j ++;
    }
    j = 0;
    i ++;
}
}

int main()
{
    ft_print_comb2();
    ft_putchar('\n');
    return (0);
}
