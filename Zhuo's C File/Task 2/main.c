#include <stdio.h>
#include <stdlib.h>
int N;         //这是我第二个Project
int i;
struct User   //定义用户群信息
{
   int StudentID;
   char Full_name[50];
   int Class;
   int Pin;
   int Pin_confirm;
   char ic[50];
}user[500]={};



int main()  //Main
{
    int a;

        system("color f0"); //程序颜色为白，字黑
 FILE * value;              //开始读取人数
        if ((value=fopen("valuei.dat","rb"))==NULL)
        {
    int i=0;
    int N=0;
        }
        else
            fread(&N,sizeof(int),1,value);
            printf("运动场馆预定管理系统 已注册人数:%d",N);
            Sleep(3000);
            system("cls");

            start_up(); //到加载页面
            start_screen(); //到开始页面
}


void start_up()  //开始页面
{
    int z;
    FILE * userinfo;
userinfo=fopen("encryptdata.dat","rb");
for (i=0;i<N;i++)
{
    fread (&user[i],sizeof(struct User),1,userinfo);
}

fclose(userinfo);
    printf("\t=======================================================\n");
    printf("\t||                                                   ||\n");
    printf("\t||                                                   ||\n");
    printf("\t||                                                   ||\n");
    printf("\t||                                                   ||\n");
    printf("\t||                                                   ||\n");
    printf("\t||                                                   ||\n");
    printf("\t||         欢迎使用运动场馆预定管理系统!             ||\n");
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

void start_screen()
{
    int choice;
    system("cls");
    printf("\t=======================================================\n");
    printf("\t||             欢迎使用运动场馆预定管理系统!         ||\n");
    printf("\t||                                                   ||\n");
    printf("\t||                 <1> 登录预定系统                  ||\n");
    printf("\t||                 <2> 注册用户                      ||\n");
    printf("\t||                 <3> 查看场地空闲情况              ||\n");
    printf("\t||                 <4> 查看租借价格                  ||\n");
    printf("\t||                 <5> 忘记密码                      ||\n");
    printf("\t||                 <6> 帮助与关于                    ||\n");
    printf("\t||                 <7> 退出                          ||\n");
    printf("\t||                                                   ||\n");
    printf("\t||                                                   ||\n");
    printf("\t||                                                   ||\n");
    printf("\t||                                                   ||\n");
    printf("\t||                                                   ||\n");
    printf("\t=======================================================\n");
    printf("\n\n");
    printf("\n:");
    scanf("%d",&choice);

    switch(choice)
    {
    case 1:
        login();
        break;
    case 2:
        registration();
        break;
    case 3:
        venue_avaliablity();
        break;
    case 4:
        venue_pricing();
        break;
    case 5:
        forgot_password();
        break;
    case 6:
        about();
        break;
    case 7:
        exitapp();
        break;
    default:
        printf("输入错误，请重试！");
        start_screen();
        break;

    }

}
void login()
{

}

void registration()
{

}
void venue_avaliablity()
{

}
void venue_pricing()
{

}

void forgot_password()
{

}

void about()
{

}














void exitapp()
{
        FILE * rd;
    rd=fopen("valuei.dat","wb");
    fwrite (&N,sizeof(int),1,rd);
    fclose(rd);
     FILE * registerinfo;
    registerinfo=fopen ("encryptdata.dat","wb");
    for (i=0;i<N;i++)
        fwrite (&user[i],sizeof (struct User),1,registerinfo);
        fclose( registerinfo);
        exit(0);

}
