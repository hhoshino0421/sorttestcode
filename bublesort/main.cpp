#include <iostream>

#include <random>

//関数プロトタイプ宣言
void BubleSort(long *A, int N);

int main() {
    long* A;
    int length = 100;

    std::random_device rnd;

    //ソート前のデータを用意
    A = new long[length];

    for (int i=0;i<length;i++) {
        A[i] = (long)rnd();
    }

    printf("Before data-----------\n\n");
    //ソート前出力
    for (int i = 0; i < length; i++) {
        printf("%ld\n",A[i]);
    }

    printf("Sorted data-----------\n\n");

    //バブルソート処理実行
    BubleSort(A, length);

    //ソート後出力
    for (int i = 0; i < length; i++) {
        printf("%ld\n",A[i]);
    }


    return 0;
}

void BubleSort(long *A, int N) {

    int i, j;
    long temp;

    for (int i = N - 1; i > 0; i--) {
        for (int j = 0; j < i; j++) {
            if (A[j] > A[j + 1]) {
                temp = A[j];
                A[j] = A[j + 1];
                A[j + 1] = temp;
            }
        }
    }
}