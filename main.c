//
// Created by Tom on 2021-09-19.
//

#include <stdio.h>
#include <stdlib.h>

int main()
{//
// Created by Tom on 2021-09-19.
//

#include <stdio.h>
#include <stdlib.h>

    int main()
    {
        int age;
        double gpa;
        char grade;
        char name[20];

        printf("Enter your age: ");
        scanf("%d", &age);
        printf("You are %d years old", age);
        getch();

        printf("\nEnter your gpa: ");
        scanf("%lf", &gpa);
        printf("Your GPA is %f", gpa);
        getch();

        printf("\nEnter your grade: ");
        scanf("%c", &grade);
        printf("Your grade is %c", grade);
        getch();

        printf("\nEnter your name: ");
        scanf("%s", &name);
        printf("Your name is %s", name);
        getch();

        printf("\nEnter your name: ");
        fgets(name, 20, stdin);
        printf("Your name is %s", name);
        getch();
        return 0;
    }
    return 0;
}