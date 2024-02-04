#include<stdio.h>
int main(){
    int n=5;
    for(int i=1;i<=n;i++){
        printf("%d\n",i);
        for(int r=1;r<=n;r=r+2){
            printf("%d ",r*i);
        }
        printf("\n");
    }
    return 0;
}