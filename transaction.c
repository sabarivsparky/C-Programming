#include <stdio.h>
int main() {
    int bal = 10000;
    int trans;
    int amount;

    printf("Enter the number of transaction:");
    scanf("%d", &trans);

    for (int i = 0; i < trans; i++) {
        printf("\nEnter the amount:");
        scanf("%d", &amount);

        if (amount > 0 && amount % 100 == 0 && amount >= 100) {
            bal += amount;
            printf("\nCredit Successfull");
        }
        else if (amount < 0 && amount % 100 == 0 && (-amount) <= bal) {
            bal -= (-amount);
            printf("\nDebit Successfull");
        }
        else {
            printf("\nTransaction Failed");
        }
    }

    printf("\nBalance: %d", bal);
    return 0;
}
