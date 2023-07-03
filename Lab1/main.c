#include <stdio.h>

int main() {
    int t1, t2, t3;
    double total_time;

    // Read the input data
    scanf("%d %d %d", &t1, &t2, &t3);

    // Calculate the sum of time
    total_time = t1 + t2 + t3;

    // Round to 2 decimal places
    total_time = (int)(total_time * 100 + 0.5) / 100.0;

    // Displaying the result
    printf("%.2f\n", total_time);

    return 0;
}
