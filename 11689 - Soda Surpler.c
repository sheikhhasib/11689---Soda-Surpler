#include<stdio.h>
int main(){
    int i,n,a,b,c,ans;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        scanf("%d %d %d",&a,&b,&c);
        a += b;
        ans = 0;
        while(a>=c){
            ans = ans +a/c;
            a = a%c + a/c;
        }
        printf("%d\n",ans);
    }
    return  0;
}
