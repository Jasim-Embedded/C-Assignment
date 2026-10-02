#include<stdio.h>
int main(){
	unsigned char reg;
	printf("Enter The Register Value : ");
	scanf("%hhu",&reg);
	
	reg = reg | (1 << 2);
	reg = reg & ~(1 << 5);
	reg = reg ^ (1 << 0);
	
	printf("The Modified Registered Value is %d",reg);
	return 0;
}
