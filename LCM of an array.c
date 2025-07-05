#include<stdio.h>
int gcd(int a,int b){
    while(b>0){
        int temp=b;
        b = a%b;
        a = temp;
    }
    return a;
}
int lcm(int a,int b){
    return a*b/gcd(a,b);
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int res = arr[0];
    for(int i=1;i<n;i++){
        res = lcm(res,arr[i]);
    }
    printf("%d",res);
}
