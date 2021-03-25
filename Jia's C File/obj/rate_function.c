//活期利率更改
void change_normal_rate()
{
    int x=0;//标记变更
    system("cls");
    printf("*********************************************************\n");
    printf("*                                                       *\n");
    printf("*                                                       *\n");
    printf("*              当前活期利率:%.4f                      *\n",RATE.normal_rate);
    printf("*                                                       *\n");
    printf("*                                                       *\n");
    printf("*********************************************************\n");
    printf("\n\n\n");
    printf("请输入更改后活期利率:\n");
    scanf("%lf",&RATE.normal_rate);
    printf("\n");
    system("pause");
    save_rate();
    printf("\n");
    printf("操作成功！");
    x=1;
    change_remind(x);
    Sleep(2000);
    return;
}

//定期利率更改
void change_regular_rate()
{
    system("cls");
    int cg=0;
    int x=0;//标记变更
    show_rate();
    printf("\n\n");
    printf("请输入需要所更改利率对应的定期年限：\n");
    scanf("%d",&cg);
    printf("请输入更改后定期利率:\n");
    if(cg==1)
    {
        scanf("%lf",&RATE.rate_oneY);
    }
    if(cg==2)
    {
        scanf("%lf",&RATE.rate_twoY);
    }
    if(cg==3)
    {
        scanf("%lf",&RATE.rate_threeY);
    }
    if(cg==4)
    {
        scanf("%lf",&RATE.rate_fiveY);
    }
    printf("\n");
    system("pause");
    save_rate();
    printf("\n");
    printf("操作成功！");
    Sleep(2000);
    x=1;
    change_remind(x);
    return;
}
