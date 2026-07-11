                /* Program to demonstrate a practical example of unions */

#include <stdio.h>

union Payment
{
    int upiID;
    long long cardNumber;
};

struct Transaction
{
    int paymentMode;
    union Payment payment;
};

int main()
{
    struct Transaction transaction;

    printf("Select Payment Method\n");
    printf("1. UPI\n");
    printf("2. Card\n");

    printf("Enter your choice: ");
    scanf("%d", &transaction.paymentMode);

    if (transaction.paymentMode == 1)
    {
        printf("Enter UPI ID (Numeric): ");
        scanf("%d", &transaction.payment.upiID);

        printf("\nPayment Details\n");
        printf("Payment Mode : UPI\n");
        printf("UPI ID       : %d\n", transaction.payment.upiID);
    }
    else if (transaction.paymentMode == 2)
    {
        printf("Enter Card Number: ");
        scanf("%lld", &transaction.payment.cardNumber);

        printf("\nPayment Details\n");
        printf("Payment Mode : Card\n");
        printf("Card Number  : %lld\n", transaction.payment.cardNumber);
    }
    else
    {
        printf("Invalid Choice!\n");
    }

    return 0;
}
