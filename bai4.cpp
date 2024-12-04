#include<stdio.h>
#include<string.h>
char chuoiDaoNguoc(char text[], int start, int end){
	if(start >=end){
		return 0;
	} 
	char temp;
	temp = text[start]; 
	text[start] = text[end];
	text[end] = temp;
	
	chuoiDaoNguoc(text, start +1, end - 1);
}

int main() {
	char text[1000];
	printf("Nhap vao chuoi: ");
	
	// ep du lieu voi cac chu nguoi dung nhap de tranh tran du lieu 
	fgets(text, sizeof(text), stdin);
	
	// lay ra do dai mang 
	int length = strlen(text);
	
	chuoiDaoNguoc(text, 0, length - 1);
	
	printf("%s", text); 
    return 0;
}
