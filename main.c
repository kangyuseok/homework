#include<stdio.h>
void first_branch();
void second();
void third();
int main(){
    printf("hello world");
    first_branch();


    printf("we made three branch");


    return 0;
}
void first_branch(){
    printf("first");
}
void second(){
    printf("second");
}
void third(){
    printf("third");
}