#include<stdio.h>
int gcd(int a,int b){
    while(b!=0){
        int temp = b;
        b = a%b;
        a=temp;
    }
    return a;
}
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    int res = a*b/gcd(a,b);
    printf("%d",res);
    return 0;
}
