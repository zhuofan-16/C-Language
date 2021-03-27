Node *Locate(Head list,char findstr[],char name_uname[])//
{
    Node *p;
    if(strcmp(name_uname,"name")==0)
    {
        p=list->next;
        while(p)
        {
            if(strcmp(p->data.realname,findstr)==0)
                return p;
            p=p->next;
        }
    }
    else if(strcmp(name_uname,"uname")==0)
    {
        p=list->next;
        while(p)
        {
            if(strcmp(p->data.username,findstr)==0)
                return p;
            p=p->next;
        }
    }
    return NULL;
}




void ListAllUser(Head list)//输出所有用户信息函数
{
    Node *p;
    p=list->next;
    if(p==NULL)
    {
        printf("\n没有发现用户信息!\n");
        return;
    }
    system("cls");
    printf("\n");
    PrintDataTitle();
    while(p)
    {
        PrintUserData(p);
        p=p->next;
    }
    system("pause >nul");
}

void AddUser(Head list)//添加用户信息函数
{
    Node *p,*s,*r;
    char c,mark=0,uname[10];
    r=list;
    s= list ->next;
    system("cls");
    while(r->next!=NULL)
        r=r->next;
    while(1)
    {
        Inputdata(uname,12,"请输入用户名    :");
        mark=0;

        if(strcmp(uname,"0")==0)
        {
            return;
        }
        s=list->next;
        while(s)
        {
            if(strcmp(s->data.username,uname)==0)
            {
                mark=1;
                break;
            }
            s=s->next;
        }
        if(mark==1)
        {
            printf("用户名 %s 已存在，是否重新输入?|y or n|:\n",uname);
            scanf("%s",&c);
            if(c=='y'||c=='Y')
                continue;
            else return;
        }
        else break;
    }
    p=(Node *)malloc(sizeof(Node));//申请内存
    if(!p)
    {
        printf("\n分配内存时出错！\n");
        return;
    }
    strcpy(p->data.username,uname);
    Inputdata(p->data.realname,12, "用户姓名为      :");
    Inputdata(p->data.password,12, "用户登陆密码为  :");
    p->data.normal_balance=0.0;
    p->data.regular_balance=0.0;
    p->data.regular_year=0;
    p->data.account=889900001+RATE.first_account++;
    printf  ("成功生成用户账号：%lld \n\n",p->data.account);
    p->data.rank=0;
    p->next=NULL;
    r->next=p;
    r=p;
    savemark=1;
    system("pause >nul");
    return;
}

void UserLogin(Head list)
{
    Node *p;
    char u_name[12];
    char pswd[12];
    p=list->next;
    if(p==NULL)
    {
        printf("\n目前没有用户注册!\n");
        Sleep(3000);
        return;
    }
    system("cls");
    printf("请输入用户名：\n");
    scanf("%s",u_name);
    printf("请输入密码：\n");
    scanf("%s",pswd);
    printf("\n");
    while(p)
    {
        if(strcmp(p->data.password,pswd)==0&&strcmp(p->data.username,u_name)==0)
            UsersOper(p,pswd,u_name,list);
        p=p->next;
    }
}


void InsertUser(Head list)//插入用户信息
{
    Head a,b,newnode;
    char c,str[12];
    int mark=0;
    b=list->next;
    system("cls");
    while(1)
    {
        Inputdata(str,10,"输入用户名：\n");
        mark=1;
        b=list->next;
        while(b)
        {
            if(strcmp(b->data.username,str)!=0)
            {
                mark=1;
                break;
            }
            b=b->next;
        }
        if(mark==0)
            break;
        else
        {
            printf("\n用户名 %s 已存在，是否重新输入?|y or n|：",str);
            scanf("%s",&c);
            if(c=='n'||c=='N')
                return;
            else
                continue;

        }
    }
    newnode = (Node*)malloc(sizeof(Node));
    if(!newnode)
    {
        printf("\n 申请内存分配失败！");
        system("pause >nul");
        return;
    }
    Inputdata(newnode->data.username,12,    "用户名        :");
    Inputdata(newnode->data.realname,12,    "姓名          :");
    Inputdata(newnode->data.password,12,    "用户登陆密码为:");
    newnode->data.normal_balance=InputMoney ("活期存款为    :");
    newnode->data.regular_balance=InputMoney("定期存款为    :");
    printf                                   ("定期年限为    :");
    scanf("%d",&newnode->data.regular_year);
    while(newnode->data.regular_year)
    {
        if(newnode->data.regular_year>=0&&newnode->data.regular_year<=5)
        {
            break;
        }
        else
        {
            printf("\n定期年限为1-5年,请重新输入\n");
            system("pause >nul");
            printf("定期年限为:");
            scanf("%d",&newnode->data.regular_year);
        }

    }
    newnode->data.account=889900001+RATE.first_account++;
    printf("生成用户账号为:%lld \n",newnode->data.account);
    newnode->data.rank=0;
    system("pause >nul");
    newnode->next=NULL;
    savemark=1;

    a=list->next;
    while(1)
    {
        if(strcmp(a->data.username,str)==0)
        {
            newnode->next=a->next;
            a->next=newnode;
            break;
        }
        a=a->next;
    }
    ListAllUser(list);
    printf("\n\n");
    system("pause >nul");
}

void FindUser(Head list)//查找用户函数
{
    int select;
    char search[16];
    Node *p;
    if(!list->next)
    {
        printf("\n没有发现用户信息！\n");
        system("pause >nul");
        return;
    }
    system("cls");
    printf("\n1:按用户名查询\n2:按姓名查询\n");
    printf("请选择查询方式:\n");
    scanf("%d",&select);
    if(select==1)
    {
        Inputdata(search,12,"输入已存在的用户名：\n");
        p=Locate(list,search,"uname");
    }
    else if(select==2)
    {
        Inputdata(search,12,"输入已存在的姓名：");
        p=Locate(list,search,"name");
    }
    if(p)
    {
        PrintDataTitle();
        PrintUserData(p);
        printf("按任意键返回...");
        system("pause >nul");
    }
    else
    {
        printf("用户信息不存在!");
        system("pause >nul");
    }
}

void DeleteUser(Head list)//删除用户信息
{
    int choice;
    Node *p,*r;
    char findstr[16];
    if(!list->next)
    {
        printf("\n没有发现用户信息！\n");
        system("pause >nul");
        return;
    }
    system("cls");
    printf("\n1:按用户名删除 \n2:按姓名删除\n");
    printf("请选择\n");
    scanf("%d",&choice);
    if(choice==1)
    {
        Inputdata(findstr,12,"输入一个已有的用户名：");
        p=Locate(list,findstr,"uname");
    }
    else if(choice==2)
    {
        Inputdata(findstr,12,"输入一个已有姓名：");
        p=Locate(list,findstr,"name");
    }
    if(p!=NULL)
    {
        r=list;
        while(r->next!=p)
            r=r->next;
        r->next=p->next;
        free(p);
        printf("\n删除成功！");
        system("pause >nul");
        savemark=1;
    }
}

//void ModifyUser(Head list)//修改用户信息
//{
//    Node *p;
//    char findstr[16];
//    int choice;
//    if(!list->next)
//    {
//        printf("\n没有发现用户信息！");
//        system("pause >nul");
//        return;
//    }
//    system("cls");
//    printf("请输入需要修改的内容：\n\n");
//    printf("\t1.修改用户密码\n");
//    printf("\t2.修改用户活期存款\n");
//    printf("\t3.修改用户定期存款或定期年限\n");
//    printf("\t4.返回\n\n");
//    scanf("%d",&choice);
//    if(choice==4)
//        return;
//    switch(choice)
//    {
//    case 1:
//        ModifyPswd(p,pswd,list);
//        break;
//    case 2:
//        ModifyNormal(p,pswd,list);
//        break;
//    case 3:
//        ModifyRegular(p,,list);
//        break;
//    }
//}

void SortNormal(Head list)//用活期存款排序
{
    int i=1;
    Head p1;//为原链表剩下用于直接插入排序的节点头指针
    Head p2;    //临时指针变量：插入节点
    Head p3;    //临时指针变量
    Head p4;    //临时指针变量
    if(list -> next==NULL) return;
    p1=list->next;
    list->next=NULL;
    while(p1!=NULL)
    {
        p2=p1;
        p1=p1->next;
        p2->next=NULL;
        p3=list;
        if(p3->next==NULL)
        {
            p3->next=p2;
        }
        else
        {
            p4=p3->next;
            while(p4!=NULL&&p2->data.normal_balance<p4->data.normal_balance)
            {
                p3=p3->next;
                p4=p3->next;
            }

            p2->next=p3->next;
            p3->next=p2;
        }
    }
    p3=list->next;
    while(p3!=NULL)
    {
        p3->data.rank=i++;
        p3=p3->next;
    }
    ListAllUser(list);
    savemark=1;
}


