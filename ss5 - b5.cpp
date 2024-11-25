#include <stdio.h>
int main(){
	int n;
	for (int i = 2; i < 10; i++){
		for (int j = 1; j < 10; j++){
			printf("%d x %d = %d \n", i, j, n = i * j);
		}
	}
	return 0;
}
