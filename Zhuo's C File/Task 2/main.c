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
}User[500]={};

struct BadmintonCourtA
{
     char slot1[50];
    char slot2[50];
    char slot3[50];
    char slot4[50];
    char slot5[50];
    char slot6[50];
    char slot7[50];
    char slot8[50];
    char slot9[50];
    char slot10[50];
    char slot11[50];
    char slot12[50];


}Badminton;

struct TableTennisCourtB
{
         char slot1[50];
    char slot2[50];
    char slot3[50];
    char slot4[50];
    char slot5[50];
    char slot6[50];
    char slot7[50];
    char slot8[50];
    char slot9[50];
    char slot10[50];
    char slot11[50];
    char slot12[50];

}Tabletennis;
struct BasketballCourtC
{
         char slot1[50];
    char slot2[50];
    char slot3[50];
    char slot4[50];
    char slot5[50];
    char slot6[50];
    char slot7[50];
    char slot8[50];
    char slot9[50];
    char slot10[50];
    char slot11[50];
    char slot12[50];

}Basket;

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


int main()  //Main
{
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
    strcpy(Basket.slot1,temp);
     strcpy(Basket.slot2,temp);
      strcpy(Basket.slot3,temp);
       strcpy(Basket.slot4,temp);
        strcpy(Basket.slot5,temp);
         strcpy(Basket.slot6,temp);
          strcpy(Basket.slot7,temp);
           strcpy(Basket.slot8,temp);
            strcpy(Basket.slot9,temp);
             strcpy(Basket.slot10,temp);
              strcpy(Basket.slot11,temp);
               strcpy(Basket.slot12,temp);


}
else
    fread (&Basket,sizeof(struct BasketballCourtC),1,basket);

fclose(basket);

 FILE * bad;
if ((bad=fopen("badmintonstatus.dat","rb"))==NULL)
{
    char temp[50]={"空闲"};
    strcpy(Badminton.slot1,temp);
     strcpy(Badminton.slot2,temp);
      strcpy(Badminton.slot3,temp);
       strcpy(Badminton.slot4,temp);
        strcpy(Badminton.slot5,temp);
         strcpy(Badminton.slot6,temp);
          strcpy(Badminton.slot7,temp);
           strcpy(Badminton.slot8,temp);
            strcpy(Badminton.slot9,temp);
             strcpy(Badminton.slot10,temp);
              strcpy(Badminton.slot11,temp);
               strcpy(Badminton.slot12,temp);


}
else
    fread (&Badminton,sizeof(struct BadmintonCourtA),1,bad);
    fclose(bad);

     FILE * ten;
if ((ten=fopen("tennisstatus.dat","rb"))==NULL)
{
    char temp[50]={"空闲"};
    strcpy(Tabletennis.slot1,temp);
     strcpy(Tabletennis.slot2,temp);
      strcpy(Tabletennis.slot3,temp);
       strcpy(Tabletennis.slot4,temp);
        strcpy(Tabletennis.slot5,temp);
         strcpy(Tabletennis.slot6,temp);
          strcpy(Tabletennis.slot7,temp);
           strcpy(Tabletennis.slot8,temp);
            strcpy(Tabletennis.slot9,temp);
             strcpy(Tabletennis.slot10,temp);
              strcpy(Tabletennis.slot11,temp);
               strcpy(Tabletennis.slot12,temp);


}
else
    fread (&Tabletennis,sizeof(struct TableTennisCourtB),1,ten);
    fclose(bad);
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

basketballcourt()
{
    system("cls");
     int backmenu;
    printf("\t=======================================================\n");
    printf("\t||         运动场馆预定管理系统 篮球场状态           ||\n");
    printf("\t||                                                   ||\n");
    printf("\t||           早上10.00-早上11.00：%s               ||\n",Basket.slot1);
    printf("\t||           早上11.00-早上12.00：%s               ||\n",Basket.slot2);
    printf("\t||           中午12.00-下午13.00：%s               ||\n",Basket.slot3);
    printf("\t||           下午13.00-下午14.00：%s               ||\n",Basket.slot4);
    printf("\t||           下午14.00-下午15.00：%s               ||\n",Basket.slot5);
    printf("\t||           下午15.00-下午16.00：%s               ||\n",Basket.slot6);
    printf("\t||           下午16.00-下午17.00：%s               ||\n",Basket.slot7);
    printf("\t||           下午17.00-傍晚18.00：%s               ||\n",Basket.slot8);
    printf("\t||           傍晚18.00-晚上19.00：%s               ||\n",Basket.slot9);
    printf("\t||           晚上19.00-晚上20.00  %s               ||\n",Basket.slot10);
    printf("\t||           晚上20.00-晚上21.00：%s               ||\n",Basket.slot11);
    printf("\t||           晚上21.00-晚上22.00：%s               ||\n",Basket.slot12);
    printf("\t||                 <1> 返回主页面                    ||\n");
    printf("\t=======================================================\n");
 printf("\n\n\n");
    printf("\n:");
    scanf("%d",&backmenu);
    start_screen();


}
tabletenniscourt()
{
    system("cls");
    int backmenu;
    printf("\t=======================================================\n");
    printf("\t||         运动场馆预定管理系统 乒乓球场状态         ||\n");
    printf("\t||                                                   ||\n");
    printf("\t||           早上10.00-早上11.00：%s               ||\n",Tabletennis.slot1);
    printf("\t||           早上11.00-早上12.00：%s               ||\n",Tabletennis.slot2);
    printf("\t||           中午12.00-下午13.00：%s               ||\n",Tabletennis.slot3);
    printf("\t||           下午13.00-下午14.00：%s               ||\n",Tabletennis.slot4);
    printf("\t||           下午14.00-下午15.00：%s               ||\n",Tabletennis.slot5);
    printf("\t||           下午15.00-下午16.00：%s               ||\n",Tabletennis.slot6);
    printf("\t||           下午16.00-下午17.00：%s               ||\n",Tabletennis.slot7);
    printf("\t||           下午17.00-傍晚18.00：%s               ||\n",Tabletennis.slot8);
    printf("\t||           傍晚18.00-晚上19.00：%s               ||\n",Tabletennis.slot9);
    printf("\t||           晚上19.00-晚上20.00  %s               ||\n",Tabletennis.slot10);
    printf("\t||           晚上20.00-晚上21.00：%s               ||\n",Tabletennis.slot11);
    printf("\t||           晚上21.00-晚上22.00：%s               ||\n",Tabletennis.slot12);
    printf("\t||                 <1> 返回主页面                    ||\n");
    printf("\t=======================================================\n");
    printf("\n\n\n");
    printf("\n:");
    scanf("%d",&backmenu);
    start_screen();
}
badmintoncourt()
{
       system("cls");
       int backmenu;
    printf("\t=======================================================\n");
    printf("\t||         运动场馆预定管理系统 羽毛球场状态         ||\n");
    printf("\t||                                                   ||\n");
    printf("\t||           早上10.00-早上11.00：%s               ||\n",Badminton.slot1);
    printf("\t||           早上11.00-早上12.00：%s               ||\n",Badminton.slot2);
    printf("\t||           中午12.00-下午13.00：%s               ||\n",Badminton.slot3);
    printf("\t||           下午13.00-下午14.00：%s               ||\n",Badminton.slot4);
    printf("\t||           下午14.00-下午15.00：%s               ||\n",Badminton.slot5);
    printf("\t||           下午15.00-下午16.00：%s               ||\n",Badminton.slot6);
    printf("\t||           下午16.00-下午17.00：%s               ||\n",Badminton.slot7);
    printf("\t||           下午17.00-傍晚18.00：%s               ||\n",Badminton.slot8);
    printf("\t||           傍晚18.00-晚上19.00：%s               ||\n",Badminton.slot9);
    printf("\t||           晚上19.00-晚上20.00  %s               ||\n",Badminton.slot10);
    printf("\t||           晚上20.00-晚上21.00：%s               ||\n",Badminton.slot11);
    printf("\t||           晚上21.00-晚上22.00：%s               ||\n",Badminton.slot12);
    printf("\t||                 <1> 返回主页面                    ||\n");
    printf("\t=======================================================\n");
    printf("\n\n\n");
    printf("\n:");
    scanf("%d",&backmenu);
    start_screen();

}



void forgot_password()
{

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
    printf("\t     %d     %d  %s       %d         %s               %d        \n",j,User[j].StudentID,User[j].Full_name,User[j].Class,User[j].tele,User[j].Pin);

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
    printf("\t|| 选项     学号     名字      班级        电话号码                     密码                   || \n");

}


user_interface()
{

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
    fwrite (&Badminton,sizeof (struct BadmintonCourtA),1,badm);
    fclose(badm);


FILE * ball;
    ball=fopen("basketballstatus.dat","wb");
    fwrite (&Basket,sizeof (struct BasketballCourtC),1,ball);
    fclose(ball);


    FILE * tenn;
    tenn=fopen("tennisstatus.dat","wb");
    fwrite (&Tabletennis,sizeof (struct TableTennisCourtB),1,tenn);
    fclose(tenn);

        exit(0);

}
