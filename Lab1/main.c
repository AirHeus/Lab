#include <stdio.h>

int main() {
    int t1, t2, t3;
    double total_time;

    // ������� ����� ���
    scanf("%d %d %d", &t1, &t2, &t3);

    // ���������� ���� ����
    total_time = t1 + t2 + t3;

    // ���������� �� 2 ����� ���� ����
    total_time = (int)(total_time * 100 + 0.5) / 100.0;

    // �������� ���������
    printf("%.2f\n", total_time);

    return 0;
}
