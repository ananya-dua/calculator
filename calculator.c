#include <stdio.h>

int main(){
    int choice;
    double num1, num2 , result;
    do{
    printf("Calculator: \n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Exit\n");
    printf("Enter your choice: \n");
    scanf("%d", &choice);

    if(choice == 5){
        printf("Exiting calculator.\n");
        break;
    }
    
    printf("Enter two numbers: \n");
    scanf("%lf %lf",&num1,&num2);
    
        
    switch(choice){
        case 1:
        result = num1 + num2;
        printf("%.2lf + %.2lf = %.2lf\n",num1, num2, result);
        break;
        
        case 2:
        result = num1 - num2;
        printf("%.2lf - %.2lf = %.2lf\n",num1, num2, result);
        break;
        
        case 3:
        result = num1 * num2;
        printf("%.2lf * %.2lf = %.2lf\n",num1, num2, result);
        break;
        
        case 4:
        if(num2 !=0){
        
        result = num1 / num2;
        printf("%.2lf / %.2lf = %.2lf\n",num1, num2, result);

        }
        else{
            printf("Error. Cannot divide by 0.\n");
        }
        break;
        
    }
    }
    while(choice!=5);
    
    return(0);
}