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
   char tele[5000];
   int balance;
   char book[500];
   int b;
}User[500]={};

struct BadmintonCourtA
{
     char slot[50];


}Badminton[500];

struct TableTennisCourtB
{
char slot[50];

}Tabletennis[50];
struct BasketballCourtC
{
char slot[50];

}Basket[500];

struct Cost
{
    float slot1;
    float slot2;
    float slot3;
    float slot4;
    float slot5;
    float slot6;
    float slot7;
    float slot8;
    float slot9;
    float slot10;
    float slot11;
    float slot12;
}Cost;
struct timeslot
{
    char timeslotlk[5000]
}timesl[50];

int main()  //Main
{
    char x1[500]={"早上10.00-早上11.00"};
    char x2[500]={"早上11.00-中午12.00"};
    char x3[500]={"中午12.00-下午13.00"};
    char x4[500]={"下午13.00-下午14.00"};
    char x5[500]={"下午14.00-下午15.00"};
    char x6[500]={"下午15.00-下午16.00"};
    char x7[500]={"下午16.00-下午17.00"};
    char x8[500]={"下午17.00-傍晚18.00"};
    char x9[500]={"傍晚18.00-晚上19.00"};
    char x10[500]={"晚上19.00-晚上20.00"};
    char x11[500]={"晚上20.00-晚上21.00"};
    char x12[500]={"晚上21.00-晚上22.00"};
    strcpy(timesl[1].timeslotlk,x1);
    strcpy(timesl[2].timeslotlk,x2);
    strcpy(timesl[3].timeslotlk,x3);
    strcpy(timesl[4].timeslotlk,x4);
    strcpy(timesl[5].timeslotlk,x5);
    strcpy(timesl[6].timeslotlk,x6);
    strcpy(timesl[7].timeslotlk,x7);
    strcpy(timesl[8].timeslotlk,x8);
    strcpy(timesl[9].timeslotlk,x9);
    strcpy(timesl[10].timeslotlk,x10);
    strcpy(timesl[11].timeslotlk,x11);
    strcpy(timesl[12].timeslotlk,x12);





        Cost.slot1=36.00;
    Cost.slot2=38.00;
    Cost.slot3=40.00;
    Cost.slot4=18.00;
    Cost.slot5=21.00;
    Cost.slot6=20.00;
    Cost.slot7=13.00;
    Cost.slot8=16.00;
    Cost.slot9=29.00;
    Cost.slot10=31.00;
    Cost.slot11=34.00;
    Cost.slot12=35.00;


    int a;

        system("color f0"); //程序颜色为白，字黑
 FILE * value;              //开始读取人数
        if ((value=fopen("valuei.dat","rb"))==NULL)
        {
    int i=1;
    int N=1;
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
    fread (&User[i],sizeof(struct User),1,userinfo);
}

fclose(userinfo);

    FILE * basket;
if ((basket=fopen("basketballstatus.dat","rb"))==NULL)
{
    char temp[50]={"空闲"};
    for (i=0;i<13;i++)
{
    strcpy(Basket[i].slot,temp);
}


}
else
    for (i=0;i<13;i++)
    fread (&Basket[i],sizeof(struct BasketballCourtC),1,basket);

fclose(basket);

 FILE * bad;
if ((bad=fopen("badmintonstatus.dat","rb"))==NULL)
{
    char temp[50]={"空闲"};
    for (i=0;i<13;i++)
    {
        strcpy(Badminton[i].slot,temp);
    }


}
else
    for (i=0;i<13;i++)
{

    fread (&Badminton[i],sizeof(struct BadmintonCourtA),1,bad);
}
    fclose(bad);

     FILE * ten;
if ((ten=fopen("tennisstatus.dat","rb"))==NULL)
{
    char temp[50]={"空闲"};
for (i=0;i<13;i++)
 strcpy(Tabletennis[i].slot,temp);


}
else
    for (i=0;i<13;i++)
    {

    fread (&Tabletennis,sizeof(struct TableTennisCourtB),1,ten);
    }
    fclose(ten);


    printf("\t=======================================================\n");
    printf("\t||                                                   ||\n");
    printf("\t||                                                   ||\n");
    printf("\t||                                                   ||\n");
    printf("\t||                                                   ||\n");
    printf("\t||                                                   ||\n");
    printf("\t||                                                   ||\n");
    printf("\t||         欢迎使用运动场馆预定管理系统!             ||\n");
    printf("\t||                                                   ||\n");
    printf("\t||         开馆时间：早上10.00-晚上10.00             ||\n");
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
    printf("\t||             开馆时间：早上10.00-晚上10.00         ||\n");
    show_time();
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
    case 8 :
        userlist();
        break;
    default:
        printf("输入错误，请重试！");
        start_screen();
        break;

    }

}
void login()
{
    int tempid;
    int temppw;
     system("cls");
    printf("\t=======================================================\n");
    printf("\t||         运动场馆预定管理系统 登录页面             ||\n");
    printf("\t||                                                   ||\n");
    printf("\t||                请输入您的学号:                    ||\n");
    printf("\t||                                                   ||\n");
    printf("\t||                                                   ||\n");
    printf("\t||                                                   ||\n");
    printf("\t||                                                   ||\n");
    printf("\t||                                                   ||\n");
    printf("\t||                                                   ||\n");
    printf("\t||                                                   ||\n");
    printf("\t||                                                   ||\n");
    printf("\t||                                                   ||\n");
    printf("\t||                                                   ||\n");
    printf("\t=======================================================\n");
    printf("\n\n\n\n\n\n");
    printf(":");
    scanf("%d",&tempid);
    for (i=0;tempid!=User[i].StudentID;)
        {
            i++;
            if (i>N)
                break;
        }
        if (i>N)
        {
                 system("cls");
    printf("\t=======================================================\n");
    printf("\t||         运动场馆预定管理系统 登录页面             ||\n");
    printf("\t||                                                   ||\n");
    printf("\t||         没有找到相关用户，您注册了吗？            ||\n");
    printf("\t||                                                   ||\n");
    printf("\t||                                                   ||\n");
    printf("\t||                                                   ||\n");
    printf("\t||                                                   ||\n");
    printf("\t||                                                   ||\n");
    printf("\t||                                                   ||\n");
    printf("\t||                                                   ||\n");
    printf("\t||                                                   ||\n");
    printf("\t||                                                   ||\n");
    printf("\t||                                                   ||\n");
    printf("\t=======================================================\n");
    printf("\n\n\n\n\n\n");
    Sleep(3000);
    start_screen();


        }
        else
        {
                            system("cls");
    printf("\t=======================================================\n");
    printf("\t||         运动场馆预定管理系统 登录页面             ||\n");
    printf("\t||                                                   ||\n");
    printf("\t||                  请输入您的密码                   ||\n");
    printf("\t||                                                   ||\n");
    printf("\t||                                                   ||\n");
    printf("\t||                                                   ||\n");
    printf("\t||                                                   ||\n");
    printf("\t||                                                   ||\n");
    printf("\t||                                                   ||\n");
    printf("\t||                                                   ||\n");
    printf("\t||                                                   ||\n");
    printf("\t||                                                   ||\n");
    printf("\t||                                                   ||\n");
    printf("\t=======================================================\n");
    printf("\n\n\n\n\n\n");
        printf(":");
    scanf("%d",&temppw);


        }
        if (temppw!=User[i].Pin)
        {
                             system("cls");
    printf("\t=======================================================\n");
    printf("\t||         运动场馆预定管理系统 登录页面             ||\n");
    printf("\t||                                                   ||\n");
    printf("\t||                     密码错误                      ||\n");
    printf("\t||                                                   ||\n");
    printf("\t||                                                   ||\n");
    printf("\t||                                                   ||\n");
    printf("\t||                                                   ||\n");
    printf("\t||                                                   ||\n");
    printf("\t||                                                   ||\n");
    printf("\t||                                                   ||\n");
    printf("\t||                                                   ||\n");
    printf("\t||                                                   ||\n");
    printf("\t||                                                   ||\n");
    printf("\t=======================================================\n");
    printf("\n\n\n\n\n\n");
    Sleep(3000);
    start_screen();

        }
        else
        {
     system("cls");
    printf("\t=======================================================\n");
    printf("\t||         运动场馆预定管理系统 登录页面             ||\n");
    printf("\t||                                                   ||\n");
    printf("\t||                    登录成功                       ||\n");
    printf("\t||                                                   ||\n");
    printf("\t||                                                   ||\n");
    printf("\t||                                                   ||\n");
    printf("\t||                                                   ||\n");
    printf("\t||                                                   ||\n");
    printf("\t||                                                   ||\n");
    printf("\t||                                                   ||\n");
    printf("\t||                                                   ||\n");
    printf("\t||                                                   ||\n");
    printf("\t||                                                   ||\n");
    printf("\t=======================================================\n");
    printf("\n\n\n\n\n\n");
    Sleep(3000);
    user_interface();

        }



}


void forgot_password()
{
        system("cls");
        int forgotsi;
    printf("\t=======================================================\n");
    printf("\t||         运动场馆预定管理系统 忘记密码             ||\n");
    printf("\t||                                                   ||\n");
    printf("\t||                请输入您的学号:                    ||\n");
    printf("\t||                                                   ||\n");
    printf("\t||                                                   ||\n");
    printf("\t||                                                   ||\n");
    printf("\t||                                                   ||\n");
    printf("\t||                                                   ||\n");
    printf("\t||                                                   ||\n");
    printf("\t||                                                   ||\n");
    printf("\t||                                                   ||\n");
    printf("\t||                                                   ||\n");
    printf("\t||                                                   ||\n");
    printf("\t=======================================================\n");
    printf("\n\n\n\n\n\n");
    printf(":");
    scanf("%d",&forgotsi);
        for (i=0;forgotsi!=User[i].StudentID;)
        {
            i++;
            if (i>N)
                break;
        }
        if (i>N)
        {
                 system("cls");
    printf("\t=======================================================\n");
    printf("\t||         运动场馆预定管理系统 登录页面             ||\n");
    printf("\t||                                                   ||\n");
    printf("\t||         没有找到相关用户，您注册了吗？            ||\n");
    printf("\t||                                                   ||\n");
    printf("\t||                                                   ||\n");
    printf("\t||                                                   ||\n");
    printf("\t||                                                   ||\n");
    printf("\t||                                                   ||\n");
    printf("\t||                                                   ||\n");
    printf("\t||                                                   ||\n");
    printf("\t||                                                   ||\n");
    printf("\t||                                                   ||\n");
    printf("\t||                                                   ||\n");
    printf("\t=======================================================\n");
    printf("\n\n\n\n\n\n");
    Sleep(3000);
    start_screen();

}
else {
            system("cls");
        char forgotphone[500];
    printf("\t=======================================================\n");
    printf("\t||         运动场馆预定管理系统 忘记密码             ||\n");
    printf("\t||                                                   ||\n");
    printf("\t||                请输入您的电话号码:                    ||\n");
    printf("\t||                                                   ||\n");
    printf("\t||                                                   ||\n");
    printf("\t||                                                   ||\n");
    printf("\t||                                                   ||\n");
    printf("\t||                                                   ||\n");
    printf("\t||                                                   ||\n");
    printf("\t||                                                   ||\n");
    printf("\t||                                                   ||\n");
    printf("\t||                                                   ||\n");
    printf("\t||                                                   ||\n");
    printf("\t=======================================================\n");
    printf("\n\n\n\n\n\n");
    printf(":");
scanf("%s",&forgotphone);
 if (strcmp(forgotphone,User[i].tele)!=0)
{
    system("cls");
    printf("\t=======================================================\n");
    printf("\t||         运动场馆预定管理系统 忘记密码             ||\n");
    printf("\t||                                                   ||\n");
    printf("\t||                电话号码验证失败                   ||\n");
    printf("\t||                                                   ||\n");
    printf("\t||                                                   ||\n");
    printf("\t||                                                   ||\n");
    printf("\t||                                                   ||\n");
    printf("\t||                                                   ||\n");
    printf("\t||                                                   ||\n");
    printf("\t||                                                   ||\n");
    printf("\t||                                                   ||\n");
    printf("\t||                                                   ||\n");
    printf("\t||                                                   ||\n");
    printf("\t=======================================================\n");
    printf("\n\n\n\n\n\n");
    Sleep(3000);
    start_screen();
}


 if (strcmp(forgotphone,User[i].tele)==0)
 {
          system("cls");
    printf("\t=======================================================\n");
    printf("\t||         运动场馆预定管理系统 忘记密码             ||\n");
    printf("\t||                                                   ||\n");
    printf("\t||            请创建一个六位数密码:                  ||\n");
    printf("\t||                                                   ||\n");
    printf("\t||                                                   ||\n");
    printf("\t||                                                   ||\n");
    printf("\t||                                                   ||\n");
    printf("\t||                                                   ||\n");
    printf("\t||                                                   ||\n");
    printf("\t||                                                   ||\n");
    printf("\t||                                                   ||\n");
    printf("\t||                                                   ||\n");
    printf("\t||                                                   ||\n");
    printf("\t=======================================================\n");
    printf("\n\n\n\n\n\n");
    printf(":");
    scanf("%d",&User[i].Pin);
    system("cls");
    printf("\t=======================================================\n");
    printf("\t||         运动场馆预定管理系统 忘记密码             ||\n");
    printf("\t||                                                   ||\n");
    printf("\t||                 请再输入一遍:                     ||\n");
    printf("\t||                                                   ||\n");
    printf("\t||                                                   ||\n");
    printf("\t||                                                   ||\n");
    printf("\t||                                                   ||\n");
    printf("\t||                                                   ||\n");
    printf("\t||                                                   ||\n");
    printf("\t||                                                   ||\n");
    printf("\t||                                                   ||\n");
    printf("\t||                                                   ||\n");
    printf("\t||                                                   ||\n");
    printf("\t=======================================================\n");
    printf("\n\n\n\n\n\n");
    printf(":");
    scanf("%d",&User[i].Pin_confirm);
    if (User[i].Pin!=User[i].Pin_confirm)
    {
            system("cls");
    printf("\t=======================================================\n");
    printf("\t||         运动场馆预定管理系统 忘记密码             ||\n");
    printf("\t||                                                   ||\n");
    printf("\t||          两次密码不相同，请重试！！               ||\n");
    printf("\t||                 即将返回主页面！                  ||\n");
    printf("\t||                                                   ||\n");
    printf("\t||                                                   ||\n");
    printf("\t||                                                   ||\n");
    printf("\t||                                                   ||\n");
    printf("\t||                                                   ||\n");
    printf("\t||                                                   ||\n");
    printf("\t||                                                   ||\n");
    printf("\t||                                                   ||\n");
    printf("\t||                                                   ||\n");
    printf("\t=======================================================\n");
    printf("\n\n\n\n\n\n");
    Sleep(3000);
    start_screen();


 }else
 {
                  system("cls");
    printf("\t=======================================================\n");
    printf("\t||         运动场馆预定管理系统 找回密码             ||\n");
    printf("\t||                                                   ||\n");
    printf("\t||                   重置成功                        ||\n");
    printf("\t||                                                   ||\n");
    printf("\t||                                                   ||\n");
    printf("\t||                                                   ||\n");
    printf("\t||                                                   ||\n");
    printf("\t||                                                   ||\n");
    printf("\t||                                                   ||\n");
    printf("\t||                                                   ||\n");
    printf("\t||                                                   ||\n");
    printf("\t||                                                   ||\n");
    printf("\t||                                                   ||\n");
    printf("\t=======================================================\n");
    printf("\n\n\n\n\n\n");
        Sleep(3000);
        start_screen();

 }

}

}

}


void registration()
{
    i=N;

    system("cls");
    printf("\t=======================================================\n");
    printf("\t||         运动场馆预定管理系统 注册页面             ||\n");
    printf("\t||                                                   ||\n");
    printf("\t||                请输入您的学号:                    ||\n");
    printf("\t||                                                   ||\n");
    printf("\t||                                                   ||\n");
    printf("\t||                                                   ||\n");
    printf("\t||                                                   ||\n");
    printf("\t||                                                   ||\n");
    printf("\t||                                                   ||\n");
    printf("\t||                                                   ||\n");
    printf("\t||                                                   ||\n");
    printf("\t||                                                   ||\n");
    printf("\t||                                                   ||\n");
    printf("\t=======================================================\n");
    printf("\n\n\n\n\n\n");
    printf(":");
    scanf("%d",&User[i].StudentID);
    system("cls");
    printf("\t=======================================================\n");
    printf("\t||         运动场馆预定管理系统 注册页面             ||\n");
    printf("\t||                                                   ||\n");
    printf("\t||              请输入您的名字:                      ||\n");
    printf("\t||                                                   ||\n");
    printf("\t||                                                   ||\n");
    printf("\t||                                                   ||\n");
    printf("\t||                                                   ||\n");
    printf("\t||                                                   ||\n");
    printf("\t||                                                   ||\n");
    printf("\t||                                                   ||\n");
    printf("\t||                                                   ||\n");
    printf("\t||                                                   ||\n");
    printf("\t||                                                   ||\n");
    printf("\t=======================================================\n");
    printf("\n\n\n\n\n\n");
    printf(":");
    scanf("%s",User[i].Full_name);
        system("cls");
    printf("\t=======================================================\n");
    printf("\t||         运动场馆预定管理系统 注册页面             ||\n");
    printf("\t||                                                   ||\n");
    printf("\t||              请输入您的班级:                      ||\n");
    printf("\t||                                                   ||\n");
    printf("\t||                                                   ||\n");
    printf("\t||                                                   ||\n");
    printf("\t||                                                   ||\n");
    printf("\t||                                                   ||\n");
    printf("\t||                                                   ||\n");
    printf("\t||                                                   ||\n");
    printf("\t||                                                   ||\n");
    printf("\t||                                                   ||\n");
    printf("\t||                                                   ||\n");
    printf("\t=======================================================\n");
    printf("\n\n\n\n\n\n");
    printf(":");
    scanf("%d",&User[i].Class);
    system("cls");
    printf("\t=======================================================\n");
    printf("\t||         运动场馆预定管理系统 注册页面             ||\n");
    printf("\t||                                                   ||\n");
    printf("\t||            请输入您的电话号码:                    ||\n");
    printf("\t||                                                   ||\n");
    printf("\t||                                                   ||\n");
    printf("\t||                                                   ||\n");
    printf("\t||                                                   ||\n");
    printf("\t||                                                   ||\n");
    printf("\t||                                                   ||\n");
    printf("\t||                                                   ||\n");
    printf("\t||                                                   ||\n");
    printf("\t||                                                   ||\n");
    printf("\t||                                                   ||\n");
    printf("\t=======================================================\n");
    printf("\n\n\n\n\n\n");
    printf(":");
    scanf("%s",User[i].tele);
     system("cls");
    printf("\t=======================================================\n");
    printf("\t||         运动场馆预定管理系统 注册页面             ||\n");
    printf("\t||                                                   ||\n");
    printf("\t||            请创建一个六位数密码:                  ||\n");
    printf("\t||                                                   ||\n");
    printf("\t||                                                   ||\n");
    printf("\t||                                                   ||\n");
    printf("\t||                                                   ||\n");
    printf("\t||                                                   ||\n");
    printf("\t||                                                   ||\n");
    printf("\t||                                                   ||\n");
    printf("\t||                                                   ||\n");
    printf("\t||                                                   ||\n");
    printf("\t||                                                   ||\n");
    printf("\t=======================================================\n");
    printf("\n\n\n\n\n\n");
    printf(":");
    scanf("%d",&User[i].Pin);
    system("cls");
    printf("\t=======================================================\n");
    printf("\t||         运动场馆预定管理系统 注册页面             ||\n");
    printf("\t||                                                   ||\n");
    printf("\t||                 请再输入一遍:                     ||\n");
    printf("\t||                                                   ||\n");
    printf("\t||                                                   ||\n");
    printf("\t||                                                   ||\n");
    printf("\t||                                                   ||\n");
    printf("\t||                                                   ||\n");
    printf("\t||                                                   ||\n");
    printf("\t||                                                   ||\n");
    printf("\t||                                                   ||\n");
    printf("\t||                                                   ||\n");
    printf("\t||                                                   ||\n");
    printf("\t=======================================================\n");
    printf("\n\n\n\n\n\n");
    printf(":");
    scanf("%d",&User[i].Pin_confirm);
    if (User[i].Pin!=User[i].Pin_confirm)
    {
            system("cls");
    printf("\t=======================================================\n");
    printf("\t||         运动场馆预定管理系统 注册页面             ||\n");
    printf("\t||                                                   ||\n");
    printf("\t||          两次密码不相同，请重新注册               ||\n");
    printf("\t||                 即将返回主页面！                  ||\n");
    printf("\t||                                                   ||\n");
    printf("\t||                                                   ||\n");
    printf("\t||                                                   ||\n");
    printf("\t||                                                   ||\n");
    printf("\t||                                                   ||\n");
    printf("\t||                                                   ||\n");
    printf("\t||                                                   ||\n");
    printf("\t||                                                   ||\n");
    printf("\t||                                                   ||\n");
    printf("\t=======================================================\n");
    printf("\n\n\n\n\n\n");
    Sleep(3000);
    start_screen();


    }
    else
    {
             system("cls");
    printf("\t=======================================================\n");
    printf("\t||         运动场馆预定管理系统 注册页面             ||\n");
    printf("\t||                                                   ||\n");
    printf("\t||                   创建成功                        ||\n");
    printf("\t||                                                   ||\n");
    printf("\t||                                                   ||\n");
    printf("\t||                                                   ||\n");
    printf("\t||                                                   ||\n");
    printf("\t||                                                   ||\n");
    printf("\t||                                                   ||\n");
    printf("\t||                                                   ||\n");
    printf("\t||                                                   ||\n");
    printf("\t||                                                   ||\n");
    printf("\t||                                                   ||\n");
    printf("\t=======================================================\n");
    printf("\n\n\n\n\n\n");
        N=N+1;
        Sleep(3000);
        start_screen();
    }



}
void venue_avaliablity()
{
    int choice;
                 system("cls");
                  int backmenu;
    printf("\t=======================================================\n");
    printf("\t||         运动场馆预定管理系统 场地查询             ||\n");
    printf("\t||                                                   ||\n");
    printf("\t||          请选择需要要查询的场地                   ||\n");
    printf("\t||          <1> 羽毛球场A                            ||\n");
    printf("\t||          <2> 乒乓球场B                            ||\n");
    printf("\t||          <3> 篮球场C                              ||\n");
    printf("\t||                                                   ||\n");
    printf("\t||                                                   ||\n");
    printf("\t||                                                   ||\n");
    printf("\t||                                                   ||\n");
    printf("\t||                                                   ||\n");
    printf("\t||                                                   ||\n");
    printf("\t||                                                   ||\n");
    printf("\t=======================================================\n");
    printf("\n\n\n\n\n\n");
    printf(":");
    scanf("%d",&choice);
    switch(choice)
    {
    case 1 :
        badmintoncourt();
        break;
    case 2 :
        tabletenniscourt();
        break;
    case 3 :
        basketballcourt();
        break;
    }

}

void basketballcourt()
{
    system("cls");
     int backmenu;
    printf("\t=======================================================\n");
    printf("\t||         运动场馆预定管理系统 篮球场状态           ||\n");
    printf("\t||                                                   ||\n");
    printf("\t||           %s：%s               ||\n",timesl[1].timeslotlk,Basket[1].slot);
    printf("\t||           %s：%s               ||\n",timesl[2].timeslotlk,Basket[2].slot);
    printf("\t||           %s：%s               ||\n",timesl[3].timeslotlk,Basket[3].slot);
    printf("\t||           %s：%s               ||\n",timesl[4].timeslotlk,Basket[4].slot);
    printf("\t||           %s：%s               ||\n",timesl[5].timeslotlk,Basket[5].slot);
    printf("\t||           %s：%s               ||\n",timesl[6].timeslotlk,Basket[6].slot);
    printf("\t||           %s：%s               ||\n",timesl[7].timeslotlk,Basket[7].slot);
    printf("\t||           %s：%s               ||\n",timesl[8].timeslotlk,Basket[8].slot);
    printf("\t||           %s：%s               ||\n",timesl[9].timeslotlk,Basket[9].slot);
    printf("\t||           %s  %s               ||\n",timesl[10].timeslotlk,Basket[10].slot);
    printf("\t||           %s：%s               ||\n",timesl[11].timeslotlk,Basket[11].slot);
    printf("\t||           %s：%s               ||\n",timesl[12].timeslotlk,Basket[12].slot);
    printf("\t||                 <1> 返回主页面                    ||\n");
    printf("\t=======================================================\n");
 printf("\n\n\n");
    printf("\n:");
    scanf("%d",&backmenu);
    start_screen();


}
void tabletenniscourt()
{
    system("cls");
    int backmenu;
    printf("\t=======================================================\n");
    printf("\t||         运动场馆预定管理系统 乒乓球场状态         ||\n");
    printf("\t||                                                   ||\n");
    printf("\t||           %s：%s               ||\n",timesl[1].timeslotlk,Tabletennis[1].slot);
    printf("\t||           %s：%s               ||\n",timesl[2].timeslotlk,Tabletennis[2].slot);
    printf("\t||           %s：%s               ||\n",timesl[3].timeslotlk,Tabletennis[3].slot);
    printf("\t||           %s：%s               ||\n",timesl[4].timeslotlk,Tabletennis[4].slot);
    printf("\t||           %s：%s               ||\n",timesl[5].timeslotlk,Tabletennis[5].slot);
    printf("\t||           %s：%s               ||\n",timesl[6].timeslotlk,Tabletennis[6].slot);
    printf("\t||           %s：%s               ||\n",timesl[7].timeslotlk,Tabletennis[7].slot);
    printf("\t||           %s：%s               ||\n",timesl[8].timeslotlk,Tabletennis[8].slot);
    printf("\t||           %s：%s               ||\n",timesl[9].timeslotlk,Tabletennis[9].slot);
    printf("\t||           %s  %s               ||\n",timesl[10].timeslotlk,Tabletennis[10].slot);
    printf("\t||           %s：%s               ||\n",timesl[11].timeslotlk,Tabletennis[11].slot);
    printf("\t||           %s：%s               ||\n",timesl[12].timeslotlk,Tabletennis[12].slot);
    printf("\t||                 <1> 返回主页面                    ||\n");
    printf("\t=======================================================\n");
    printf("\n\n\n");
    printf("\n:");
    scanf("%d",&backmenu);
    start_screen();
}
void badmintoncourt()
{
       system("cls");
       int backmenu;
    printf("\t=======================================================\n");
    printf("\t||         运动场馆预定管理系统 羽毛球场状态         ||\n");
    printf("\t||                                                   ||\n");
    printf("\t||           %s：%s               ||\n",timesl[1].timeslotlk,Badminton[1].slot);
    printf("\t||           %s：%s               ||\n",timesl[2].timeslotlk,Badminton[2].slot);
    printf("\t||           %s：%s               ||\n",timesl[3].timeslotlk,Badminton[3].slot);
    printf("\t||           %s：%s               ||\n",timesl[4].timeslotlk,Badminton[4].slot);
    printf("\t||           %s：%s               ||\n",timesl[5].timeslotlk,Badminton[5].slot);
    printf("\t||           %s：%s               ||\n",timesl[6].timeslotlk,Badminton[6].slot);
    printf("\t||           %s：%s               ||\n",timesl[7].timeslotlk,Badminton[7].slot);
    printf("\t||           %s：%s               ||\n",timesl[8].timeslotlk,Badminton[8].slot);
    printf("\t||           %s：%s               ||\n",timesl[9].timeslotlk,Badminton[9].slot);
    printf("\t||           %s  %s               ||\n",timesl[10].timeslotlk,Badminton[10].slot);
    printf("\t||           %s：%s               ||\n",timesl[11].timeslotlk,Badminton[11].slot);
    printf("\t||           %s：%s               ||\n",timesl[12].timeslotlk,Badminton[12].slot);
    printf("\t||                 <1> 返回主页面                    ||\n");
    printf("\t=======================================================\n");
    printf("\n\n\n");
    printf("\n:");
    scanf("%d",&backmenu);
    start_screen();

}

void badmintoncourtr()
{
     system("cls");
       int book;
    printf("\t=======================================================\n");
    printf("\t||         运动场馆预定管理系统 预定羽毛球场         ||\n");
    printf("\t||           只能对目前空闲的场地进行预定            ||\n");
    printf("\t||                                                   ||\n");
    printf("\t||         <1>%s：%s               ||\n",timesl[1].timeslotlk,Badminton[1].slot);
    printf("\t||         <2>%s：%s               ||\n",timesl[2].timeslotlk,Badminton[2].slot);
    printf("\t||         <3>%s：%s               ||\n",timesl[3].timeslotlk,Badminton[3].slot);
    printf("\t||         <4>%s：%s               ||\n",timesl[4].timeslotlk,Badminton[4].slot);
    printf("\t||         <5>%s：%s               ||\n",timesl[5].timeslotlk,Badminton[5].slot);
    printf("\t||         <6>%s：%s               ||\n",timesl[6].timeslotlk,Badminton[6].slot);
    printf("\t||         <7>%s：%s               ||\n",timesl[7].timeslotlk,Badminton[7].slot);
    printf("\t||         <8>%s：%s               ||\n",timesl[8].timeslotlk,Badminton[8].slot);
    printf("\t||         <9>%s：%s               ||\n",timesl[9].timeslotlk,Badminton[9].slot);
    printf("\t||         <10>%s  %s               ||\n",timesl[10].timeslotlk,Badminton[10].slot);
    printf("\t||         <11>%s：%s               ||\n",timesl[11].timeslotlk,Badminton[11].slot);
    printf("\t||         <12>%s：%s               ||\n",timesl[12].timeslotlk,Badminton[12].slot);
    printf("\t=======================================================\n");
    printf("\n\n\n");
    printf("\n:");
    scanf("%d",&book);
    char temp[50]={"空闲"};
    if (strcmp(temp,Badminton[book].slot)==0)
    {
        char templ[50]={"占有"};
        strcpy(Badminton[book].slot,templ);
        User[i].b=1;
        strcpy(User[i].book,timesl[book].timeslotlk);
        system("cls");
    printf("\t=======================================================\n");
    printf("\t||                 运动场馆预定管理系统              ||\n");
    printf("\t||                                                   ||\n");
    printf("\t||                       预定成功！                  ||\n");
    printf("\t||                 预定场馆：羽毛球场A               ||\n");
    printf("\t||                 预定时间：%s     ||\n",timesl[book].timeslotlk);
    printf("\t||                 预定编号：%d                      ||\n",rand());
    printf("\t||                                                   ||\n");
    printf("\t||                                                   ||\n");
    printf("\t||                                                   ||\n");
    printf("\t||                                                   ||\n");
    printf("\t||                                                   ||\n");
    printf("\t||                   <1> 返回主页面                  ||\n");
    printf("\t||                                                   ||\n");
    printf("\t=======================================================\n");
    int c;
    printf(":");
    scanf("%d",&c);
    user_interface();






    }


}





void about()
{
    int backmenu;
        system("cls");
    printf("\t=======================================================\n");
    printf("\t||                                                   ||\n");
    printf("\t|| 项目名称：运动场馆预定管理系统                    ||\n");
    printf("\t|| 本项目作者：陈卓凡| 2100746                       ||\n");
    printf("\t|| 项目版本：V1.01                                   ||\n");
    printf("\t|| 本项目语言：C语言                                 ||\n");
    printf("\t|| 项目特色：运动场地管理，用户信息管理，租用管理    ||\n");
    printf("\t|| 使用本程序需要名字，班级，身份证。开始时需要选择2 ||\n");
    printf("\t|| 来注册一个账号，然后使用（信息将一直被储存）      ||\n");
    printf("\t||                 <1> 返回主页面                    ||\n");
    printf("\t||                                                   ||\n");
    printf("\t||                                                   ||\n");
    printf("\t||                                                   ||\n");
    printf("\t||                                                   ||\n");
    printf("\t||                                                   ||\n");
    printf("\t=======================================================\n");
    printf("\n\n");
    printf("\n:");
    scanf("%d",&backmenu);
    start_screen();

}

void userlist()
{
    system("cls");
     int backmenu;
    printf("\t==================================================================================================\n");
    nametitle();
    int j=0;
    for (j=0;j<N;j++)
    {
    printf("\t     %d     %d  %s       %d         %s               %d        %s \n",j,User[j].StudentID,User[j].Full_name,User[j].Class,User[j].tele,User[j].Pin,User[j].book);

    }

    printf("\t||                                    <1> 返回主页面                                             ||\n");
    printf("\t==================================================================================================\n");
    printf("\n\n");
    printf("\n:");
    scanf("%d",&backmenu);
    start_screen();



}

void nametitle()
{
    printf("\t|| 选项     学号     名字      班级        电话号码                     密码           预定        || \n");

}


void user_interface()
{
                system("cls");
                int cl;
    printf("\t=======================================================\n");
    printf("\t||              运动场馆预定管理系统 你好，%s        ||\n", User[i].Full_name);
    printf("\t||              今天你想进行什么操作？               ||\n");
    printf("\t||                                                   ||\n");
    printf("\t||<1>预定场地     <2>查看现有预约    <3>更改个人信息 ||\n");
    printf("\t||                                                   ||\n");
    printf("\t|| <4>退出登录     <5>退出应用                       ||\n");
    printf("\t||                                                   ||\n");
    printf("\t||                                                   ||\n");
    printf("\t||                                                   ||\n");
    printf("\t||                                                   ||\n");
    printf("\t||                                                   ||\n");
    printf("\t||                                                   ||\n");
    printf("\t||                                                   ||\n");
    printf("\t=======================================================\n");
    printf("\n\n\n\n\n\n");
    printf(":");
    scanf("%d",&cl);
    switch(cl)
    {
    case 1 :
        reserve();
        break;
    case 2 :
        exist();
        break;
    case 3 :
        change();
        break;
    case 4 :
        start_screen();
        break;
    case 5 :

        exitapp();
        break;


    }
}
void exist()
{
    if (User[i].b=1)
    {
         system("cls");
    printf("\t=======================================================\n");
    printf("\t||         运动场馆预定管理系统 预定查询             ||\n");
    printf("\t||                                                   ||\n");
    printf("\t||                 预定场馆：羽毛球场A               ||\n");
    printf("\t||                 预定时间：%s     ||\n",User[i].book);
    printf("\t||                                                   ||\n");
    printf("\t||                                                   ||\n");
    printf("\t||                                                   ||\n");
    printf("\t||                                                   ||\n");
    printf("\t||                                                   ||\n");
    printf("\t||                                                   ||\n");
    printf("\t||                                                   ||\n");
    printf("\t||                                                   ||\n");
    printf("\t||                  <1> 返回主页面                   ||\n");
    printf("\t=======================================================\n");
    printf("\n\n\n\n\n\n");
    printf(":");
    int a;
    scanf("%d",&a);
    user_interface();
    }
     if (User[i].b=2)
    {
         system("cls");
    printf("\t=======================================================\n");
    printf("\t||         运动场馆预定管理系统 预定查询             ||\n");
    printf("\t||                                                   ||\n");
    printf("\t||                 预定场馆：乒乓球场B               ||\n");
    printf("\t||                 预定时间：%s     ||\n",User[i].book);
    printf("\t||                                                   ||\n");
    printf("\t||                                                   ||\n");
    printf("\t||                                                   ||\n");
    printf("\t||                                                   ||\n");
    printf("\t||                                                   ||\n");
    printf("\t||                                                   ||\n");
    printf("\t||                                                   ||\n");
    printf("\t||                                                   ||\n");
    printf("\t||                  <1> 返回主页面                   ||\n");
    printf("\t=======================================================\n");
    printf("\n\n\n\n\n\n");
    printf(":");
    int a;
    scanf("%d",&a);
    user_interface();
    }
    if (User[i].b=3)
    {
         system("cls");
    printf("\t=======================================================\n");
    printf("\t||         运动场馆预定管理系统 预定查询             ||\n");
    printf("\t||                                                   ||\n");
    printf("\t||                 预定场馆：篮球场C               ||\n");
    printf("\t||                 预定时间：%s     ||\n",User[i].book);
    printf("\t||                                                   ||\n");
    printf("\t||                                                   ||\n");
    printf("\t||                                                   ||\n");
    printf("\t||                                                   ||\n");
    printf("\t||                                                   ||\n");
    printf("\t||                                                   ||\n");
    printf("\t||                                                   ||\n");
    printf("\t||                                                   ||\n");
    printf("\t||                  <1> 返回主页面                   ||\n");
    printf("\t=======================================================\n");
    printf("\n\n\n\n\n\n");
    printf(":");
    int a;
    scanf("%d",&a);
    user_interface();
    }


    }


void change()
{

}
void reserve()
    {
            int choice;
                 system("cls");
                  int backmenu;
    printf("\t=======================================================\n");
    printf("\t||         运动场馆预定管理系统 场地预定             ||\n");
    printf("\t||                                                   ||\n");
    printf("\t||          请选择需要要预定的场地                   ||\n");
    printf("\t||          <1> 羽毛球场A                            ||\n");
    printf("\t||          <2> 乒乓球场B                            ||\n");
    printf("\t||          <3> 篮球场C                              ||\n");
    printf("\t||                                                   ||\n");
    printf("\t||                                                   ||\n");
    printf("\t||                                                   ||\n");
    printf("\t||                                                   ||\n");
    printf("\t||                                                   ||\n");
    printf("\t||                                                   ||\n");
    printf("\t||                                                   ||\n");
    printf("\t=======================================================\n");
    printf("\n\n\n\n\n\n");
    printf(":");
    scanf("%d",&choice);
    switch(choice)
    {
    case 1 :
        badmintoncourtr();
        break;
    case 2 :
        tabletenniscourtr();
        break;
    case 3 :
        basketballcourtr();
        break;
    }

    }
void tabletenniscourtr()
{
         system("cls");
       int book;
    printf("\t=======================================================\n");
    printf("\t||         运动场馆预定管理系统 预定乒乓球场         ||\n");
    printf("\t||           只能对目前空闲的场地进行预定            ||\n");
    printf("\t||                                                   ||\n");
    printf("\t||         <1>%s：%s               ||\n",timesl[1].timeslotlk,Tabletennis[1].slot);
    printf("\t||         <2>%s：%s               ||\n",timesl[2].timeslotlk,Tabletennis[2].slot);
    printf("\t||         <3>%s：%s               ||\n",timesl[3].timeslotlk,Tabletennis[3].slot);
    printf("\t||         <4>%s：%s               ||\n",timesl[4].timeslotlk,Tabletennis[4].slot);
    printf("\t||         <5>%s：%s               ||\n",timesl[5].timeslotlk,Tabletennis[5].slot);
    printf("\t||         <6>%s：%s               ||\n",timesl[6].timeslotlk,Tabletennis[6].slot);
    printf("\t||         <7>%s：%s               ||\n",timesl[7].timeslotlk,Tabletennis[7].slot);
    printf("\t||         <8>%s：%s               ||\n",timesl[8].timeslotlk,Tabletennis[8].slot);
    printf("\t||         <9>%s：%s               ||\n",timesl[9].timeslotlk,Tabletennis[9].slot);
    printf("\t||         <10>%s  %s               ||\n",timesl[10].timeslotlk,Tabletennis[10].slot);
    printf("\t||         <11>%s：%s               ||\n",timesl[11].timeslotlk,Tabletennis[11].slot);
    printf("\t||         <12>%s：%s               ||\n",timesl[12].timeslotlk,Tabletennis[12].slot);
    printf("\t=======================================================\n");
    printf("\n\n\n");
    printf("\n:");
    scanf("%d",&book);
    char temp[50]={"空闲"};
    if (strcmp(temp,Tabletennis[book].slot)==0)
    {
        char templ[50]={"占有"};
        strcpy(Tabletennis[book].slot,templ);
        User[i].b=2;
        strcpy(User[i].book,timesl[book].timeslotlk);
        system("cls");
    printf("\t=======================================================\n");
    printf("\t||                 运动场馆预定管理系统              ||\n");
    printf("\t||                                                   ||\n");
    printf("\t||                       预定成功！                  ||\n");
    printf("\t||                 预定场馆：乒乓球场B               ||\n");
    printf("\t||                 预定时间：%s     ||\n",timesl[book].timeslotlk);
    printf("\t||                 预定编号：%d                      ||\n",rand());
    printf("\t||                                                   ||\n");
    printf("\t||                                                   ||\n");
    printf("\t||                                                   ||\n");
    printf("\t||                                                   ||\n");
    printf("\t||                                                   ||\n");
    printf("\t||                   <1> 返回主页面                  ||\n");
    printf("\t||                                                   ||\n");
    printf("\t=======================================================\n");
    int c;
    printf(":");
    scanf("%d",&c);
    user_interface();

}
}
void  basketballcourtr()
{
             system("cls");
       int book;
    printf("\t=======================================================\n");
    printf("\t||         运动场馆预定管理系统 预定篮球场           ||\n");
    printf("\t||           只能对目前空闲的场地进行预定            ||\n");
    printf("\t||                                                   ||\n");
    printf("\t||         <1>%s：%s               ||\n",timesl[1].timeslotlk,Basket[1].slot);
    printf("\t||         <2>%s：%s               ||\n",timesl[2].timeslotlk,Basket[2].slot);
    printf("\t||         <3>%s：%s               ||\n",timesl[3].timeslotlk,Basket[3].slot);
    printf("\t||         <4>%s：%s               ||\n",timesl[4].timeslotlk,Basket[4].slot);
    printf("\t||         <5>%s：%s               ||\n",timesl[5].timeslotlk,Basket[5].slot);
    printf("\t||         <6>%s：%s               ||\n",timesl[6].timeslotlk,Basket[6].slot);
    printf("\t||         <7>%s：%s               ||\n",timesl[7].timeslotlk,Basket[7].slot);
    printf("\t||         <8>%s：%s               ||\n",timesl[8].timeslotlk,Basket[8].slot);
    printf("\t||         <9>%s：%s               ||\n",timesl[9].timeslotlk,Basket[9].slot);
    printf("\t||         <10>%s  %s               ||\n",timesl[10].timeslotlk,Basket[10].slot);
    printf("\t||         <11>%s：%s               ||\n",timesl[11].timeslotlk,Basket[11].slot);
    printf("\t||         <12>%s：%s               ||\n",timesl[12].timeslotlk,Basket[12].slot);
    printf("\t=======================================================\n");
    printf("\n\n\n");
    printf("\n:");
    scanf("%d",&book);
    char temp[50]={"空闲"};
    if (strcmp(temp,Basket[book].slot)==0)
    {
        char templ[50]={"占有"};
        strcpy(Basket[book].slot,templ);
        User[i].b=3;
        strcpy(User[i].book,timesl[book].timeslotlk);
        system("cls");
    printf("\t=======================================================\n");
    printf("\t||                 运动场馆预定管理系统              ||\n");
    printf("\t||                                                   ||\n");
    printf("\t||                       预定成功！                  ||\n");
    printf("\t||                 预定场馆：篮球场C               ||\n");
    printf("\t||                 预定时间：%s     ||\n",timesl[book].timeslotlk);
    printf("\t||                 预定编号：%d                      ||\n",rand());
    printf("\t||                                                   ||\n");
    printf("\t||                                                   ||\n");
    printf("\t||                                                   ||\n");
    printf("\t||                                                   ||\n");
    printf("\t||                                                   ||\n");
    printf("\t||                   <1> 返回主页面                  ||\n");
    printf("\t||                                                   ||\n");
    printf("\t=======================================================\n");
    int c;
    printf(":");
    scanf("%d",&c);
    user_interface();

}

}



void venue_pricing()
 {
     int backmenu;
    system("cls");
    printf("\t=======================================================\n");
    printf("\t||         运动场馆预定管理系统 租借价格             ||\n");
    printf("\t||          场地租借价格会随着时段而改动             ||\n");
    printf("\t||              以下为不同时段的价格：               ||\n");
    printf("\t||                                                   ||\n");
    printf("\t||           早上10.00-早上11.00：￥%.2f            ||\n",Cost.slot1);
    printf("\t||           早上11.00-早上12.00：￥%.2f            ||\n",Cost.slot2);
    printf("\t||           中午12.00-下午13.00：￥%.2f            ||\n",Cost.slot3);
    printf("\t||           下午13.00-下午14.00：￥%.2f            ||\n",Cost.slot4);
    printf("\t||           下午14.00-下午15.00：￥%.2f            ||\n",Cost.slot5);
    printf("\t||           下午15.00-下午16.00：￥%.2f            ||\n",Cost.slot6);
    printf("\t||           下午16.00-下午17.00：￥%.2f            ||\n",Cost.slot7);
    printf("\t||           下午17.00-傍晚18.00：￥%.2f            ||\n",Cost.slot8);
    printf("\t||           傍晚18.00-晚上19.00：￥%.2f            ||\n",Cost.slot9);
    printf("\t||           晚上19.00-晚上20.00  ￥%.2f            ||\n",Cost.slot10);
    printf("\t||           晚上20.00-晚上21.00：￥%.2f            ||\n",Cost.slot11);
    printf("\t||           晚上21.00-晚上22.00：￥%.2f            ||\n",Cost.slot12);
    printf("\t||                 <1> 返回主页面                    ||\n");
    printf("\t=======================================================\n");
    printf("\n\n\n");
    printf("\n:");
    scanf("%d",&backmenu);
    start_screen();


 }

//时间显示函数（已完善）
void show_time()
{
    char str[100];
    time_t t;
    struct tm *lt;
    t = time(NULL);
    lt = localtime(&t);
    strftime(str,100,"%Y-%m-%d  %H:%M:%S ",lt);
    printf("\t||             当前时间：%s       ||\n",str);
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
        fwrite (&User[i],sizeof (struct User),1,registerinfo);
        fclose( registerinfo);


         FILE * badm;
    badm=fopen("badmintonstatus.dat","wb");
    for (i=0;i<13;i++)
    fwrite (&Badminton[i],sizeof (struct BadmintonCourtA),1,badm);
    fclose(badm);


FILE * ball;
    ball=fopen("basketballstatus.dat","wb");
for (i=0;i<13;i++)
    fwrite (&Basket[i],sizeof (struct BasketballCourtC),1,ball);
    fclose(ball);


    FILE * tenn;
    tenn=fopen("tennisstatus.dat","wb");
    for (i=0;i<13;i++)
    fwrite (&Tabletennis[i],sizeof (struct TableTennisCourtB),1,tenn);
    fclose(tenn);

        exit(0);

}
