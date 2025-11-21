#include<stdio.h>
void names(char first[],char last[],int sw)
{
    int i=0;
    char full[100];
    while(first[i]!='\0')//adding last
    {
        full[i]=first[i];
        i++;
    }

    full[i]= ' '; //adding space
    i++;
    int j=0;
    while(last[j]!='\0') //adding last
    {
        full[i]=last[j];
        i++;
        j++;
    }
        int len=i+1;
        if(len<sw)
        printf("fits in the screen");
        else
        printf("does not fit in the screen");
    full[i]='\0';
    printf("%s",full);
}
    void main()
    {
        char first[100] = "chaithra";
        char last[100] =  "raj";
        int sw;
        sw=20;
        names(first,last,sw);
    }

