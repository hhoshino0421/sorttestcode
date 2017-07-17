#include <iostream>

//関数プロトタイプ宣言
void BubleSort(int *A, int N);

int main() {
    //std::cout << "Hello, World!" << std::endl;
    int* A;
    int length = 10;

    A = new int[length];
    A[0] = 301;
    A[1] = 101;
    A[2] = 4002;
    A[3] = 3;
    A[4] = 220;
    A[5] = 111;
    A[6] = 21;
    A[7] = 5;
    A[8] = 10000;
    A[9] = 41;

    //ソート前出力
    for (int i=0;i<length;i++) {
        printf("%d\n",A[i]);
    }

    printf("-----------\n");

    //バブルソート処理実行
    BubleSort(A,length);

    //ソート後出力
    for (int i=0;i<length;i++) {
        printf("%d\n",A[i]);
    }


    return 0;
}

void BubleSort(int *A, int N) {

    int i, j;
    int temp;

    for (int i = N - 1; i > 0; i--) {
        for (int j = 0; j < i; j++) {
            if (A[j] > A[j+1]) {
                temp = A[j];
                A[j] = A[j+1];
                A[j+1] = temp;
            }
        }
    }
}