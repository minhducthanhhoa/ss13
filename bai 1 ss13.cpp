#include <stdio.h>
#include <string.h>
int main(){
	char str[100];
	int choice;
	int count;
	do {
		printf("MENU\n");
        printf("1. Nhap vao chuoi ky tu\n");
        printf("2. In ra do dai chuoi va noi dung chuoi vua nhap\n");
        printf("3. In ra chuoi dao nguoc\n");
        printf("4. In ra so luong chu cai trong chuoi\n");
        printf("5. In ra so luong chu so trong chuoi\n");
        printf("6. In ra so luong ky tu dac biet trong chuoi\n");
        printf("0. Thoat\n");
        printf("Lua chon cua ban: ");
        scanf("%d", &choice);
        switch(choice){
        	case 1:
				printf("Nhap vao chuoi ki tu: ");
				scanf("%s", str);
				break;
			case 2:
				printf("Do dai chuoi: %d\n", strlen(str));
				printf("Noi dung chuoi vua nhap: %s\n", str);
				break;
			case 3:
					int length = strlen(str);
					for(int i = 0; i < length/2; i++){
						char temp = str[1];
						str[i] = str[length - i - 1];
						str[length - i - 1] = temp; 
					} 
				printf("Chuoi dao nguoc: ");
				printf("%s\n", str);
				break;
			case4:
				int countLetters(char *str);
    				int count = 0;
    				for(int i=0; i<strlen(str); i++){
        				if((str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z'))
            				count++;
    				}
    				return count;
				printf("So luong chu cai trong chuoi: %d\n", countLetters(str));
                break;
            case5:
				int countDigits(char *str);
    			count = 0;
    				for(int i=0; i<strlen(str); i++){
        				if(str[i]>='0' && str[i]<='9')
           					 count++;
    				}
    				return count; 
				printf("So luong chu so trong chuoi: %d\n", countDigits(str));
                break;
            case6:
				int countSpecialChars(char *str);
    			count = 0;
    				for(int i=0; i<strlen(str); i++){
        				if(!((str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z') || (str[i]>='0' && str[i]<='9')))
            				count++;
    				}
    				return count;
				
				printf("So luong ky tu dac biet trong chuoi: %d\n", countSpecialChars(str));
                break;
            case0:
                printf("Ket thuc chuong trinh!\n");
                break;
          
            
		} 
	}while( 1==1); 
} 
