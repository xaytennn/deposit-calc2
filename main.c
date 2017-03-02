#include <stdio.h>

int checkS(int summ);
int checkD(int date);

int main()
{
    int i = -1, summ, date;
    
    do {
        printf("Input amount of money: ");
        scanf("%d", &summ);
        i = checkS(summ);
        if (i == -1) {
            printf("Error, incorrect amount of money. There should be numerical value (>= 10000).\n");
        }
    } while (i == -1);
    
    do {
        printf("Input amount of days: ");
        scanf("%d", &date);
        i = checkD(date);
        if (i == -1) {
            printf("Error, incorrect amount of days. There should be a positive integer (<= 365).\n");
        }
    } while (i == -1);

    return 0;
}

int checkS(int summ)
{
    int i = -1;
    if (summ >= 10000) {
        i = 1;
    }
    return i;
}

int checkD(int date)
{
    int i = -1;
    if (date >= 0 && date <= 365) {
        i = 1;
    }
    return i;
}