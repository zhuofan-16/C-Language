
void ModifyPswd(Node *p,Head list)
{
    char pswd[12];
    char u_name;
    printf("�û�����%s \n",p->data.username);
    printf("  ������%s \n",p->data.realname);
    printf("�û�ԭ����Ϊ��%s\n",p->data.password);
    printf("�û��µĵ�½����Ϊ:\n");
    scanf("%s",pswd);
    strcpy(p->data.password,pswd);
    p->data.rank=0;
    printf("\n�޸ĳɹ�!");
    system("pause >nul");
    savemark=1;
    UsersOper(p,u_name,pswd,list);
}

//
void Add_Normal(Node *p,char u_name,Head list)
{
    double money;
    char pswd[12];
    printf("�û�����%s \n",p->data.username);
    printf("  ������%s \n",p->data.realname);
    printf("���ڴ�%.2lf\n",p->data.normal_balance);
    printf("����������:\n");
    scanf("%lf",&money);
    p->data.normal_balance=p->data.normal_balance+money;
    p->data.rank=0;
    printf("\n���ɹ���");
    savemark=1;
    system("pause >nul");
    UsersOper(p,u_name,pswd,list);
}

//
void ModifyYear(Node *p,char u_name,Head list)
{
    char pswd[12];
    printf("�û�����%s \n",p->data.username);
    printf("  ������%s \n",p->data.realname);
    printf("���ڴ�%.2lf\n",p->data.regular_balance);
    printf("�������ޣ�%d\n",p->data.regular_year);
    printf("���ĺ�Ķ��ڴ������Ϊ:");
    scanf("%d",&p->data.regular_year);
    while(p->data.regular_year)
    {
        if(p->data.regular_year>=0&&p->data.regular_year<=5)
        {
            break;
        }
        else
        {
            printf("\n��������Ϊ1-5��,����������\n");
            system("pause >nul");
            printf("��������Ϊ:");
            scanf("%d",&p->data.regular_year);
        }
    }
    p->data.rank=0;
    printf("�޸ĳɹ�");
    system("pause >nul");
    savemark=1;
    UsersOper(p,u_name,pswd,list);
}

//
void Add_Regular(Node *p,char u_name,Head list)
{
    char pswd[12];
    printf("�û�����%s \n",p->data.username);
    printf("  ������%s \n",p->data.realname);
    printf("���ڴ�%.2lf\n",p->data.regular_balance);
    printf("�������ޣ�%d\n",p->data.regular_year);
    printf("���������");
    scanf("%lf",&p->data.regular_balance);
    printf("�����붨�����ޣ�");
    scanf("%d",&p->data.regular_year);
    while(p->data.regular_year)
    {
        if(p->data.regular_year>=0&&p->data.regular_year<=5)
        {
            break;
        }
        else
        {
            printf("\n��������Ϊ1-5��,����������\n");
            system("pause >nul");
            printf("��������Ϊ             :");
            scanf("%d",&p->data.regular_year);
        }
    }
    p->data.rank=0;
    printf("\n���ɹ���");
    system("pause >nul");
    savemark=1;
    UsersOper(p,u_name,pswd,list);
}
