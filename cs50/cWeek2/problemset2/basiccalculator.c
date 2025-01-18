//this is a program that takes two integers as input and outputs their sum, difference, product, quotient, and remainder.
//
// Steps to implement the program:
// 1. Take two integers as input.
// 2. Calculate the sum, difference, product, quotient, and remainder of the two integers.
// (you must use functions to define each procedure)
// 3. Output the sum, difference, product, quotient, and remainder of the two integers.


#include <stdio.h>

void operationaltext(); // Function prototype

int sum(int a, int b);
// TODO: Implement the other procedure functions prototype

int main(void) {

    int a, b, answer;                   // Declare two integers
    printf("Enter two integers: ");     // Ask the user to enter two integers
    scanf("%d %d", &a, &b);             // prompt the user to enter two integers

    printf("Enter the operation you want to perform: \n");
    operationaltext(); // Call the function to display the operations
    scanf("%d", &answer); // prompt the user to enter the operation they want to perform

    // TODO: Call the procedures and output the results
    //@Definition: A procedure is a set of instructions that performs a specific task.
                // Calling a procedure is the process of instructing the computer to execute the procedure.
                // this means to call a function and make it execute its task.
    switch(answer){
        case 1:
            printf("The sum of %d and %d is %d\n", a, b, sum(a, b));
            break;
        case 2:
            printf("The difference of %d and %d is %d\n", a, b, difference(a, b));
            break; 
        case 3:
            printf("The product of %d and %d is %d\n", a, b, product(a, b));
            break;
        case 4:
            printf("The quotient of %d and %d is %d\n", a, b, quotient(a, b));
            break;
        case 5:
            printf("The remainder of %d and %d is %d\n", a, b, remainder(a, b));
            break;
        default:    
            printf("Invalid input\n");
            break;
    }

    

}

void operationaltext() {
    printf("1. Sum\n");
    printf("2. Difference\n");
    printf("3. Product\n");
    printf("4. Quotient\n");
    printf("5. Remainder\n");
}

int sum(int a, int b){
    return a + b;
}
// Define other procedure functions here:
