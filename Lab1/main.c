#include <stdio.h>

int main() {
    int t1, t2, t3;
    double total_time;

    // «читуЇмо вх≥дн≥ дан≥
    scanf("%d %d %d", &t1, &t2, &t3);

    // ќбчислюЇмо суму часу
    total_time = t1 + t2 + t3;

    // ќкруглюЇмо до 2 знак≥в п≥сл€ коми
    total_time = (int)(total_time * 100 + 0.5) / 100.0;

    // ¬иводимо результат
    printf("%.2f\n", total_time);

    return 0;
}
