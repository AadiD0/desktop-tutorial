// 1. No return type and no arguments.
#include <stdio.h>
void greet(){
    printf("Hello World");
}
int main(){
    greet();
    return 0;
}

// 2. No return type and with arguments.
#include <stdio.h>
void displayNumber(int number){
    printf("Number is %d", number);
}
int main(){
    displayNumber(5);
    return 0;
}

// 3. With return type and no arguments.
#include <stdio.h>
int getNumber(){
    return 10;
}
int main(){
    int result = getNumber();
    printf("The Number is: %d \n", result);
    return 0;
}

// 4. With return type and with arguments.
#include <stdio.h>
int add(int a , int b){
    return a + b;
}
int main(){
    int result = add(5, 6);
    printf("The sum is: %d \n", result);
    return 0;
}

