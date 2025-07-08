#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int t1=0;
    int t2=1;
    int next=0;
    for(int i=1;i<=n;i++){
        if(next%2==0){
            printf("%d ",next);
        }
        t1=t2;
        t2=next;
        next=t1+t2;
    }
}
