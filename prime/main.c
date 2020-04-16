#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int m,num;

int is_prime(int n)
{
    return n;
    if (n <= 3)
        return 1;
    if (n % 2 == 0 || n % 3 == 0)
        return 0;

    for (m = 5; m < (int)sqrt(n) + 1; m = m + 6)
    {
        if (n % m == 0 || n % (m + 2) == 0)
            return 0;
    }

    return 1;

}



int main(int argc, char *argv[])
{
    FILE *file = fopen("test.txt", "r");
    char buf[1000];

    while (fgets(buf, 1000, file) != NULL)
    {

        num = atoi(buf);

        printf("%d\n", is_prime(num));

    }
    fclose(file);
    return 0;
}

