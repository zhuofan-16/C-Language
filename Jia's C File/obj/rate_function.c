//�������ʸ���
void change_normal_rate()
{
    int x=0;//��Ǳ��
    system("cls");
    printf("*********************************************************\n");
    printf("*                                                       *\n");
    printf("*                                                       *\n");
    printf("*              ��ǰ��������:%.4f                      *\n",RATE.normal_rate);
    printf("*                                                       *\n");
    printf("*                                                       *\n");
    printf("*********************************************************\n");
    printf("\n\n\n");
    printf("��������ĺ��������:\n");
    scanf("%lf",&RATE.normal_rate);
    printf("\n");
    system("pause");
    save_rate();
    printf("\n");
    printf("�����ɹ���");
    x=1;
    change_remind(x);
    Sleep(2000);
    return;
}

//�������ʸ���
void change_regular_rate()
{
    system("cls");
    int cg=0;
    int x=0;//��Ǳ��
    show_rate();
    printf("\n\n");
    printf("��������Ҫ���������ʶ�Ӧ�Ķ������ޣ�\n");
    scanf("%d",&cg);
    printf("��������ĺ�������:\n");
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
    printf("�����ɹ���");
    Sleep(2000);
    x=1;
    change_remind(x);
    return;
}
