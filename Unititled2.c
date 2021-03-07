#include <stdio.h>
#include <stdlib.h>
int main()
{
    int max(int a,int b);
    int min(int a,int b);
    int add(int a,int b);
    int *p;
    int b;
    int c;
    int a;
    int z;
    printf("一个普通的计算器\n");
    printf("请选择你需要的选项\n");
    printf("1.寻找最大");
    printf("2.寻找最小");
    printf("3.寻找相加");

    scanf("%d",&a);
        printf("输入两个号码");
    scanf("%d%d",&b,&c);
    if (a==1)
    {
       z=max(b,c);
       printf("%d",z);
    }
    if (a==2)
    {
    z=min(b,c);
     printf("%d",z);
    }
    if (a==3)
    {
    z=add(b,c);
     printf("%d",z);
        
    }
    return 0;
}
    int  max(int a,int b)
    {
        int z;
        if (a>b)
        z=a;
        else z=b;
        return (z);
    }
    int min(int a,int b) 
    {
        int z;
        if (b>a)
        z=a;
        else z=b;
        return (z);
        
    }
    int add(int a,int b)
    {
        int z;
        z=a+b;
        return (z);
    }