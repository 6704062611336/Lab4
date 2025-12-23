#include <stdio.h>
int main() {
	char a;
	int b,i,j;
	printf("enter : ");
	scanf("%c %d",&a,&b);
	for(i=1;i <= b;i++){
		for(j=1;j<b;j++){
			printf("%c",a);
		}
		printf("\n");
	}
}
