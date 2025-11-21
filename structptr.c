#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct student 
{
char name [100];
int age;
float marks;
};

void main()
{
    struct student s1;
    struct student*p=&s1;
    strcpy(p->name,"chaithra");
p ->age=17; 
p ->marks=89.9;
printf("%d",p->age);
printf("%d",p->marks);
printf("%d",p->name);
}