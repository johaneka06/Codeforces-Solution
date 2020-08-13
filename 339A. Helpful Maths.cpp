#include<stdio.h>

int main() {
	char ch;
	int digit1 = 0;
	int digit2 = 0;
	int digit3 = 0;
	int len = 0;
	
	while(scanf("%c", &ch) != '\n') {
		if(ch == '\n') break;
		
		if(ch == '1') digit1++;
		else if (ch == '2') digit2++;
		else if(ch == '3') digit3++;
		len++;
	}
	
	for(int i = 0; i < digit1; i++) {
		printf("1");
		len--;
		if(len > 0) printf("+");
		len--;
	}
	
	for(int i = 0; i < digit2; i++) {
		printf("2");
		len--;
		if(len > 0) printf("+");
		len--;
	}
	
	for(int i = 0; i < digit3; i++) {
		printf("3");
		len--;
		if(len > 0) printf("+");
		len--;
	}
	
}
