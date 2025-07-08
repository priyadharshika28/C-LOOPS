#include<stdio.h>
int palin(int n){
    int rem=0,rev=0;
    while(n>0){
        rem=n%10;
        rev=rev*10+rem;
        n/=10;
    }
    return rev;
}
int main(){
    int n;
    scanf("%d",&n);
    int sum=0;
    for(int i=1;i<n;i++){
        int res=palin(i);
        if(res==i){
            sum+=i;
        }
    }
    printf("%d",sum);
}
