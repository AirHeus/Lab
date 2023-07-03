#include <stdio.h>

// Function to calculate the greatest common divisor (GCD)
int gcd(int a, int b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

// Function to calculate the least common multiple (LCM)
int lcm(int a, int b) {
    return (a * b) / gcd(a, b);
}

int main() {
    int count;
    scanf("%d", &count);

    int numbers[count];
    for (int i = 0; i < count; i++) {
        scanf("%d", &numbers[i]);
    }

    int result = numbers[0];
    for (int i = 1; i < count; i++) {
        result = lcm(result, numbers[i]);
    }

    printf("%d\n", result);

    return 0;
}
