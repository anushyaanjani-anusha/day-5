#include<stdio.h>
struct address{
    char city[20];
    int pin;
};
struct employee{
    char name[10];
    struct address a;
};
int main(){
    int i;
    struct employee e ;
    printf("enter your name:");
    scanf("%s",&e.name);
    printf("enter your city:");
    scanf("%s\n",&e.a.city);
    printf("enter your city pin:");
    scanf("%s",&e.a.pin);
    return 0;
}
