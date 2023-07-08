#include <stdio.h>

int minSteps(int x, int y) {
    if (x == y) {
        return 0;  // Already reached the integer y
    } else if (y - x == 1 || y - x == 2) {
        return 1;  // Distance between x and y is 1 or 2, can be done in 1 step
    } else if (y - x == 3) {
        return 2;  // Distance between x and y is 3, can be done in 2 steps
    } else {
        int steps1 = minSteps(x, y - 1);  // Recursive call for the case when 1 step is taken
        int steps2 = minSteps(x, y - 2);  // Recursive call for the case when 2 steps are taken
        return 1 + (steps1 < steps2 ? steps1 : steps2);  // Return the minimum number of steps
    }
}

int main() {
    int x = 45, y = 51;
    int result = minSteps(x, y);
    printf("Minimum number of steps to transition from %d to %d: %d\n", x, y, result);
    return 0;
}

