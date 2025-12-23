#include <stdio.h> 
int main() {
	char a;
	int b,i;
	printf("enter : ");
	scanf("%c %d",&a,&b);
	for(i = 1; i <= b;i++){
		printf("%c",a,i);
	}
	
}
