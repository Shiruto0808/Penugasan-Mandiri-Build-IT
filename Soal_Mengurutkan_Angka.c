#include <stdio.h>

#define MAX 1000

void bubbleSort(int nilai[], int angka) {
    int x, y, temp;
    for (x = 0; x < angka - 1; x++) {
    for (y = 0; y < angka - x - 1; y++) {
    if (nilai[y] > nilai[y + 1]) {
        temp = nilai[y];
        nilai[y] = nilai[y + 1];
        nilai[y + 1] = temp;
            }
        }
    }
}

int main() {
    int angka;
    int nilai[MAX];
    scanf("%d", &angka);

    
    for (int x = 0; x < angka; x++) {
        scanf("%d", &nilai[x]);
    }

    bubbleSort(nilai, angka);

    for (int x = 0; x < angka; x++) {
        printf("%d\n", nilai[x]);
    }

    return 0;
}
