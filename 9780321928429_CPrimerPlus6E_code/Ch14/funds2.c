/* funds2.c -- passing a pointer to a structure */
#include <stdio.h>
#define FUNDLEN 50

struct funds {
    char   bank[FUNDLEN];
    double bankfund;
    char   save[FUNDLEN];
    double savefund;
};
struct bankAccount {
    char * name;
    float  amount;
};
double sum(const struct funds *);  /* argument is a pointer */
void add_amount(struct bankAccount *, double amount);
void sub_amount(struct bankAccount *, double amount);

int main(void)
{
    struct funds stan = {
        "Garlic-Melon Bank",
        4032.27,
        "Lucky's Savings and Loan",
        8543.94
    };

    struct bankAccount stanAccount = {
        "stan",
        100.01
    };
    struct bankAccount * stanp = &stanAccount;
    printf("Stan has a total of $%.2f.\n", sum(&stan));
    printf("StanAccount has total $%.2f\n",stanp->amount);

    return 0;
}

double sum(const struct funds * money)
{
    return(money->bankfund + money->savefund);
}
void add_amount(struct bankAccount * account, double amount)
{
    account->amount += amount;
}
void sub_amount(struct bankAccount * account, double amount)
{
    account->amount -= amount;
}
