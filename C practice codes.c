#include <stdio.h>

int main() {
    int age = 20;
    float cgpa = 8.5;
    char grade = 'A';

    printf("Age: %d\n", age);
    printf("CGPA: %.1f\n", cgpa);
    printf("Grade: %c\n", grade);

    return 0;
}


#include <stdio.h>

int main() {
    int a = 10, b = 5;

    printf("Addition = %d\n", a + b);
    printf("Subtraction = %d\n", a - b);
    printf("Multiplication = %d\n", a * b);
    printf("Division = %d\n", a / b);

    return 0;
}

#include <stdio.h>

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num % 2 == 0)
        printf("Even Number");
    else
        printf("Odd Number");

    return 0;
}


#include <stdio.h>

int main() {
    int arr[5] = {10, 20, 30, 40, 50};

    printf("Array Elements:\n");

    for (int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}

#include <stdio.h>

int main() {
    int num = 100;
    int *ptr;

    ptr = &num;

    printf("Value of num = %d\n", num);
    printf("Address of num = %p\n", ptr);
    printf("Value using pointer = %d\n", *ptr);

    return 0;
}

#include <stdio.h>

int main() {
    char name[20];

    printf("Enter your name: ");
    scanf("%s", name);

    printf("Hello %s", name);

    return 0;
}


#include <stdio.h>

struct Student {
    int id;
    char name[20];
};

int main() {
    struct Student s;

    s.id = 101;

    printf("Enter Name: ");
    scanf("%s", s.name);

    printf("\nStudent Details\n");
    printf("ID: %d\n", s.id);
    printf("Name: %s\n", s.name);

    return 0;
}

#include <stdio.h>

union Data {
    int num;
    float value;
};

int main() {
    union Data d;

    d.num = 50;
    printf("Integer: %d\n", d.num);

    d.value = 10.5;
    printf("Float: %.1f\n", d.value);

    return 0;
}



