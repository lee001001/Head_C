#include <stdio.h>
#include <stdlib.h>



int main()
{
    int age;
    printf("Enter your age: ");
    scanf("%i", &age);
    
    char first_name[20];
    char last_name[20];
    printf("Enter first and last name: ");
    scanf("%19s %19s",first_name, last_name);
    printf("First: %s Last:%s\n",first_name, last_name);
}



