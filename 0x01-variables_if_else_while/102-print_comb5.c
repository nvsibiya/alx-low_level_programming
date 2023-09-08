#include <stdio.h>

int main(void) {
    int i, j;

    for (i = 0; i <= 99; i++) {
        for (j = i; j <= 99; j++) {
            putchar((i / 10) + '0'); /* Print tens digit of i */
            putchar((i % 10) + '0'); /* Print ones digit of i */
            putchar(' '); /* Print a space */
            putchar((j / 10) + '0'); /* Print tens digit of j */
            putchar((j % 10) + '0'); /* Print ones digit of j */

            if (i != 99 || j != 99) {
                putchar(','); /* Print a comma */
                putchar(' '); /* Print a space */
            }
        }
    }

    putchar('\n'); /* Print a newline */

    return 0;
}
