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
    load_rate();//加载利率
    Loading();//加载界面
    system("color 3f");
    list=(Node *)malloc(sizeof(Node));
    if(!list)
    {
        printf("\n内存分配失败！");
        return 0;
    }
    list->next=NULL;
    Load_userdata(list);

    while(1)
    {
        Menu();
        printf("\n  请输入1-13进行操作：");
        scanf("%d",&select);

        if(select==12)
        {
            if(saveflag==1)
            {
                getchar();
                printf("\n是否保存文件?(y/n):");
                scanf("%s",&ch);
                if(ch=='y'||ch=='Y')
                    Save_userdata(list);
            }
            else
            {
                printf("\n谢谢使用！\n");
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


