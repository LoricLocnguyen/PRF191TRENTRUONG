#include<stdio.h>
int main(){
	char kt = 'A';
	printf("Gia tri cua ki tu:%c ", kt );
	scanf("%c",&kt);
	printf("Gia tri cua dec la %d\n  ",kt );
	printf("Gia tri cua octal la %o\n",kt );;
    printf("char: %zu byte\n", sizeof(char));
	
}