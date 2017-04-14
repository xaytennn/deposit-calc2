#include <stdio.h>
#include <deposit.h>

int main()
{
    int i = -1, summ, date;

    do {
        printf("Input amount of money: ");
        scanf("%d", &summ);
        i = checkS(summ);
        if (i == -1) {
            printf("Error, incorrect amount of money. There should be numerical value (>= 10000).\n");
        } else if (i == 0) {
            printf("Error.\n");
            return 0;
        }
    } while (i == -1);

    do {
        printf("Input amount of days: ");
        scanf("%d", &date);
        i = checkD(date);
        if (i == -1) {
            printf("Error, incorrect amount of days. There should be a positive integer (<= 365).\n");
        } else if (i == 0) {
            printf("Error.\n");
            return 0;
        }
    } while (i == -1);

    summ = check(summ, date);
    printf("Your deposit amount is %d/\n", summ);
    return 0;
}