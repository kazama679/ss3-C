#include <stdio.h>

int countPaths(int i, int j, int M, int N) {
    if (i == M - 1 && j == N - 1) {
        return 1;
    }
    if (i >= M || j >= N) {
        return 0;
    }
    return countPaths(i + 1, j, M, N) + countPaths(i, j + 1, M, N);
}

int main() {
    int M, N;
    printf("Nhap so hang M: ");
    scanf("%d", &M);
    printf("Nhap so cot N: ");
    scanf("%d", &N);
    int result = countPaths(0, 0, M, N);
    printf("So duong di tu (0, 0) den (%d, %d) la: %d\n", M - 1, N - 1, result);
    return 0;
}
