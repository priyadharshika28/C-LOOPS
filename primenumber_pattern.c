#include<stdio.h>
#include<math.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=2;i<=n;i++){
        int prime=1;
        for(int j=2;j<=sqrt(i);j++){
            if(i%j==0){
                prime=0;
                break;
            }
        }
        if(prime==1){
            for(int k=1;k<=i;k++){
                printf("* ");
            }
            printf("\n");
        }
    }
}
