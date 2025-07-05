#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int sum = n;
    while(sum>=10){
        int temp = sum;
        sum = 0;
        while(temp>0){
            sum+=temp%10;
            temp/=10;
        }
    }
    printf("%d",sum);
}
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    if(n==0){
        printf("0");
    }
    else{
        printf("%d",1+(n-1)%9);
    }
}
