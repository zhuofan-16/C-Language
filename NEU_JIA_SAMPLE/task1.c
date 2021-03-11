#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <string.h>

int j=1;

/*结构体定义用户信息*/
struct User
{
    long long int account;//账号
    char username[20];//用户名
    char password[20];//密码
    char password_1[20];/*用于对比第一次输入的密码*/
    double huoqicunkuan;//活期存款
    double dingqicunkuan;//定期存款
    double daikuan;//贷款
};

//用户密码验证
/*
struct UserYanZheng
{
    char usernameYZ[20];
    char passwordYZ[20];
};
*/

struct User info[100];
//struct UserYanZheng YZ[100];

int main()
{
    system("title 银行存款管理系统");
    Loading();
    Home_interface();
    return 0;
}


//载入界面
void Loading()
{
    int z;
    system("color e0");
    printf("\t=======================================================\n");
    printf("\t||                                                   ||\n");
    printf("\t||                                                   ||\n");
    printf("\t||                                                   ||\n");
    printf("\t||                                                   ||\n");
    printf("\t||                                                   ||\n");
    printf("\t||                                                   ||\n");
    printf("\t||             欢迎使用银行存款管理系统!             ||\n");
    printf("\t||                                                   ||\n");
    printf("\t||                                                   ||\n");
    printf("\t||                                                   ||\n");
    printf("\t||                                                   ||\n");
    printf("\t||                                                   ||\n");
    printf("\t||                                                   ||\n");
    printf("\t=======================================================\n");
    printf("\n\n\n\n\n\n");
    printf("正在载入系统，请稍后...\n");
    printf(".......................................................\r");
    for(z=0; z<55; z++)
    {
        Sleep(30);
        printf(">");
    }
}

//主界面
void Home_interface()
{
    system("cls");
    system("color 3f");
    int choice;
    printf("\t\t*******************************************************************\n");
    printf("\t\t*                                                                 *\n");
    printf("\t\t*----------卍 欢迎使用银行存款管理系统，请选择对应操作 卍---------*\n");
    printf("\t\t*                                                                 *\n");
    printf("\t\t*                                                                 *\n");
    printf("\t\t*     <1> 用户登录   (Login)                                      *\n");
    printf("\t\t*     <2> 用户注册   (Register a account)                         *\n");
    printf("\t\t*     <3> 管理员登录 (Administrator login)                        *\n");
    printf("\t\t*                                                                 *\n");
    printf("\t\t*                                                                 *\n");
    printf("\t\t*-------------------以诚信为原则，以客户为中心--------------------*\n");
    printf("\t\t*                                                                 *\n");
    printf("\t\t*******************************************************************\n");
    printf("\n");
    printf("请输入指令：\n");
    scanf("%d",&choice);
    while (choice)
    {
        switch(choice)
        {
        case 1:
            LOGIN();
            break;
        case 2:
            CREATE();
            break;
        case 3:
            adminface();
            break;
        }
    }
}


//用户登录界面
void LOGIN()
{
    system("cls");
    printf("===========================================================================\n");
    printf("--------------------------------用户登录界面-------------------------------");
    printf(" \n");
    printf("请输入:\n");
    printf("用户名(Username):\n");
    scanf("%s",&info[j].username);
    printf("密码(Password):\n");
    scanf("%s",&info[j].password);
    userface();
}

//用户菜单
void userface()
{
    int xuanze=0;
    system("cls");
    printf("\t\t ================================================================ \n");
    printf("\t\t||                                                              ||\n");
    printf("\t\t||         <1> 活期存款         <4> 转账        <6>回到主界面   ||\n");
    printf("\t\t||         <2> 定期存款         <5> 贷款        <7>退出程序     ||\n");
    printf("\t\t||         <3> 账户信息查询                                     ||\n");
    printf("\t\t||                                                              ||\n");
    printf("\t\t ================================================================ \n");
    printf("请输入您的指令:  ");
    scanf("%d",&xuanze);
    printf("\n");
    while(xuanze)
    {
        switch(xuanze)
        {
        case 1:
            huoqi();
            break;
        case 2:
            dingqi();
            break;
        case 3:
            chaxun();
            break;
        case 4:
            zhuanzhang();
            break;
        case 5:
            daikuan();
            break;
        case 6:
            Home_interface();
            break;
        case 7:
            exit(0);
            break;
        }
        break;
    }
}

//用户注册页面
void CREATE()
{
restart:
    system("cls");
    printf("\n");
    printf("===========================================================================\n");
    printf("--------------------------------用户注册界面-------------------------------");
    printf("\n");
    printf("请输入用户名：\n");
    scanf("%s",&info[j].username);
    zhanghuyanzheng();
    printf("请输入密码：\n");
    scanf("%s",&info[j].password);
    printf("请再次输入密码：\n");
    scanf("%s",&info[j].password_1);
    info[j].account=621190001+rand();
    if(strcmp(info[j].password,info[j].password_1)!=0)
    {
        system("cls");
        printf("请输保持两次输入的密码一致！请重新输入！");
        Sleep(3000);
        goto restart;
    }
    else
    {
        printf("恭喜您，注册成功！");
        printf("您的开户卡号为\t %lld \t 请牢记\n按任意键跳转至主界面...",info[j].account);
        printf("%d",j);
        system("pause >nul");
        Home_interface();
    }
    j++;
}

//管理员界面
void adminface()
{
    char zhanghao[10];
    char mima[10];
    int zhiling;
    /*定义管理员账号密码*/
    char adminname_0[]="admin0";
    char adminpswd_0[]="admin0";
    char adminname_1[]="admin1";
    char adminpswd_1[]="admin1";
    system("cls");
    printf("===========================================================================\n");
    printf("--------------------------------管理员登录界面-----------------------------\n");
    printf("\n\n\n\n\n");
    printf("请输入管理员账号：\n");
    scanf("%s",&zhanghao);
    printf("\n");
    printf("请输入管理员密码：\n");
    scanf("%s",&mima);
    printf("\n");
    if((strcmp(zhanghao,adminname_0)==0)&&(strcmp(mima,adminpswd_0)==0)||(strcmp(zhanghao,adminname_1)==0)&&(strcmp(mima,adminpswd_1)==0))
    {
        printf("验证成功！\n正在跳转至后台...");
        Sleep(2000);
        system("cls");
        printf("\t\t ================================================================ \n");
        printf("\t\t||-------------------------后台管理界面-------------------------||\n");
        printf("\t\t||                                                              ||\n");
        printf("\t\t||      <1> 活期利息更改    <4> 冻结用户账户   <6> 回到主界面   ||\n");
        printf("\t\t||      <2> 定期利息更改    <5> 解冻用户账户   <7> 退出程序     ||\n");
        printf("\t\t||      <3> 用户信息查询                                        ||\n");
        printf("\t\t||                                                              ||\n");
        printf("\t\t||--------------------------------------------------------------||\n");
        printf("\t\t ================================================================ \n");
        printf("请输入您的指令: ");
        scanf("%d",&zhiling);
        while(zhiling)
        {
            switch(zhiling)
            {
            case 1:
                changehuoqi();
                break;
            case 2:
                changedingqi();
                break;
            case 3:
                chaxunuser();
                break;
            case 4:
                dongjie();
                break;
            case 5:
                jiedong();
                break;
            case 6:
                Home_interface();
                break;
            case 7:
                exit(0);
                break;
            }
            break;
        }
    }
    else
    {
        printf("\n\n\n\t警告：验证失败！\n\n\n\t账号不存在或密码错误，请重新输入！\n\n\n");
        Sleep(3000);
        adminface();
    }
}

/*--------------用户选项---------------*/
void huoqi()    //活期存款
{
    int HQCK;//存款
    system("cls");
    printf("\t\t==================================================\n");
    printf("\t\t-----------------------活期存款-------------------\n");
    printf("\n\n\n");
    printf("请输入存款金额：\n");
    scanf("%d",&HQCK);
    printf("\n");
    printf("\n\n您所要存入的金额为 %d 元,是否确认？\n",HQCK);
    system("pause >nul");
    info[j].huoqicunkuan=info[j].huoqicunkuan + HQCK;
    printf("\n\n操作成功！");
    Sleep(2000);
    userface();
}
void dingqi()   //定期存款
{
    int DQCK;//存款
    int NianXian;
    int choose;
    system("cls");
    printf("\t\t    ==================================================\n");
    printf("\t\t    -----------------------定期存款-------------------\n");
    printf("\n\n\n");
    printf("请输入存款金额：\n");
    scanf("%d",&DQCK);
    printf("\n");
    printf("请选择存款年限：\n");
    printf("\t\t********************************************************\n");
    printf("\t\t*                                                      *\n");
    printf("\t\t*             <1> 一年         <4> 四年                *\n");
    printf("\t\t*             <2> 两年         <5> 五年                *\n");
    printf("\t\t*             <3> 三年         <6> 十年                *\n");
    printf("\t\t*                                                      *\n");
    printf("\t\t********************************************************\n");
    scanf("%d",&choose);
    while(choose)
    {
        switch(choose)
        {
        case 1:
            NianXian=1;
            printf("未完成的功能！%d",NianXian);
            break;
        case 2:
            NianXian=2;
            printf("未完成的功能！%d",NianXian);
            break;
        case 3:
            NianXian=3;
            printf("未完成的功能！%d",NianXian);
            break;
        case 4:
            NianXian=4;
            printf("未完成的功能！%d",NianXian);
            break;
        case 5:
            NianXian=5;
            printf("未完成的功能！%d",NianXian);
            break;
        case 6:
            NianXian=10;
            printf("未完成的功能！%d",NianXian);
            break;
        }
        break;
    }
    printf("\n\n您所要存入定期的金额为 %d 元,存款年限为 %d 年 是否确认？\n",DQCK,NianXian);
    system("pause >nul");
    info[j].dingqicunkuan=info[j].dingqicunkuan + DQCK;
    printf("\n\n操作成功！");
    Sleep(2000);
    userface();
}

void chaxun()   //查询
{
    printf("\t\t==================================================\n");
    printf("\t\t-------------------账户信息一览表-----------------\n");
    printf("\t\t|                                                 |\n");
    printf("\t\t|    <1> 活期账余额：                             |\n");
    printf("\t\t|                                                 |\n");
    printf("\t\t|    <2> 定期情况：                               |\n");
    printf("\t\t|                                                 |\n");
    printf("\t\t|    <3> 贷款情况：                               |\n");
    printf("\t\t|                                                 |\n");
    printf("\t\t|    <4> 账户状态： 正常                          |\n");
    printf("\t\t|                                                 |\n");
    printf("\t\t==================================================\n");
    system("pause >nul");
    Sleep(2000);
    userface();
}
void zhuanzhang()   //转账
{
    printf("\t\t==================================================\n");
    printf("\t\t||----------------------转账--------------------||\n");
    printf("\t\t==================================================\n");
    printf("\n\n\n");
    printf("请输入收款人账号：\n");
    scanf("%d");
    printf("请输入转账金额：\n");
    scanf("%f");
    printf("请确认：\n");
    printf("收款人账号：%d\n");
    printf("转账金额：%f\n");
    system("pause >nul");
    printf("\n\n操作成功！");
    Sleep(2000);
    userface();
}
void daikuan()   //贷款
{
    int jine=10000*rand();
    int dai=0;
    printf("\t\t==================================================\n");
    printf("\t\t||----------------------贷款--------------------||\n");
    printf("\t\t==================================================\n");
    printf("\n\n\n");
    printf("您当前的贷款额度为：%d\n",jine);
    printf("请输入贷款金额：\n");
    scanf("%d",&dai);
    printf("申请贷款金额为 %d 元，请确认...",dai);
    system("pause >nul");
    printf("\n\n操作成功！");
    Sleep(2000);
    userface();
}
/*------------用户选项截止--------------*/

/*-------------管理员选项----------------*/
void changehuoqi()
{
    printf("*********************************************************\n");
    printf("*                                                       *\n");
    printf("*    --------------当前活期利率一览表---------------    *\n");
    printf("*                                                       *\n");
    printf("*                                                       *\n");
    printf("*                                                       *\n");
    printf("*********************************************************\n");
    printf("\n\n\n");
    printf("请输入更改后活期利率:\n");
    scanf("%f");
    system("pause >nul");
    printf("操作成功！");
    Sleep(2000);
    Home_interface();
}
void changedingqi()
{
    printf("*********************************************************\n");
    printf("*                                                       *\n");
    printf("*    --------------当前定期利率一览表---------------    *\n");
    printf("*                                                       *\n");
    printf("*                                                       *\n");
    printf("*                                                       *\n");
    printf("*********************************************************\n");
    printf("\n\n\n");
    printf("请输入更改后定期利率:\n");
    scanf("%f");
    system("pause >nul");
    printf("操作成功！");
    Sleep(2000);
    Home_interface();
}
void chaxunuser()
{
    printf("*********************************************************\n");
    printf("*                                                       *\n");
    printf("*                                                       *\n");
    printf("*                                                       *\n");
    printf("*                                                       *\n");
    printf("*                                                       *\n");
    printf("*                                                       *\n");
    printf("*                                                       *\n");
    printf("*                                                       *\n");
    printf("*                                                       *\n");
    printf("*                                                       *\n");
    printf("*                                                       *\n");
    printf("*                                                       *\n");
    printf("*                                                       *\n");
    printf("*                                                       *\n");
    printf("*                                                       *\n");
    printf("*********************************************************\n");
    printf("\n\n\n");
    system("pause >nul");
    Sleep(2000);
    adminface();
}
void dongjie()
{
    printf("未完成的功能\n");
    exit(0);
}
void jiedong()
{
    printf("未完成的功能\n");
    exit(0);
}
/*-------------管理员选项截止------------*/


void zhanghuyanzheng()
{
    while(j>1)
    {
        for(int i=1; i<=j; i++)
        {
            if(strcmp(info[j].username,info[i].username )==0 )
            {
                printf("此用户名已被使用，按任意键重新输入!");
                system("pause >nul");
                system("cls");
                CREATE();
            }
        }
    }

}


