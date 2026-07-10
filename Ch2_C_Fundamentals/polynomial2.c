/* Displays the value of 3xpow5 + 2xpow4 – 5xpow3 – xpow2 + 7powx – 6 */
#include <stdio.h>

int main(void)
{
        float x, pol;

        printf("Enter x: ");
        scanf("%f", &x);

        pol = ((((3*x + 2)*x - 5)*x - 1)* + 7)*x - 6;

        printf("%.2f\n", pol);

        return 0;
}
