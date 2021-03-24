
void Menu()
{
    system("cls");
    printf("\t\t                欢迎使用银行存款管理系统\n\n");
    printf("\t\t★--------------------------菜单-----------------------★\n");
    printf("\t\t|                                                       |\n");
    printf("\t\t|      <1> 录入用户信息       <7>  列出所有用户         |\n");
    printf("\t\t|      <2> 删除用户信息       <8>  活期利率修改         |\n");
    printf("\t\t|      <3> 查找用户信息       <9>  定期利率修改         |\n");
    printf("\t\t|      <4> 修改用户信息       <10> 用户帮助             |\n");
    printf("\t\t|      <5> 插入用户信息       <11> 保存信息             |\n");
    printf("\t\t|      <6> 存款金额排序       <12> 退出系统             |\n");
    printf("\t\t|                                                       |\n");
    printf("\t\t★-----------------------------------------------------★\n");
}

void PrintTitle()
{
    printf("姓名       用户名     账号       活期存款   定期存款   定期年限 \n");

}

void PrintData(Node *p)
{
    printf("%-10s %-10s %-10lld %-10.2lf %-10.2lf %d年\n",p->data.realname,p->data.username,p->data.account,p->data.normal_balance,p->data.regular_balance,p->data.regular_year);
}

void show_rate()
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
}

void Loading()
{
    int z;
    system("color e0");
    printf("\t\t=======================================================\n");
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
    printf("\t\t=======================================================\n");
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

void change_remind(int b)
{
    if(b==1)
    {
        system("cls");
        printf("利率已发生变动，在此提示您,如有需要请前往银行更改存款方式\n\n");
        printf("\n当前利率信息如下：\n");
        printf("\t\t*************************************************************\n");
        printf("\t\t                                                           \n");
        printf("\t\t                  当前活期利率:%.4f                      \n",RATE.normal_rate);
        printf("\t\t                                                           \n");
        printf("\t\t                                                           \n");
        show_rate();
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
    printf("\t\t\t|                                                    |\n");
    printf("\t\t\t|                                                    |\n");
    printf("\t\t\t|                                                    |\n");
    printf("\t\t\t|                                                    |\n");
    printf("\t\t\t|                                                    |\n");
    printf("\t\t\t|                                                    |\n");
    printf("\t\t\t|                                                    |\n");
    printf("\t\t\t|                                                    |\n");
    printf("\t\t\t|                                                    |\n");
    printf("\t\t\t ----------------------------------------------------\n");
    system("pause >nul");
    return;
}
