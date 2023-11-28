#include <stdio.h>
#include <string.h>

#define MAX_SIZE 100

int main() {
    char str[MAX_SIZE];
    int count[256] = {0}; // Mang dem so lan xuat hien cua moi ki tu 
    
    printf("Nhap vào mot chuoi: ");
    fgets(str, sizeof(str), stdin);
    
    // Ðem so lan xuat hien cua moi ki tu trong chuoi
    for (int i = 0; i < strlen(str); i++) {
        count[str[i]]++;
    }
    
    // In ra so lan xuat hien cua moi ki tu trong chuoi
    printf("So lan xuat hien cua moi ki tu trong chuoi:\n");
    for (int i = 0; i < 256; i++) {
        if (count[i] != 0) {
            printf("Ki tu '%c' xuat hien %d lan.\n", i, count[i]);
        }
    }
    
    return 0;
}

