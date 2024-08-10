#include<stdio.h>
int main()
{
    float x,y;
    char ch;
    printf("Enter first number:\n");
    scanf("%f",&x);
    printf("Enter the second number:\n");
    scanf("%f",&y);
    printf("Enter\n+ for add\n - for sub\n * for multi\n / for div\n");
    scanf("\n%c",&ch);
    switch(ch)
    {
        case '+':
        printf("Add=%f",(x+y));
        break;
        case '-':
        printf("Sub=%f",(x-y));
        break;
        case '*':
        printf("Multi=%f",(x*y));
        break;
        case '/':
        printf("Div=%f",(x/y));
        break;
       default:
            printf("Error! Operator is not correct.\n");
            return 1;
    }
    return 0;
    
}