#include<stdio.h>
#include<string.h>	
#include<stdlib.h>
int main(){
	char n;
	char str[100];
	int count;
	int value, addValue;
	do{
		printf("MENU\n");
		printf("1. Nhap vao ky tu\n");
		printf("2. In ra noi dung vua nhap\n");
		printf("3. Nhap vao 1 ky tu, dem so lan xuat hien ky tu trong chuoi\n");
		printf("4. Nhap 2 ky tu thay the ky tu 2 trong chuoi thanh ky tu thu nhat\n");
		printf("5. Nhap vao 1 ky tu, xoa ky tu trong chuoi\n");
		printf("6. Thoat\n");
		int choice;
		printf("Lua chon cua ban la: ");
		scanf("%d",&choice);
			switch(choice){
				case 1:
					printf("Nhap vao ky tu: ");
					scanf("%s",str);
					break;
				case 2:
					printf("Ky tu vua nhap: %s\n",str);
					break;
				case 3:
					count=0;
					printf("Nhap vao ky tu muon tim trong chuoi: ");
					scanf(" %c",&n);
					for(int i=0;i<strlen(str);i++){
						if(str[i]==n){
							count++;
						}
					}
					printf("So lan xuat hien la: %d\n",count);
					break;
				case 4:
					printf("Nhap ky tu muon thay: ");
					scanf("%d",&value);
					printf("Nhap ky tu muon the: ");
					scanf("%d",&addValue);
					for(int i=0;i<strlen(str);i++){
						if(str[i]==value){
							addValue=str[i];
							printf("%d",str[i]);
						}
					}
					break;
				case 5:
					printf("Nhap vao ky tu can xoa: ");
					scanf(" %c",&n);
					for(int i=0;i<strlen(str);i++){
						if(str[i]==n){
							str[i]=' ';
						}
					}
					printf("%s\n",str);
					break;
				case 6:
					exit(0);
			}
		}while(1==1);
		return 0;
	}

