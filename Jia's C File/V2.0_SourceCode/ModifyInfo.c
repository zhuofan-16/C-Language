
void ModifyPswd(Node *p,Head list)
{
    char pswd[12];
    char u_name;
    printf("用户名：%s \n",p->data.username);
    printf("  姓名：%s \n",p->data.realname);
    printf("用户原密码为：%s\n",p->data.password);
    printf("用户新的登陆密码为:\n");
    scanf("%s",pswd);
    strcpy(p->data.password,pswd);
    p->data.rank=0;
    printf("\n修改成功!");
    system("pause >nul");
    savemark=1;
    UsersOper(p,u_name,pswd,list);
}

//
void Add_Normal(Node *p,char u_name,Head list)
{
    double money;
    char pswd[12];
    printf("用户名：%s \n",p->data.username);
    printf("  姓名：%s \n",p->data.realname);
    printf("活期存款：%.2lf\n",p->data.normal_balance);
    printf("请输入存款金额:\n");
    scanf("%lf",&money);
    p->data.normal_balance=p->data.normal_balance+money;
    p->data.rank=0;
    printf("\n存款成功！");
    savemark=1;
    system("pause >nul");
    UsersOper(p,u_name,pswd,list);
}

//
void ModifyYear(Node *p,char u_name,Head list)
{
    char pswd[12];
    printf("用户名：%s \n",p->data.username);
    printf("  姓名：%s \n",p->data.realname);
    printf("定期存款：%.2lf\n",p->data.regular_balance);
    printf("定期年限：%d\n",p->data.regular_year);
    printf("更改后的定期存款年限为:");
    scanf("%d",&p->data.regular_year);
    while(p->data.regular_year)
    {
        if(p->data.regular_year>=0&&p->data.regular_year<=5)
        {
            break;
        }
        else
        {
            printf("\n定期年限为1-5年,请重新输入\n");
            system("pause >nul");
            printf("定期年限为:");
            scanf("%d",&p->data.regular_year);
        }
    }
    p->data.rank=0;
    printf("修改成功");
    system("pause >nul");
    savemark=1;
    UsersOper(p,u_name,pswd,list);
}

//
void Add_Regular(Node *p,char u_name,Head list)
{
    char pswd[12];
    printf("用户名：%s \n",p->data.username);
    printf("  姓名：%s \n",p->data.realname);
    printf("定期存款：%.2lf\n",p->data.regular_balance);
    printf("定期年限：%d\n",p->data.regular_year);
    printf("请输入存款金额：");
    scanf("%lf",&p->data.regular_balance);
    printf("请输入定期年限：");
    scanf("%d",&p->data.regular_year);
    while(p->data.regular_year)
    {
        if(p->data.regular_year>=0&&p->data.regular_year<=5)
        {
            break;
        }
        else
        {
            printf("\n定期年限为1-5年,请重新输入\n");
            system("pause >nul");
            printf("定期年限为             :");
            scanf("%d",&p->data.regular_year);
        }
    }
    p->data.rank=0;
    printf("\n存款成功！");
    system("pause >nul");
    savemark=1;
    UsersOper(p,u_name,pswd,list);
}
