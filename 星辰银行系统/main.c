#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <time.h>
    int i=0;
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







void main_ui()
{
    int main_choice;
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
    printf("   5.开启海外提款功能\n");

    printf("*****************************************************\n");
    printf("你的选项:");
    scanf("%d",&main_choice);


}
    void login_ui()
    {
        int i=0;
        int n=5;
char user2[50];
int pin1;
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
        if (strcmp(pin1,user[i].pin_number)!=0)
            {
                printf("密码错误，请重新登录");
                Sleep(3000);
                login_ui();

            }else
                {


                printf("密码正确,登录成功");
                Sleep(3000);

            main_ui();
            }

    }
    }


void register_screen()
{
    i=i+1;
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
     if (strcmp(user[i].pin_number,user[i].pin_number_confirm)==0)
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
     login_ui();

     }     else
     {
         system("cls");

         printf("两次输入不相同，请重新设置\n");
         printf("现在，请创建你的6位数PIN");
     scanf("%d",&user[i].pin_number);
     system("cls");
     printf("请再输入一次");
     scanf("%d",&user[i].pin_number_confirm);


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
        system("color f0");
     start_up();
    start_screen();
    return 0;
}
