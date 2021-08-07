#include<stdio.h>
int main()
{
    int age;
    printf("enter the age:");
    scanf("%d",&age);
    if (age>=18){
        printf("you can vote");
    }
    else if(age>10){
        printf("you can vote for kids because your age in between 5to10");
    }
    else if (age>1){
        printf("you can vote for babies");
    }
    else{
        printf("you can not");
    }
    return 0;
}