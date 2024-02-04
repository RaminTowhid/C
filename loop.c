#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    int n=10;
    for(int i=1;i<=n;i++){
        printf("%d X %d= %d\n",a,i,i*a);
    }
    return 0;
}