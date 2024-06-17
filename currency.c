#include <stdio.h>

int main() {
    int source, destenation;
    float input, result;
    float rub[6] = {1, 0.011228, 0.015433, 0.016945, 0.082217, 1.77};
    float usd[6] = {89.07, 1, 1.37, 1.51, 7.26, 157.32};
    float cad[6] = {64.79, 0.727537, 1, 1.1, 5.28, 114.46};
    float aud[6] = {59.01, 0.660742, 0.90819, 1, 4.79, 103.95};
    float cny[6] = {12.16, 0.137832, 0.18945, 0.208602, 1, 21.68};
    float yen[6] = {0.566468, 0.006356, 0.008737, 0.00962, 0.046116, 1};
    float *currency[6] = {rub, usd, cad, aud, cny, yen};
    /*
    1: rub
    2: usd
    3: cad
    4: aud
    5: cny
    6: yen
    */ 
    printf("\e[2J\e[0;0H");
    printf("1: rub\n2: usd\n3: cad\n4: aud\n5: cny\n6: yen\nGive me the currency you want to transfer: ");
    scanf("%d", &source);
    printf("\e[2J\e[0;0H");
    printf("1: rub\n2: usd\n3: cad\n4: aud\n5: cny\n6: yen\nNow the one you want to transfer to: ");
    scanf("%d", &destenation);
    printf("\e[2J\e[0;0H");
    printf("Enter the amount you need to transfer: ");
    scanf("%f", &input);
    printf("\e[2J\e[0;0H");

    if (source < 6 && source > 1 || destenation <  6 && destenation > 1) {
        result = input * currency[source - 1][destenation - 1];
        printf("%f\n", result);
    } else {
        printf("\nYou have a problem\n");
    }
    return 0;
}