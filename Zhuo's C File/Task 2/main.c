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
   char ic[50];
}user[500]={};



int main()  //Main
{
    int a;

        system("color f0"); //������ɫΪ�ף��ֺ�
 FILE * value;              //��ʼ��ȡ����
        if ((value=fopen("valuei.dat","rb"))==NULL)
        {
    int i=0;
    int N=0;
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
    printf("\t||         ��ӭʹ���˶�����Ԥ������ϵͳ!             ||\n");
    printf("\t||                                                   ||\n");
    printf("\t||                                                   ||\n");
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
    printf("\t||                                                   ||\n");
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
        printf("������������ԣ�");
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
