#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <time.h>
int N;
int i;
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
    float saving;

}user[50]={};

void current_time()
{
  time_t rawtime;
  struct tm * timeinfo;

  time ( &rawtime );
  timeinfo = localtime ( &rawtime );
    printf ( "Current Time: %s", asctime (timeinfo) );
}
void start_up()
{
    FILE * userinfo;
userinfo=fopen("encryptdata.dat","rb");
for (i=0;i<N;i++)
{
    fread (&user[i],sizeof(struct bankuser),1,userinfo);
}

fclose(userinfo);

        system("cls");
    printf("*****************************************************\n");
    printf("XC Banking System\n");
    current_time();
    printf("\n Neighbours First, Bankers Second");
    printf("\n System loading,please wait...\n");
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
    float temp_add_amount;
     system("cls");
    printf("*****************************************************\n");
    printf("XC Banking System\n");
    printf("Welcome,%s   \n",user[i].real_name);
    current_time();
    printf("Your current balance is $ %.2f \n",user[i].saving);
    printf("Deposit Amount:\n");

    printf("*****************************************************\n");
    printf(":\n");
    scanf("%f",&temp_add_amount);
    user[i].saving=user[i].saving+temp_add_amount;
    printf("Deposit Successful！Your current balance is $ %.2f \n",user[i].saving);
    Sleep(3000);
    main_ui();


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
    printf("XC Banking System\n");
    printf("Welcome,%s   \n",user[i].real_name);
    current_time();
    printf("Your current balance is￥ %.2f \n",user[i].saving);
    printf("What transaction do you want to do today:\n");
    printf("1.Deposit");
    printf("   2.Withdraw");
    printf("   3.Local Transfer");
    printf("\n4.Overseas Transfer");
    printf("   5.Enable Overseas Withdraw Function");
     printf("   6.Logout\n");

    printf("*****************************************************\n");
    printf("Your Choice:");
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
            printf("Invalid option，please retry");
            Sleep(3000);
            main_ui();

    }
}
    void login_ui()
    {
        int i=0;

int pin1;
char user2[50];
    printf("*****************************************************\n");
    printf("Hi，Welcome to XC Banking System Login Page\n");
    current_time();
    printf("\n Neighbours First, Bankers Second\n");
        printf("*****************************************************\n");
        printf("Enter your username:");
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
                printf("invalid username，please retry");
            Sleep(3000);
            system("cls");
                start_screen();
            }
            else
                {

        printf("Welcome %s,\n please enter your password：",user[i].real_name);
        scanf("%d",&pin1);
        if (pin1!=user[i].pin_number)
            {
                printf("Invalid password");
                Sleep(3000);
                system("cls");
                login_ui();

            }
             if (pin1==user[i].pin_number)
{

                printf("Correct password,login successful");
                Sleep(3000);
                system("cls");
                main_ui();
}
            }

    }


void register_screen()
{
    i=N;
    printf("Welcome to XC Banking System Registration Page\n");
    printf("Please enter your name:");
    scanf("%s",user[i].real_name);
    system("cls");
    printf("Your Sex M/F:");
    scanf("%s",user[i].sex);
    system("cls");
    printf("Thanks,input an username:");
     scanf("%s",user[i].userid);
     system("cls");
     printf("Enter your birthday（Format:DDMMYYYY):");
     scanf("%d",&user[i].birthday);
     system("cls");
     printf("Now,enter your 6 digit PIN:");
     scanf("%d",&user[i].pin_number);
     system("cls");
     printf("Enter your PIN again:");
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
    printf("Create successful，Welcome\n");
    Sleep(3000);
    system("cls");
    N=N+1;

     start_screen();

     }     else
     {
         system("cls");

         printf("Both attempt does not match,please retry\n");
        register_screen();

     }


}
void start_screen()
{
    int option;
        printf("*****************************************************\n");
    printf("XC Banking System\n");
    current_time();
    printf("\nNeighbours First, Bankers Second\n");
     printf("*****************************************************\n\n");
    printf("\n1.Login");
    printf("                    2.Register\n");
    printf("3.Enter admin background");
    printf("   4.Exit\n");
    printf("Your choice:");
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
        exitapp();

    }
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
        fwrite (&user[i],sizeof (struct bankuser),1,registerinfo);
        fclose( registerinfo);
        exit(0);



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

