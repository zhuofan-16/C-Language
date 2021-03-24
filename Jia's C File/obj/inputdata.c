void StringInput(char *t,int lens,char *msg)
{
    char str[16];
    do
    {
        printf(msg);
        scanf("%s",str);
        if(strlen(str)>lens)
            printf("\n输入有误!\n");
    }
    while(strlen(str)>lens);
    strcpy(t,str);
}

double NumberInput(char *msg)
{
    double t=0;
    do
    {
        printf(msg);
        scanf("%lf",&t);
        if(t<0) printf("\n请输入正确的金额！\n");
    }
    while(t<0);
    return t;
}
