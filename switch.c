#include<stdio.h>
int main(){
    char d;
    scanf("%c",&d);
    switch (d){
        case 'a':
        printf("A "); 
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            printf("Vowel");  
            break;
        default:
        printf("Consonent");  
    }

    
    

    // printf("%c",d+60);
    return 0;
}