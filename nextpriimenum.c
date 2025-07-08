#include<stdio.h>
#include<math.h>
int prime(int num){
    int flag=1;
    for(int i=2;i<=sqrt(num);i++){
        if(num%i==0){
            flag=0;
        }
    }
    return flag;
}
int main(){
    int n;
    scanf("%d",&n);
    int count=0;
    int res;
    n=n+1;
    while(count<5){
        if(prime(n)){
            printf("%d ",n);
            count++;
        }
        n++;
    }
}
