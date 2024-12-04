#include<stdio.h>

int factorial(int n){
	if(n==0){
		return 1; 
	} 
	return n * factorial(n - 1); 
} 

int main(){
	int n;
	printf("Nhap so de tinh giai thua: ");
	scanf("%d", &n);
    printf("Giai thua cua %d la: %d\n", n, factorial(n));
	return 0;
}
