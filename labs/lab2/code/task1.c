// Написать программу, которая генерирует массив из псевдослучайных целых чисел и выводит его в консоль.

#include <stdio.h>
#include <stdlib.h>

int main() {
    int size; // переменная размерности массива
    printf("Enter the array size\n");
    scanf("%d", &size);

    int array[size]; // массив с кол-вом элементов, заданным ранее
    for (int i = 0; i < size; i++) { // заполнение массив случайными числами до 100
        array[i] = rand()%101;
    }

    for (int i = 0; i < size; i++) { // вывод заполненного массива
        printf("%d ", array[i]);
    }
    printf("\n"); // переход на новую строку, чтобы в терминале всё круто было
    return 0;
}