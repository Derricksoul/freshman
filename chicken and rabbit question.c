#include<stdio.h>
int main()
{
int t,l;
    printf("please input total number and leg total number:(form:num1 num2)\n");
    scanf("%d %d",&t,&l);
if(l<=4*t&&l%2==0&&t>0&&l>0)
{
	printf("chicken:%d rabbit:%d\n",2*t-l/2,l/2-t);
}
else
    printf("impossible\n");
    return 0;
}
