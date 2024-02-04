#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    if(a>=500){
        printf("Burger \n");
        a=a-500;
        if(a>=500){
            printf("Pizza");
        }
        else{
            printf("No Pizza");
        }
    }
    else{
        printf("Nothing");
    }
    
    return 0;
}