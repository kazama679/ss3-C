#include <stdio.h>
#include <string.h>

int chuoiDoiXung(char text[], int start, int end) {
    if (start >= end) {
        return 1; 
    } 
    if (text[start] != text[end]) {
        return 0; 
    }
    return chuoiDoiXung(text, start + 1, end - 1);
} 

int main() {
    char text[1000];
    
    printf("Nhap vao chuoi: ");
    fgets(text, sizeof(text), stdin); 
    
    // loai bo \n 
    text[strcspn(text, "\n")] = '\0'; 

    int len = strlen(text); 
    if (chuoiDoiXung(text, 0, len - 1)) {
        printf("Palindrome valid");
    } else {
        printf("Palindrome invalid");
    }

    return 0;
}
 
