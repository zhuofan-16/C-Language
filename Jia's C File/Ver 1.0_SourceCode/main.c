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
    GetMonth();//识别当前月份
    Load_rate();//加载利率
    Loading();//加载界面
    system("color 3f");
    list=(Node *)malloc(sizeof(Node));
    if(!list)
    {
        printf("\n给文件分配内存时出错，无法打开系统！");
        system("pause >nul");
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
            if(savemark==1)
            {
                printf("\n是否保存文件?|y or n|:");
                scanf("%s",&c);
                if(c=='y'||c=='Y')
                {
                    Save_userdata(list);
                    printf("\n谢谢使用！\n");
                    system("pause >nul");
                    exit(0);
                }

            }
            else
            {
                printf("\n谢谢使用！\n");
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
