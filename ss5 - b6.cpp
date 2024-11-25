#include <stdio.h>

int main() {
    int choice;
    float a, b;
	while (1){
        printf("\nCALCULATOR\n");
        printf("1/ Sum\n");
        printf("2/ Sub\n");
        printf("3/ Multi\n");
        printf("4/ Div\n");
        printf("5/ Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        
		if(choice >= 1 && choice <= 4){
        	printf("Enter a: ");
            scanf("%f", &a);
            printf("Enter b: ");
            scanf("%f", &b);
        else{
    	printf("Invalid choice");
    	break;
   		}

            switch (choice){
                case 1:
                    printf("Sum: %.2f + %.2f = %.2f\n", a, b, a + b);
                    break;
                case 2:
                    printf("Sub: %.2f - %.2f = %.2f\n", a, b, a - b);
                    break;
                case 3:
                    printf("Mul: %.2f * %.2f = %.2f\n", a, b, a * b);
                    break;
                case 4:
                    if (b != 0)
                    printf("Div: %.2f / %.2f = %.2f\n", a, b, a / b);
                    else
                    printf("Error");
                    break;
            }
        }
        if (choice == 5){
        printf("Exit\n");
        break;
        }
		else{
    	printf("Invalid choice");
    	break;
   		}
    }
    return 0;
}
