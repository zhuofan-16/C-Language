#include <stdio.h>
#include <stdlib.h>
int N;         //�����ҵڶ���Project
int i;
struct User   //�����û�Ⱥ��Ϣ
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

        system("color f0"); //������ɫΪ�ף��ֺ�
 FILE * value;              //��ʼ��ȡ����
        if ((value=fopen("valuei.dat","rb"))==NULL)
        {
    int i=1;
    int N=1;
        }
        else
            fread(&N,sizeof(int),1,value);
            printf("�˶�����Ԥ������ϵͳ ��ע������:%d",N);
            Sleep(3000);
            system("cls");

            start_up(); //������ҳ��
            start_screen(); //����ʼҳ��
}


void start_up()  //��ʼҳ��
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
    char temp[50]={"����"};
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
    char temp[50]={"����"};
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
    char temp[50]={"����"};
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
    printf("\t||         ��ӭʹ���˶�����Ԥ������ϵͳ!             ||\n");
    printf("\t||                                                   ||\n");
    printf("\t||         ����ʱ�䣺����10.00-����10.00             ||\n");
    printf("\t||                                                   ||\n");
    printf("\t||                                                   ||\n");
    printf("\t||                                                   ||\n");
    printf("\t||                                                   ||\n");
    printf("\t=======================================================\n");
    printf("\n\n\n\n\n\n");
    printf("��������ϵͳ�����Ժ�...\n");
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
    printf("\t||             ��ӭʹ���˶�����Ԥ������ϵͳ!         ||\n");
    printf("\t||             ����ʱ�䣺����10.00-����10.00         ||\n");
    show_time();
    printf("\t||                 <1> ��¼Ԥ��ϵͳ                  ||\n");
    printf("\t||                 <2> ע���û�                      ||\n");
    printf("\t||                 <3> �鿴���ؿ������              ||\n");
    printf("\t||                 <4> �鿴���۸�                  ||\n");
    printf("\t||                 <5> ��������                      ||\n");
    printf("\t||                 <6> ���������                    ||\n");
    printf("\t||                 <7> �˳�                          ||\n");
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
        printf("������������ԣ�");
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
    printf("\t||         �˶�����Ԥ������ϵͳ ��¼ҳ��             ||\n");
    printf("\t||                                                   ||\n");
    printf("\t||                ����������ѧ��:                    ||\n");
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
    printf("\t||         �˶�����Ԥ������ϵͳ ��¼ҳ��             ||\n");
    printf("\t||                                                   ||\n");
    printf("\t||         û���ҵ�����û�����ע������            ||\n");
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
    printf("\t||         �˶�����Ԥ������ϵͳ ��¼ҳ��             ||\n");
    printf("\t||                                                   ||\n");
    printf("\t||                  ��������������                   ||\n");
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
    printf("\t||         �˶�����Ԥ������ϵͳ ��¼ҳ��             ||\n");
    printf("\t||                                                   ||\n");
    printf("\t||                     �������                      ||\n");
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
    printf("\t||         �˶�����Ԥ������ϵͳ ��¼ҳ��             ||\n");
    printf("\t||                                                   ||\n");
    printf("\t||                    ��¼�ɹ�                       ||\n");
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
    printf("\t||         �˶�����Ԥ������ϵͳ ע��ҳ��             ||\n");
    printf("\t||                                                   ||\n");
    printf("\t||                ����������ѧ��:                    ||\n");
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
    printf("\t||         �˶�����Ԥ������ϵͳ ע��ҳ��             ||\n");
    printf("\t||                                                   ||\n");
    printf("\t||              ��������������:                      ||\n");
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
    printf("\t||         �˶�����Ԥ������ϵͳ ע��ҳ��             ||\n");
    printf("\t||                                                   ||\n");
    printf("\t||              ���������İ༶:                      ||\n");
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
    printf("\t||         �˶�����Ԥ������ϵͳ ע��ҳ��             ||\n");
    printf("\t||                                                   ||\n");
    printf("\t||            ���������ĵ绰����:                    ||\n");
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
    printf("\t||         �˶�����Ԥ������ϵͳ ע��ҳ��             ||\n");
    printf("\t||                                                   ||\n");
    printf("\t||            �봴��һ����λ������:                  ||\n");
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
    printf("\t||         �˶�����Ԥ������ϵͳ ע��ҳ��             ||\n");
    printf("\t||                                                   ||\n");
    printf("\t||                 ��������һ��:                     ||\n");
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
    printf("\t||         �˶�����Ԥ������ϵͳ ע��ҳ��             ||\n");
    printf("\t||                                                   ||\n");
    printf("\t||          �������벻��ͬ��������ע��               ||\n");
    printf("\t||                 ����������ҳ�棡                  ||\n");
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
    printf("\t||         �˶�����Ԥ������ϵͳ ע��ҳ��             ||\n");
    printf("\t||                                                   ||\n");
    printf("\t||                   �����ɹ�                        ||\n");
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
    printf("\t||         �˶�����Ԥ������ϵͳ ���ز�ѯ             ||\n");
    printf("\t||                                                   ||\n");
    printf("\t||          ��ѡ����ҪҪ��ѯ�ĳ���                   ||\n");
    printf("\t||          <1> ��ë��A                            ||\n");
    printf("\t||          <2> ƹ����B                            ||\n");
    printf("\t||          <3> ����C                              ||\n");
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
    printf("\t||         �˶�����Ԥ������ϵͳ ����״̬           ||\n");
    printf("\t||                                                   ||\n");
    printf("\t||           ����10.00-����11.00��%s               ||\n",Basket.slot1);
    printf("\t||           ����11.00-����12.00��%s               ||\n",Basket.slot2);
    printf("\t||           ����12.00-����13.00��%s               ||\n",Basket.slot3);
    printf("\t||           ����13.00-����14.00��%s               ||\n",Basket.slot4);
    printf("\t||           ����14.00-����15.00��%s               ||\n",Basket.slot5);
    printf("\t||           ����15.00-����16.00��%s               ||\n",Basket.slot6);
    printf("\t||           ����16.00-����17.00��%s               ||\n",Basket.slot7);
    printf("\t||           ����17.00-����18.00��%s               ||\n",Basket.slot8);
    printf("\t||           ����18.00-����19.00��%s               ||\n",Basket.slot9);
    printf("\t||           ����19.00-����20.00  %s               ||\n",Basket.slot10);
    printf("\t||           ����20.00-����21.00��%s               ||\n",Basket.slot11);
    printf("\t||           ����21.00-����22.00��%s               ||\n",Basket.slot12);
    printf("\t||                 <1> ������ҳ��                    ||\n");
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
    printf("\t||         �˶�����Ԥ������ϵͳ ƹ����״̬         ||\n");
    printf("\t||                                                   ||\n");
    printf("\t||           ����10.00-����11.00��%s               ||\n",Tabletennis.slot1);
    printf("\t||           ����11.00-����12.00��%s               ||\n",Tabletennis.slot2);
    printf("\t||           ����12.00-����13.00��%s               ||\n",Tabletennis.slot3);
    printf("\t||           ����13.00-����14.00��%s               ||\n",Tabletennis.slot4);
    printf("\t||           ����14.00-����15.00��%s               ||\n",Tabletennis.slot5);
    printf("\t||           ����15.00-����16.00��%s               ||\n",Tabletennis.slot6);
    printf("\t||           ����16.00-����17.00��%s               ||\n",Tabletennis.slot7);
    printf("\t||           ����17.00-����18.00��%s               ||\n",Tabletennis.slot8);
    printf("\t||           ����18.00-����19.00��%s               ||\n",Tabletennis.slot9);
    printf("\t||           ����19.00-����20.00  %s               ||\n",Tabletennis.slot10);
    printf("\t||           ����20.00-����21.00��%s               ||\n",Tabletennis.slot11);
    printf("\t||           ����21.00-����22.00��%s               ||\n",Tabletennis.slot12);
    printf("\t||                 <1> ������ҳ��                    ||\n");
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
    printf("\t||         �˶�����Ԥ������ϵͳ ��ë��״̬         ||\n");
    printf("\t||                                                   ||\n");
    printf("\t||           ����10.00-����11.00��%s               ||\n",Badminton.slot1);
    printf("\t||           ����11.00-����12.00��%s               ||\n",Badminton.slot2);
    printf("\t||           ����12.00-����13.00��%s               ||\n",Badminton.slot3);
    printf("\t||           ����13.00-����14.00��%s               ||\n",Badminton.slot4);
    printf("\t||           ����14.00-����15.00��%s               ||\n",Badminton.slot5);
    printf("\t||           ����15.00-����16.00��%s               ||\n",Badminton.slot6);
    printf("\t||           ����16.00-����17.00��%s               ||\n",Badminton.slot7);
    printf("\t||           ����17.00-����18.00��%s               ||\n",Badminton.slot8);
    printf("\t||           ����18.00-����19.00��%s               ||\n",Badminton.slot9);
    printf("\t||           ����19.00-����20.00  %s               ||\n",Badminton.slot10);
    printf("\t||           ����20.00-����21.00��%s               ||\n",Badminton.slot11);
    printf("\t||           ����21.00-����22.00��%s               ||\n",Badminton.slot12);
    printf("\t||                 <1> ������ҳ��                    ||\n");
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
    printf("\t|| ��Ŀ���ƣ��˶�����Ԥ������ϵͳ                    ||\n");
    printf("\t|| ����Ŀ���ߣ���׿��| 2100746                       ||\n");
    printf("\t|| ��Ŀ�汾��V1.01                                   ||\n");
    printf("\t|| ����Ŀ���ԣ�C����                                 ||\n");
    printf("\t|| ��Ŀ��ɫ���˶����ع����û���Ϣ�������ù���    ||\n");
    printf("\t|| ʹ�ñ�������Ҫ���֣��༶�����֤����ʼʱ��Ҫѡ��2 ||\n");
    printf("\t|| ��ע��һ���˺ţ�Ȼ��ʹ�ã���Ϣ��һֱ�����棩      ||\n");
    printf("\t||                 <1> ������ҳ��                    ||\n");
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

    printf("\t||                                    <1> ������ҳ��                                             ||\n");
    printf("\t==================================================================================================\n");
    printf("\n\n");
    printf("\n:");
    scanf("%d",&backmenu);
    start_screen();



}

void nametitle()
{
    printf("\t|| ѡ��     ѧ��     ����      �༶        �绰����                     ����                   || \n");

}


user_interface()
{

}



void venue_pricing()
 {
     int backmenu;
    system("cls");
    printf("\t=======================================================\n");
    printf("\t||         �˶�����Ԥ������ϵͳ ���۸�             ||\n");
    printf("\t||          �������۸������ʱ�ζ��Ķ�             ||\n");
    printf("\t||              ����Ϊ��ͬʱ�εļ۸�               ||\n");
    printf("\t||                                                   ||\n");
    printf("\t||           ����10.00-����11.00����%.2f            ||\n",Cost.slot1);
    printf("\t||           ����11.00-����12.00����%.2f            ||\n",Cost.slot2);
    printf("\t||           ����12.00-����13.00����%.2f            ||\n",Cost.slot3);
    printf("\t||           ����13.00-����14.00����%.2f            ||\n",Cost.slot4);
    printf("\t||           ����14.00-����15.00����%.2f            ||\n",Cost.slot5);
    printf("\t||           ����15.00-����16.00����%.2f            ||\n",Cost.slot6);
    printf("\t||           ����16.00-����17.00����%.2f            ||\n",Cost.slot7);
    printf("\t||           ����17.00-����18.00����%.2f            ||\n",Cost.slot8);
    printf("\t||           ����18.00-����19.00����%.2f            ||\n",Cost.slot9);
    printf("\t||           ����19.00-����20.00  ��%.2f            ||\n",Cost.slot10);
    printf("\t||           ����20.00-����21.00����%.2f            ||\n",Cost.slot11);
    printf("\t||           ����21.00-����22.00����%.2f            ||\n",Cost.slot12);
    printf("\t||                 <1> ������ҳ��                    ||\n");
    printf("\t=======================================================\n");
    printf("\n\n\n");
    printf("\n:");
    scanf("%d",&backmenu);
    start_screen();


 }

//ʱ����ʾ�����������ƣ�
void show_time()
{
    char str[100];
    time_t t;
    struct tm *lt;
    t = time(NULL);
    lt = localtime(&t);
    strftime(str,100,"%Y-%m-%d  %H:%M:%S ",lt);
    printf("\t||             ��ǰʱ�䣺%s       ||\n",str);
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
