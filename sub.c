#include <iostream>
int main() {    

    int number1, number2, x;
    
    printf("Enter two integers: ");
    scanf("%d %d", &number1, &number2);

    // calculating sum
    x = number1 - number2;      
    
    printf("%d - %d = %d", number1, number2, x);
    return 0;
}
