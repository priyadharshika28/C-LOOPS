#include<stdio.h>
#include<math.h>
int main(){
    int n;
    scanf("%d",&n);
    int temp,rem=0,sum=0,count=0;
    temp=n;
    while(temp!=0){
       temp/=10;
       count++;
    }
    temp=n;
    while(temp!=0){
        sum=temp%10;
        rem+=pow(sum,count);
        temp/=10;
    }
    printf("%d\n",rem);
    if(n==rem){
        printf("amstrong num");
    }
    else{
        printf("not amstrong");
    }
}
