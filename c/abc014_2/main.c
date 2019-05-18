#include<stdio.h>

int main()
{
    int a,n,x,i,ans=0;
    scanf("%d %d",&n,&x);
    int b[n];
    for(i=0;x!=0;i++){
        b[i]=x%2;
        x/=2;
    }
    for(i=0;i<n;i++){
        scanf("%d",&a);
        if(b[i]==1) ans+=a;
    }
    printf("%d\n",ans);
    return 0;
}
