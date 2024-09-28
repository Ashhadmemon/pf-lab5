#include <stdio.h>

int sum_of_digits(int n) {
    int sum = 0;
    while (n > 0) {
        sum += n % 10;
        n /= 10;        
    }
    if (sum >= 10) {
        return sum_of_digits(sum);
    }
    return sum;
}
int main() {
    int number, result;
    printf("Enter a number: ");
    scanf("%d", &number);
    result = sum_of_digits(number);
    printf("The single-digit sum of %d is: %d\n", number, result);
    return 0;
}

