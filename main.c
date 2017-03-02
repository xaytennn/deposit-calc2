#include <stdio.h>

int checkS(int summ);
int checkD(int date);
int check(int summ, int date);

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

    summ = check(summ, date);
    printf("Your deposit amount is %d/\n", summ);
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

int check(int summ, int date)
{
    int profit;
    if (summ <= 100000) {
        if (date <= 30) {
            profit = summ * 9 / 10;
        } else if (date <= 120) {
            profit = summ * 102 / 100;
        } else if (date <= 240) {
            profit = summ * 106 / 100;
        } else {
            profit = summ * 112 / 100;
        }
    } else {
        if (days <= 30) {
            profit = summ * 9 / 10;
        } else if (date <= 120) {
            profit = summ * 103 / 100;
        } else if (date <= 240) {
            profit = summ * 108 / 100;
        } else {
            profit = summ * 115 / 100;
        }
    }
    return profit;
}