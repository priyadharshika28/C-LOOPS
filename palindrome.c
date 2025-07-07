#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int rem=0,rev=0;
    int temp=n;
    while(n>0){
        rem = n%10;
        rev=rev*10+rem;
        n/=10;
    }
    printf("%d\n",rev);
    if(temp==rev){
        printf("palin");
    }
    else{
        printf("not palin");
    }
}
