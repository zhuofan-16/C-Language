#include "all.h"
#include "inputdata.c"
#include "file_operate.c"
#include "function.c"
#include "interface.c"
#include "rate_operate.c"

int main()
{
    Head list;
    int select;
    char ch;
    load_rate();//��������
    Loading();//���ؽ���
    system("color 3f");
    list=(Node *)malloc(sizeof(Node));
    if(!list)
    {
        printf("\n�ڴ����ʧ�ܣ�");
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
            if(saveflag==1)
            {
                getchar();
                printf("\n�Ƿ񱣴��ļ�?(y/n):");
                scanf("%s",&ch);
                if(ch=='y'||ch=='Y')
                    Save_userdata(list);
            }
            else
            {
                printf("\nллʹ�ã�\n");
                getchar();
                break;
            }
        }
        switch(select)
        {
        case 1:
            AddUser(list);
            break;
        case 2:
            Delete(list);
            break;
        case 3:
            Find(list);
            break;
        case 4:
            Modify(list);
            break;
        case 5:
            Insert(list);
            break;
        case 6:
            Sort(list);
            break;
        case 7:
            DisplayAll(list);
            break;
        case 8:
            change_normal_rate();
            break;
        case 9:
            change_regular_rate();
            break;
        case 10:
            Help();
            break;
        case 11:
            Save_userdata(list);
            break;
        }
    }
    return 0;
}


