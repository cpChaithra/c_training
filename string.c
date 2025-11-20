#include<stdio.h>
#include<string.h>
void main()
{
    char name [10]="chaithra";
    char new [100]="hello";
    printf("%c\n",name[0]);//access
    printf("length of string is %d\n",strlen(name));
    //concentration
    strcat(new,name);//new=hello chaithra
    printf("%s",new);
    //search for a char in string!
    printf("%zs",strstr(new,"chai"));
}