/*
=====================================================
 C Programming - 0 to Advanced Notes (Competitive Focus)
=====================================================
Author: Pointer Pro
Level: Beginner to Advanced
Focus: Data Structures, Algorithms, and Speed
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>
#include <math.h>

//-----------------------------------------------------
// 1. Basic Input/Output
//-----------------------------------------------------
void basicIO() {
    int a; float b; char c;
    scanf("%d %f %c", &a, &b, &c);
    printf("%d %.2f %c\n", a, b, c);
}

//-----------------------------------------------------
// 2. Conditionals and Loops
//-----------------------------------------------------
void loops() {
    for (int i = 0; i < 5; i++) printf("%d ", i);
    printf("\n");
    int j = 5;
    while (j--) printf("%d ", j);
}

//-----------------------------------------------------
// 3. Functions (Complete Guide for Competitive Programming)
//-----------------------------------------------------

// Simple return function
int sum(int a, int b) {
    return a + b;
}

// Function declaration & definition
int square(int);
int square(int x) {
    return x * x;
}

// Recursive function
int factorial(int n) {
    return (n <= 1) ? 1 : n * factorial(n - 1);
}

// Tail recursion (good for optimization)
int gcdTail(int a, int b) {
    return b == 0 ? a : gcdTail(b, a % b);
}

// Pass by reference using pointers (swap)
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Function taking array and size
int findMax(int arr[], int n) {
    int max = arr[0];
    for (int i = 1; i < n; i++) if (arr[i] > max) max = arr[i];
    return max;
}

// Function with pointer to function
int multiply(int a, int b) {
    return a * b;
}

void pointerToFunctionDemo() {
    int (*op)(int, int);
    op = sum;
    printf("Sum (via pointer): %d\n", op(5, 6));
    op = multiply;
    printf("Multiply (via pointer): %d\n", op(5, 6));
}

// Function returning pointer (safe with malloc)
int* getPointerToSum(int a, int b) {
    int* ptr = (int*)malloc(sizeof(int));
    *ptr = a + b;
    return ptr;
}

// Inline function (C++)
// inline int add(int a, int b) { return a + b; }

// Function Overloading (C++ only)
/*
int max(int a, int b) { return (a > b) ? a : b; }
double max(double a, double b) { return (a > b) ? a : b; }
*/

//-----------------------------------------------------
// 4. Arrays and Strings
//-----------------------------------------------------
void arrayOps() {
    int arr[5] = {1, 2, 3, 4, 5};
    for (int i = 0; i < 5; i++) printf("%d ", arr[i]);
}

void stringOps() {
    char str[100];
    scanf("%s", str);
    printf("Length: %lu\n", strlen(str));
}

//-----------------------------------------------------
// 5. Pointers and Dynamic Memory
//-----------------------------------------------------
void pointerDemo() {
    int x = 10, *px = &x;
    printf("Value: %d, Address: %p\n", *px, (void *)px);

    int **ppx = &px;
    int ***pppx = &ppx;
    printf("Triple dereference: %d\n", ***pppx);

    int *dyn = (int *)malloc(5 * sizeof(int));
    for (int i = 0; i < 5; i++) dyn[i] = i + 1;
    for (int i = 0; i < 5; i++) printf("%d ", dyn[i]);
    free(dyn);
}

//-----------------------------------------------------
// 6. Structs and Typedefs
//-----------------------------------------------------
typedef struct {
    int id;
    char name[20];
} Student;

//-----------------------------------------------------
// 7. Bit Manipulation
//-----------------------------------------------------
void bitTricks() {
    int x = 5; // 0101
    printf("Set 1st bit: %d\n", x | (1 << 1));
    printf("Clear 1st bit: %d\n", x & ~(1 << 1));
    printf("Toggle 0th bit: %d\n", x ^ (1 << 0));
}

//-----------------------------------------------------
// 8. Algorithms & Competitive Utilities
//-----------------------------------------------------
int gcd(int a, int b) {
    return b == 0 ? a : gcd(b, a % b);
}

void sieve(int n) {
    int prime[n+1];
    memset(prime, 1, sizeof(prime));
    for (int p = 2; p * p <= n; p++) {
        if (prime[p]) {
            for (int i = p*p; i <= n; i += p)
                prime[i] = 0;
        }
    }
    for (int i = 2; i <= n; i++) if (prime[i]) printf("%d ", i);
}

//-----------------------------------------------------
// 9. Sorting Algorithms
//-----------------------------------------------------
void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

//-----------------------------------------------------
// 10. Fast I/O for Competitive Programming
//-----------------------------------------------------
void fastIO() {
    // For C, use:
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // For C++ only:
    // ios_base::sync_with_stdio(false);
}

//-----------------------------------------------------
// Main Function to Test
//-----------------------------------------------------
int main() {
    basicIO();
    loops();
    printf("Factorial(5): %d\n", factorial(5));
    arrayOps();
    stringOps();
    pointerDemo();
    pointerToFunctionDemo();
    bitTricks();
    sieve(20);

    int arr[5] = {5, 4, 3, 2, 1};
    bubbleSort(arr, 5);
    for (int i = 0; i < 5; i++) printf("%d ", arr[i]);
    return 0;
}
