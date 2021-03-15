#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <time.h>
int i=0;
int N;
        int z;
struct bankuser
{
    char userid[50];
    char real_name[50];
    char sex[5];
    int birthday;
    int pin_number;
    int pin_number_confirm;
    char salutory;
    int saving;

}user[50]={};

void current_time()
{
  time_t rawtime;
  struct tm * timeinfo;

  time ( &rawtime );
  timeinfo = localtime ( &rawtime );
    printf ( "当前时间为: %s", asctime (timeinfo) );
}
void start_up()
{

        system("cls");
    printf("*****************************************************\n");
    printf("星辰银行系统\n");
    current_time();
    printf("\n因为有悔，所以披星戴月  因为有梦，所以奋不顾身");
    printf("\n正在载入系统，请稍后...\n");
        printf("*****************************************************\n");
    printf(".......................................................\r");
    for(z=0; z<55; z++)
    {
        Sleep(30);
        printf(">");
    }
    system("cls");
}


void deposit_ui()
{

}
void withdraw_ui()
{

}
void  localtransfer_ui()
{

}
void  overseatransfer_ui()
{

}
void oversea_spendui()
{

}


void main_ui()
{
    int mchoice;
    system("cls");
    printf("*****************************************************\n");
    printf("星辰银行系统\n");
    printf("欢迎光临,%s   \n",user[i].real_name);
    current_time();
    printf("您目前余额为￥ %d \n",user[i].saving);
    printf("今天你想进行什么交易:\n");
    printf("1.存款");
    printf("   2.取款");
    printf("   3.国内转账");
    printf("\n4.国外转账");
    printf("   5.开启海外提款功能");
     printf("   6.退出登录\n");

    printf("*****************************************************\n");
    printf("你的选项:");
    scanf("%d",&mchoice);
    switch (mchoice)
    {
        case 1 :
            system("cls");
            deposit_ui();
            break;
        case 2 :
            system("cls");
           withdraw_ui();
           break;
        case 3 :
            system("cls");
            localtransfer_ui();
            break;
        case 4 :
            system("cls");
             overseatransfer_ui();
             break;
        case 5 :
            system("cls");
            oversea_spendui();
            break;
        case 6 :
            system("cls");
             start_screen();
             break;
        default :
            system("cls");
            printf("错误选项，请重试");
            Sleep(3000);
            main_ui();

    }
}
    void login_ui()
    {
        int i=0;
char user2[50];
int pin1;
FILE * userinfo;
userinfo=fopen("encryptdata.dat","rb");
for (i=0;i<N;i++)
{
    fread (&user[i],sizeof(struct bankuser),1,userinfo);
}

    printf("*****************************************************\n");
    printf("您好，欢迎来到 星辰银行登录界面\n");
    current_time();
    printf("\n因为有悔，所以披星戴月  因为有梦，所以奋不顾身\n");
        printf("*****************************************************\n");
        printf("请输入你的用户名:");
        scanf("%s",user2);
        for (i=0;(strcmp(user2,user[i].userid)!=0);)
        {
            i++;
            if (i==50)
                break;
        }
            if (i==50)
            {
                system("cls");
                printf("用户名错误，请重试");
            Sleep(3000);
            system("cls");
                start_screen();
            }
            else
                {

        printf("欢迎光临 %s,\n请输入您的密码：",user[i].real_name);
        scanf("%d",&pin1);
        if (pin1!=user[i].pin_number)
            {
                printf("密码错误，请重新登录");
                Sleep(3000);
                system("cls");
                login_ui();

            }
             if (pin1==user[i].pin_number)
{

                printf("密码正确,登录成功");
                Sleep(3000);
                system("cls");
                main_ui();
}
            }

    }


void register_screen()
{
    i=N;
    printf("您好，欢迎来到 星辰银行注册页面\n");
    printf("请输入你的名字:");
    scanf("%s",user[i].real_name);
    system("cls");
    printf("你的性别是M/F:");
    scanf("%s",user[i].sex);
    system("cls");
    printf("谢谢，现在请输入一个用户名:");
     scanf("%s",user[i].userid);
     system("cls");
     printf("现在请输入您的生日（格式为DDMMYYYY):");
     scanf("%d",&user[i].birthday);
     system("cls");
     printf("现在，请创建你的6位数PIN:");
     scanf("%d",&user[i].pin_number);
     system("cls");
     printf("请再输入一次:");
     scanf("%d",&user[i].pin_number_confirm);
     system("cls");
     if (user[i].pin_number==user[i].pin_number_confirm)
     {
         printf(".......................................................\r");
    for(z=0; z<55; z++)
    {
        Sleep(30);
        printf(">");
    }

    system("cls");
    printf("创造成功，欢迎光临\n");
    printf("恭喜获得开户奖励￥500");
    user[i].saving=500;
    Sleep(3000);
    system("cls");
    N=N+1;
    FILE * rd;
    rd=fopen("valuei.dat","wb");
    fwrite (&N,sizeof(int),1,rd);
    fclose(rd);

    FILE * registerinfo;
    registerinfo=fopen ("encryptdata.dat","wb");
    for (i=0;i<N;i++)
        fwrite (&user[i],sizeof (struct bankuser),1,registerinfo);


     start_screen();

     }     else
     {
         system("cls");

         printf("两次输入不相同，请重新设置\n");
        register_screen();

     }


}
void start_screen()
{
    int option;
        printf("*****************************************************\n");
    printf("星辰银行系统\n");
    current_time();
    printf("\n因为有悔，所以披星戴月  因为有梦，所以奋不顾身\n");
     printf("*****************************************************\n\n");
    printf("\n1.您是我们的现有客户，登录账号");
    printf("             2.您是新客户，注册账号\n");
    printf("3.进入内部后台");
    printf("                             4.退出银行应用\n");
    printf("你的选项:");
    scanf("%d",&option);
    if (option==1)
    {
        system("cls");
        login_ui();
    }

     if (option==2)
    {
        system("cls");
        register_screen();

    }
         if (option==4)
    {
        exit(0);
    }
}


int main()
{
    int a;

        system("color f0");
 FILE * value;
        if ((value=fopen("valuei.dat","rb"))==NULL)
        {
    int i=0;
    int N=0;
        }
        else
            fread(&N,sizeof(int),1,value);
            printf("%d",N);
            Sleep(3000);
     start_up();
    start_screen();
    return 0;
}
