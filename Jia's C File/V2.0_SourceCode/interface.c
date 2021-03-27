
void PrintDataTitle()
{
    printf("姓名       用户名     账号       活期存款   定期存款   定期年限 \n");

}

void PrintUserData(Node *p)
{
    printf("%-10s %-10s %-10lld %-10.2lf %-10.2lf %d年\n",p->data.realname,p->data.username,p->data.account,p->data.normal_balance,p->data.regular_balance,p->data.regular_year);
}

void Show_rate()
{
    printf("\t\t*************************************************************\n");
    printf("\t\t当前定期利率如下：                                                 \n");
    printf("\t\t                                                                   \n");
    printf("\t\t              <1> 一年(利率为：%.4f)                 \n",RATE.rate_oneY);
    printf("\t\t              <2> 两年(利率为：%.4f)                   \n",RATE.rate_twoY);
    printf("\t\t              <3> 三年(利率为：%.4f)                 \n",RATE.rate_threeY);
    printf("\t\t              <4> 五年(利率为：%.4f)                  \n",RATE.rate_fiveY);
    printf("\t\t                                                                      \n");
    printf("\t\t*************************************************************\n");
    return;
}

void Loading()
{
    int z;
    system("color e0");
    printf("\t\t =====================================================\n");
    printf("\t\t||                                                   ||\n");
    printf("\t\t||                                                   ||\n");
    printf("\t\t||                                                   ||\n");
    printf("\t\t||                                                   ||\n");
    printf("\t\t||                                                   ||\n");
    printf("\t\t||                                                   ||\n");
    printf("\t\t||             欢迎使用银行存款管理系统!             ||\n");
    printf("\t\t||                                                   ||\n");
    printf("\t\t||                                                   ||\n");
    printf("\t\t||                                                   ||\n");
    printf("\t\t||                                                   ||\n");
    printf("\t\t||                                                   ||\n");
    printf("\t\t =====================================================\n");
    printf("\n\n\n\n\n\n");
    printf("\t\t正在载入系统，请稍后...\n");
    printf("\t\t");
    printf(".......................................................\r");
    printf("\t\t");
    for(z=16; z<71; z++)
    {
        Sleep(10);
        printf(">");
    }
}

void Change_remind(int x)
{
    if(x==1)
    {
        system("cls");
        printf("利率已发生变动，在此提示您,如有需要请前往银行更改存款方式\n\n");
        printf("\n当前利率信息如下：\n");
        printf("\t\t*************************************************************\n");
        printf("\t\t                                                           \n");
        printf("\t\t                  当前活期利率:%.4f                      \n",RATE.normal_rate);
        printf("\t\t                                                           \n");
        printf("\t\t                                                           \n");
        Show_rate();
        system("pause >nul");
    }
    return;
}


void Help()
{
    system("cls");
    printf("\t\t\t ----------------------------------------------------\n");
    printf("\t\t\t|                  银行存款管理系统                  |\n");
    printf("\t\t\t|                        v2.0                        |\n");
    printf("\t\t\t|   Tips:                                            |\n");
    printf("\t\t\t|   <1> 功能界面执行完毕后按任意键返回               |\n");
    printf("\t\t\t|   <2> 添加用户以用户名为 0 结束添加                |\n");
    printf("\t\t\t|   <3> 若有信息变动退出前请保存好信息               |\n");
    printf("\t\t\t|   <4> 定期年限范围为1-5年                          |\n");
    printf("\t\t\t|                                                    |\n");
    printf("\t\t\t|                                                    |\n");
    printf("\t\t\t|                                                    |\n");
    printf("\t\t\t|                                                    |\n");
    printf("\t\t\t ----------------------------------------------------\n");
    system("pause >nul");
    return;
}


void Menu()
{
    system("cls");
    printf("\t\t                欢迎使用银行存款管理系统\n\n");
    printf("\t\t★--------------------------菜单-----------------------★\n");
    printf("\t\t|                                                       |\n");
    printf("\t\t|                    <1>  进入用户操作                  |\n");
    printf("\t\t|                    <2>  进入管理员操作                |\n");
    printf("\t\t|                    <3>  用户帮助                      |\n");
    printf("\t\t|                    <4>  保存信息                      |\n");
    printf("\t\t|                    <5>  退出系统                      |\n");
    printf("\t\t|                                                       |\n");
    printf("\t\t★-----------------------------------------------------★\n");
}

void UserCreat(Head list)
{
    int choice;
    system("cls");
    printf("\t\t                  欢迎使用用户操作系统\n\n");
    printf("\t\t★-------------------------菜单-----------------------★\n");
    printf("\t\t|                                                      |\n");
    printf("\t\t|      <1> 用户登陆                                    |\n");
    printf("\t\t|                                                      |\n");
    printf("\t\t|      <2> 用户注册                                    |\n");
    printf("\t\t|                                                      |\n");
    printf("\t\t|      <3> 返回上一界面                                |\n");
    printf("\t\t★----------------------------------------------------★\n");
    scanf("%d",&choice);
    switch(choice)
    {
    case 1:
        UserLogin(list);
        break;
    case 2:
        AddUser(list);
        break;
    case 3:
        return;
        break;
    default:break;
    }
}
void UsersOper(Node *p,char u_name,char pswd,Head list)
{
    int choice;
    system("cls");
    printf("\t\t                  欢迎使用用户操作系统\n\n");
    printf("\t\t★-------------------------菜单-----------------------★\n");
    printf("\t\t|                                                      |\n");
    printf("\t\t|      <1> 活期存款                                    |\n");
    printf("\t\t|                                                      |\n");
    printf("\t\t|      <2> 定期存款                                    |\n");
    printf("\t\t|                                                      |\n");
    printf("\t\t|      <3> 修改定期存款年限                            |\n");
    printf("\t\t|                                                      |\n");
    printf("\t\t|      <4> 修改密码                                    |\n");
    printf("\t\t|                                                      |\n");
    printf("\t\t|      <5> 返回上一界面                                |\n");
    printf("\t\t|                                                      |\n");
    printf("\t\t★----------------------------------------------------★\n");
    scanf("%d",&choice);
    switch(choice)
    {
    case 1:
        Add_Normal(p,u_name,list);
        break;
    case 2:
        Add_Regular(p,u_name,list);
        break;
    case 3:
        ModifyYear(p,u_name,list);
        break;
    case 4:
        ModifyPswd(p,list);
        break;
    case 5:
        return;
        break;
    }
}

void Administrator(Head list)
{
    system("cls");
    int choice;
    char password[7];
    char adminpswd[]={"123456"};
    printf("请输入管理员登陆密码：\n");
    scanf("%s",password);
    if(strcmp(adminpswd,password)==0)
    {
        system("cls");
        printf("\t\t                 欢迎使用管理员操作系统\n\n");
        printf("\t\t★-------------------------菜单-----------------------★\n");
        printf("\t\t|                                                      |\n");
        printf("\t\t|      <1> 列出所有用户          <2> 删除用户信息      |\n");
        printf("\t\t|                                                      |\n");
        printf("\t\t|      <3> 查找用户信息          <4> 存款金额排序      |\n");
        printf("\t\t|                                                      |\n");
        printf("\t\t|      <5> 活期利率修改          <6> 定期利率修改      |\n");
        printf("\t\t|                                                      |\n");
        printf("\t\t|      <7> 返回上一界面                                |\n");
        printf("\t\t|                                                      |\n");
        printf("\t\t★----------------------------------------------------★\n");
        scanf("%d",&choice);
        switch(choice)
        {
        case 1:
            ListAllUser(list);
            break;
        case 2:
            DeleteUser(list);
            break;
        case 3:
            FindUser(list);
            break;
        case 4:
            SortNormal(list);
            break;
        case 5:
            Change_normal_rate();
            break;
        case 6:
            Change_regular_rate();
            break;
        case 7:
            return;
            break;
        }
    }
    else
    {
        printf("密码输入错误，即将返回上一界面！");
        Sleep(1000);
        return;
    }
}
