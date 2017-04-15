#include <deposit.h>
#include <ctype.h>

int checkS(int summ)
{
    int i = -1;
    if (summ >= 10000) {
        i = 1;
    } else if (!isdigit(summ)) {
        i = 0;
    }
    return i;
}

int checkD(int date)
{
    int i = -1;
    if (date >= 0 && date <= 365) {
        i = 1;
    } else if (!isdigit(date)) {
        i = 0;
    }
    return i;
}

int check(int summ, int date)
{
    int profit = -1;
    if (summ >= 10000 && summ <= 100000) {
        if (date <= 30) {
            profit = summ * 9 / 10;
        } else if (date <= 120) {
            profit = summ * 102 / 100;
        } else if (date <= 240) {
            profit = summ * 106 / 100;
        } else {
            profit = summ * 112 / 100;
        }
    } else if (summ > 100000){
        if (date <= 30) {
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