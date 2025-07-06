#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int t1=0,t2=1,next=0;
    for(int i=0;i<n;i++){
        printf("%d ",t1);
        next=t1+t2;
        t1=t2;
        t2=next;
    }
}
