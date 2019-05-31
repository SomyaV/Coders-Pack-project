#include<stdio.h>
void DecimalToBinary(int);
void DecimalToOctal(int);
void DecimalToHexadecimal(int);
int main() {
	int n,choice;
	do {
		printf("\nenter a decimal number : ");
		scanf("%d",&n);
		printf("\nMENU:\n");
		printf("1. decimal to binary\n");
		printf("2. decimal to octal\n");
		printf("3. decimal to hexadecimal\n");
		printf("enter your type of conversion : ");
		scanf("%d",&choice);
		switch(choice) {
			case 1: DecimalToBinary(n);
					break;
			case 2: DecimalToOctal(n);
					break;
			case 3: DecimalToHexadecimal(n);
					break;
			default : printf("please enter a valid choice!\n");
		}
	}while(choice > 0 && choice < 4);
	return 0;
}
void DecimalToBinary(int n) {
	int t = n;
	int a[20],i = 0;
	while(t != 0) {
		int r = t % 2;
		a[i++] = r;
		t = t / 2;
	}
	printf("\nbinary form of %d is :",n);
	int j;
	for( j = i-1;j >= 0;j--) {
		printf("%d",a[j]);
    }
}
void DecimalToOctal(int n) {
	int t = n;
	int a[20],i = 0;
	while(t != 0) {
		int r = t % 8;
		a[i++] = r;
		t = t / 8;
	}
	printf("\noctal form of %d is :",n);
	int j;
	for( j = i-1;j >= 0;j--) {
		printf("%d",a[j]);
	}		
}
void DecimalToHexadecimal(int n) {
	int t = n;
	char a[20];
	int i = 0,r;
	while(t != 0) {
		r = t % 16;
		if(r < 10)
			r = r + 48;
		else
			r = r + 55;
		a[i++] = r;
		t = t / 16;
	}
	printf("\nhexadecimal form of %d is :",n);
	int j;
	for( j = i-1;j >= 0;j--) {
		printf("%c",a[j]);
	}
}
