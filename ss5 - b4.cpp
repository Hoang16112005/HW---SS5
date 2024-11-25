#include <stdio.h>
int main(){
	int n, j;
	scanf("%d", &j);
	for (int i = 1; i < 10; i++){
		printf("%d x %d = %d \n", j, i, n = i * j);
	}
	return 0;
}
