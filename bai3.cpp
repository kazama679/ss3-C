#include <stdio.h>

// Hàm ð? quy tính s? Fibonacci th? n
int fibonacci(int n) {
    if (n == 0) {
        return 0;
    }
    if (n == 1) {
        return 1;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int n;
    printf("Nhap so de tinh cac so Fibonacci: ");
    scanf("%d", &n);
    
    printf("Cac so Fibonacci la: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", fibonacci(i));
    }

    return 0;
}

