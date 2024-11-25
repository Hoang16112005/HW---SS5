#include <stdio.h>

int main(){
    int a, b;
    int UCLN = 0;
	scanf("%d%d", &a, &b);
    
	if(a == 0 || b == 0){
      return a + b;
    }
    while (a != b){
   	if (a > b){
   			a = a - b;
	    }
	    else{
	    	b = b -a;
		}
		UCLN = a;
    }
    printf("%d", UCLN);
    return 0;
}
