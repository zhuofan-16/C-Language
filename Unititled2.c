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
    printf("һ����ͨ�ļ�����\n");
    printf("��ѡ������Ҫ��ѡ��\n");
    printf("1.Ѱ�����");
    printf("2.Ѱ����С");
    printf("3.Ѱ�����");

    scanf("%d",&a);
        printf("������������");
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