#include <stdio.h>
#include <string.h>
int main(){
	char str[100];
	printf("Nhap vao chuoi: ");
	gets(str);
	
	int length = strlen(str) ;
	int max_length = 0;
	char longest_str[length];
	int count = 0;	
	
	for(int i = 0; i < length; i++){
		char current_char = str[i];
		int current_length = 1;
		char current_str[length];
		current_str[0] = current_char;
		
		for(int j = i + 1; j < length; j++){
			if (str[j] == current_char) {
				break; 
			} else {
				current_str[current_length] = str[j];
				current_length++;
				current_char = str[j];  
			} 
			 
		}
		current_str[current_length] = '\0';
			
		if (current_length > max_length) {
			max_length = current_length;
			strcpy(longest_str, current_str);
			count = 1;
		} else if (current_length == max_length && strcmp(current_str, longest_str) != 0) {
			count++; 
		} 
	}
	if (count > 1) {
		printf("Không có chuoi ki tu phân biet dau tiên có do dài lon nhat.");
    } else {
    	printf("Chuoi ki tu phân biet ðau tiên có do dài lon nhat: %s", longest_str);
	} 
} 
