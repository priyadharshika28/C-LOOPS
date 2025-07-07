#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    int i=0;
    while(n>0){
        arr[i++]=n%10;
        n/=10;
    }
    for(int j=i-1;j>=0;j--){
        printf("%d",arr[j]+1);
    }
}
