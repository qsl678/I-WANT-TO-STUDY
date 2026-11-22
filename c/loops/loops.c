#include <stdio.h>

int main(void)
{
    printf("count:");
    for (int i = 1; i <= 3; i++) {
        printf(" %d", i);
    }
    putchar('\n');

    int inclusive_sum = 0;
    for (int i = 1; i <= 5; i++) {
        inclusive_sum += i;
    }

    int exclusive_sum = 0;
    for (int i = 1; i < 5; i++) {
        exclusive_sum += i;
    }
    printf("sums: %d %d\n", inclusive_sum, exclusive_sum);

    int i;
    printf("count and exit:");
    for (i = 1; i <= 4; i++) {
        printf(" %d", i);
    }
    printf(" end=%d\n", i);

    i = 3;
    printf("zero iterations:");
    while (i < 3) {
        printf(" %d", i);
        i++;
    }
    printf(" end=%d\n", i);

    printf("countdown:");
    for (i = 5; i >= 1; i--) {
        printf(" %d", i);
    }
    printf(" end=%d\n", i);

    return 0;
}
