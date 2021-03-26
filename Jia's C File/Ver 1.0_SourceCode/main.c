#include "allhead.h"
#include "inputdata.c"
#include "file_operate.c"
#include "function.c"
#include "interface.c"
#include "rate_operate.c"

int main()
{
    Head list;
    int select;
    char c;
    GetMonth();//ʶ��ǰ�·�
    Load_rate();//��������
    Loading();//���ؽ���
    system("color 3f");
    list=(Node *)malloc(sizeof(Node));
    if(!list)
    {
        printf("\n���ļ������ڴ�ʱ�����޷���ϵͳ��");
        system("pause >nul");
        return 0;
    }
    list->next=NULL;
    Load_userdata(list);
    while(1)
    {
        Menu();
        printf("\n  ������1-13���в�����");
        scanf("%d",&select);

        if(select==12)
        {
            if(savemark==1)
            {
                printf("\n�Ƿ񱣴��ļ�?|y or n|:");
                scanf("%s",&c);
                if(c=='y'||c=='Y')
                {
                    Save_userdata(list);
                    printf("\nллʹ�ã�\n");
                    system("pause >nul");
                    exit(0);
                }

            }
            else
            {
                printf("\nллʹ�ã�\n");
                system("pause >nul");
                break;
            }
        }
        switch(select)
        {
        case 1:
            AddUser(list);
            break;
        case 2:
            DeleteUser(list);
            break;
        case 3:
            FindUser(list);
            break;
        case 4:
            ModifyUser(list);
            break;
        case 5:
            InsertUser(list);
            break;
        case 6:
            SortNormal(list);
            break;
        case 7:
            ListAllUser(list);
            break;
        case 8:
            Change_normal_rate();
            break;
        case 9:
            Change_regular_rate();
            break;
        case 10:
            Help();
            break;
        case 11:
            Save_userdata(list);
            break;
        default:break;
        }
    }
    return 0;
}
