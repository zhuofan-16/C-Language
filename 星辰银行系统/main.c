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
    printf ( "��ǰʱ��Ϊ: %s", asctime (timeinfo) );
}
void start_up()
{

        system("cls");
    printf("*****************************************************\n");
    printf("�ǳ�����ϵͳ\n");
    current_time();
    printf("\n��Ϊ�лڣ��������Ǵ���  ��Ϊ���Σ����Էܲ�����");
    printf("\n��������ϵͳ�����Ժ�...\n");
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
    printf("�ǳ�����ϵͳ\n");
    printf("��ӭ����,%s   \n",user[i].real_name);
    current_time();
    printf("��Ŀǰ���Ϊ�� %d \n",user[i].saving);
    printf("�����������ʲô����:\n");
    printf("1.���");
    printf("   2.ȡ��");
    printf("   3.����ת��");
    printf("\n4.����ת��");
    printf("   5.������������\n");

    printf("*****************************************************\n");
    printf("���ѡ��:");
    scanf("%d",&main_choice);


}
    void login_ui()
    {
        int i=0;
        int n=5;
char user2[50];
int pin1;
    printf("*****************************************************\n");
    printf("���ã���ӭ���� �ǳ����е�¼����\n");
    current_time();
    printf("\n��Ϊ�лڣ��������Ǵ���  ��Ϊ���Σ����Էܲ�����\n");
        printf("*****************************************************\n");
        printf("����������û���:");
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
                printf("�û�������������");
            Sleep(3000);
            system("cls");
                start_screen();
            }
            else
                {

        printf("��ӭ���� %s,\n�������������룺",user[i].real_name);
        scanf("%d",&pin1);
        if (strcmp(pin1,user[i].pin_number)!=0)
            {
                printf("������������µ�¼");
                Sleep(3000);
                login_ui();

            }else
                {


                printf("������ȷ,��¼�ɹ�");
                Sleep(3000);

            main_ui();
            }

    }
    }


void register_screen()
{
    i=i+1;
    printf("���ã���ӭ���� �ǳ�����ע��ҳ��\n");
    printf("�������������:");
    scanf("%s",user[i].real_name);
    system("cls");
    printf("����Ա���M/F:");
    scanf("%s",user[i].sex);
    system("cls");
    printf("лл������������һ���û���:");
     scanf("%s",user[i].userid);
     system("cls");
     printf("�����������������գ���ʽΪDDMMYYYY):");
     scanf("%d",&user[i].birthday);
     system("cls");
     printf("���ڣ��봴�����6λ��PIN:");
     scanf("%d",&user[i].pin_number);
     system("cls");
     printf("��������һ��:");
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
    printf("����ɹ�����ӭ����\n");
    printf("��ϲ��ÿ���������500");
    user[i].saving=500;
    Sleep(3000);
    system("cls");
     login_ui();

     }     else
     {
         system("cls");

         printf("�������벻��ͬ������������\n");
         printf("���ڣ��봴�����6λ��PIN");
     scanf("%d",&user[i].pin_number);
     system("cls");
     printf("��������һ��");
     scanf("%d",&user[i].pin_number_confirm);


     }


}
void start_screen()
{
    int option;
        printf("*****************************************************\n");
    printf("�ǳ�����ϵͳ\n");
    current_time();
    printf("\n��Ϊ�лڣ��������Ǵ���  ��Ϊ���Σ����Էܲ�����\n");
     printf("*****************************************************\n\n");
    printf("\n1.�������ǵ����пͻ�����¼�˺�");
    printf("             2.�����¿ͻ���ע���˺�\n");
    printf("3.�����ڲ���̨");
    printf("                             4.�˳�����Ӧ��\n");
    printf("���ѡ��:");
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
