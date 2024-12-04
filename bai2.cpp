#include<stdio.h>

int total(int n, int m){
	if (n > m) {
		printf("Yeu cau m lon hon n!");
        return 0;
    }
    if (n == m) {
        return n;
    }
    
    return n + total(n + 1, m);
}

int main(){
	int n, m;
	printf("Nhap n: ");
	scanf("%d", &n);
	printf("Nhap m lon hon n: ");
	scanf("%d", &m);
	 
	printf("Tong cac so tu %d den %d = %d", n, m , total(n, m));
	
	return 0;
}

