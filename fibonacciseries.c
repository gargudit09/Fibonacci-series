#include<stdio.h>
main()
{
    int n,a=0,b=1,c,i;
    printf("enter no. of terms");
    scanf("%d",&n);
    printf("%d%d",a,b);
    for(i=1;i<=n-2;i++)
    {
        c=a+b;
        printf("%d%",c);
        a=b;
        b=c;
    }
}
