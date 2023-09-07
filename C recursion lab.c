//Write C program to find the factorial value of a number using recursion.

#include <stdio.h>

int factorial(int n);

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Factorial of %d = %d\n", num, factorial(num));

    return 0;
}

int factorial(int n) {
    if (n == 0) {
        return 1;
    } else {
        return n * factorial(n-1);
    }
}


//Write C program to print fibonacci series using recursion.

#include <stdio.h>

int fibonacci(int n);

int main() {
    int n, i;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    printf("Fibonacci Series: ");
    for(i = 1; i < n; i++) {
        printf("%d ", fibonacci(i));
    }
    return 0;
}

int fibonacci(int n) {
    if(n == 0 || n == 1) {
        return n;
    }
    else {
        return fibonacci(n-1) + fibonacci(n-2);
    }
}

//Write C program to check a given number is prime or not using recursion.

#include <stdio.h>

int is_prime(int n, int i) {
    if (i == 1) {
        return 1;   // Base case: if i reaches 1, return true
    } else {
        if (n % i == 0) {
            return 0;   // If n is divisible by i, return false
        } else {
            return is_prime(n, i-1);   // Recurse with i-1
        }
    }
}

int main() {
    int n;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    if (n < 2) {
        printf("%d is not a prime number.\n", n);
    } else {
        if (is_prime(n, n-1)) {
            printf("%d is a prime number.\n", n);
        } else {
            printf("%d is not a prime number.\n", n);
        }
    }
    return 0;
}


//Write C program to count digits in C using recursion.

#include <stdio.h>

int countDigits(int num);

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Number of digits: %d", countDigits(num));
    return 0;
}

int countDigits(int num) {
    if (num == 0) { // base case
        return 0;
    }
    return 1 + countDigits(num / 10); 
}

//Write C program to calculate the product of two numbers using recursion.

#include <stdio.h>

int multiply(int x, int y) {
    if (y == 0) {  // base case
        return 0;
    } else {
        return x + multiply(x, y-1);  // recursive case
    }
}

int main() {
    int num1, num2, result;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    result = multiply(num1, num2);
    printf("The product of %d and %d is %d\n", num1, num2, result);
    return 0;
}