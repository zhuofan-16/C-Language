//�������ʸ���
void Change_normal_rate()
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
    Save_rate();
    printf("\n");
    printf("�����ɹ���");
    x=1;
    Change_remind(x);
    Sleep(2000);
    return;
}

//�������ʸ���
void Change_regular_rate()
{
    system("cls");
    int cg=0;
    int x=0;//��Ǳ��
    Show_rate();
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
    Save_rate();
    printf("\n");
    printf("�����ɹ���");
    Sleep(2000);
    x=1;
    Change_remind(x);
    return;
}

void GetMonth()//
{
    time_t timep;
    struct tm *p;
    time (&timep);
    p=gmtime(&timep);
    month=1+p->tm_mon;
}

void Rate_Change_With_Month()//�������·ݱ仯����
{
        RATE.normal_rate=0.0020+(double)month*0.0001;
        RATE.rate_oneY=0.0170+(double)month*0.0001;
        RATE.rate_twoY=0.0221+(double)month*0.0001;
        RATE.rate_threeY=0.0270+(double)month*0.0001;
        RATE.rate_fiveY=0.0271+(double)month*0.0001;
}


