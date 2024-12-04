#include<stdio.h>

int sum(int arr[], int start, int n){
	if(start>=n){
		return 0;
	} 
	return arr[start] + sum(arr, start+1, n);
} 

int main() {
    int n;
    printf("Nhap n: ");
    scanf("%d", &n);
    int arr[n]; 
	for(int i=0; i<n; i++){
		printf("Nhap arr[%d] = ", i);
		scanf("%d", &arr[i]);
	} 
	int result = sum(arr, 0, n);
	printf("Tong = %d", result);
    return 0;
}
