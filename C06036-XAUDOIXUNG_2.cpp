#include <stdio.h>
#include <string.h>

int main(){
	char c[100001]; gets(c);
	printf("%d", strlen(c)-1);
	return 0;
}
