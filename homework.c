#include <stdio.h>
#include <locale.h>
#define MAX_SIZE 100

int main() {
    setlocale(LC_ALL, "");
    int n, count = 0;
    printf("Введите количество элементов в массиве: ");
    scanf("%d", &n);

    if (n > MAX_SIZE) {
        printf("Ошибка: максимальный размер массива - %d\n", MAX_SIZE);
        return 1;
    }

    int arr[MAX_SIZE];

    printf("Введите %d элементов массива:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n; i++) {
        if (arr[i] > 10 && i % 2 == 0) {
            count++;
        }
    }
    printf("Количество элементов больших 10, которые находятся на чётных позициях: %d\n", count);
	return 0;
}