#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int sum=0;
    for(int i=1;i<n;i++){
        if(n%i==0){
            sum+=i;
        }
    }
    printf("%d",sum);
    if(sum>n){
        printf("abundant num");
    }
    else{
        printf("not abundant num");
    }
}
