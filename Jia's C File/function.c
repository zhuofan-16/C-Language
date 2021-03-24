Node *Locate(Head list,char findingstring[],char nameoruname[])
{
    Node *p;
    if(strcmp(nameoruname,"name")==0)
    {
        p=list->next;
        while(p)
        {
            if(strcmp(p->data.realname,findingstring)==0)
                return p;
            p=p->next;
        }
    }
    else if(strcmp(nameoruname,"uname")==0)
    {
        p=list->next;
        while(p)
        {
            if(strcmp(p->data.username,findingstring)==0)
                return p;
            p=p->next;
        }
    }
    return NULL;
}




void DisplayAll(Head list)//输出用户信息函数
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
    PrintTitle();
    while(p)
    {
        PrintData(p);
        p=p->next;
    }
    getchar();
    getchar();
}

void AddUser(Head list)//添加用户信息函数
{
    Node *p,*s,*r;
    char ch,flag=0,uname[10];
    r=list;
    s= list ->next;
    system("cls");
    while(r->next!=NULL)
        r=r->next;
    printf("可多组输入，以用户名为0结束输入\n");
    while(1)
    {
        while(1)
        {
            StringInput(uname,12,"请输入用户名    :");
            flag=0;

            if(strcmp(uname,"0")==0)
            {
                return;
            }
            s=list->next;
            while(s)
            {
                if(strcmp(s->data.username,uname)==0)
                {
                    flag=1;
                    break;
                }
                s=s->next;
            }
            if(flag==1)
            {
                getchar();
                printf("用户名 %s 已存在，是否重试?(y/n):\n",uname);
                scanf("%c",&ch);
                if(ch=='y'||ch=='Y')
                    continue;
                else return;
            }
            else break;
        }
        p=(Node *)malloc(sizeof(Node));//申请内存
        if(!p)
        {
            printf("\n内存分配失败！\n");
            return;
        }
        strcpy(p->data.username,uname);
        StringInput(p->data.realname,12, "用户姓名为      :");
        StringInput(p->data.password,12, "用户登陆密码为  :");
        p->data.normal_balance=NumberInput ("用户活期存款为  :");
        p->data.regular_balance=NumberInput("用户定期存款为  :");
        printf  ("定期存款年限为  :");
        scanf("%d",&p->data.regular_year);
        p->data.account=889900001+RATE.first_account++;
        printf  ("成功生成用户账号：%lld \n\n",p->data.account);
        p->data.rank=0;
        getchar();
        p->next=NULL;
        r->next=p;
        r=p;
        saveflag=1;
    }
    getchar();
    return;
}

void Insert(Head list)//插入用户信息
{
    Head p,v,newnode;
    char ch,num[12],s[12];
    int flag=0;
    v=list->next;
    system("cls");
    while(1)
    {
        StringInput(s,10,"在输入用户名之后插入：");
        flag=0;
        v=list->next;
        while(v)
        {
            if(strcmp(v->data.username,s)==0)
            {
                flag=1;
                break;
            }
            v=v->next;
        }
        if(flag==1)
            break;
        else
        {
            printf("\n用户名 %s 不存在，是否重试?（y/n）：",s);
            scanf("%s",&ch);
            if(ch=='y'||ch=='Y')
                continue;
            else
                return;

        }
    }
    newnode = (Node*)malloc(sizeof(Node));
    if(!newnode)
    {
        printf("\n 申请内存分配失败！");
        return;
    }
    StringInput(newnode->data.username,12,    "用户名        :");
    StringInput(newnode->data.realname,12,    "姓名          :");
    StringInput(newnode->data.password,12,    "用户登陆密码为:");
    newnode->data.normal_balance=NumberInput ("活期存款为    :");
    newnode->data.regular_balance=NumberInput("定期存款为    :");
    printf                                   ("定期年限为    :");
    scanf("%d",&newnode->data.regular_year);
    newnode->data.account=889900001+RATE.first_account++;
    printf("生成用户账号为:%lld \n",newnode->data.account);
    newnode->data.rank=0;
    getchar();
    newnode->next=NULL;
    saveflag=1;

    p=list->next;
    while(1)
    {
        if(strcmp(p->data.username,s)==0)
        {
            newnode->next=p->next;
            p->next=newnode;
            break;
        }
        p=p->next;
    }
    DisplayAll(list);
    printf("\n\n");
    getchar();
    getchar();
}

void Find(Head list)//查找用户函数
{
    int select;
    char searchinput[16];
    Node *p;
    if(!list->next)
    {
        printf("\n没有发现用户信息！\n");
        return;
    }
    system("cls");
    printf("\n1：按用户名查询\n2：按姓名查询\n");
    printf("请选择查询方式：[1,2]:\n");
    scanf("%d",&select);
    if(select==1)
    {
        StringInput(searchinput,12,"输入一个本系统已存在的用户名：\n");
        p=Locate(list,searchinput,"uname");
    }
    else if(select==2)
    {
        StringInput(searchinput,12,"输入一个本系统存在的姓名：");
        p=Locate(list,searchinput,"name");
    }
    if(p)
    {
        PrintTitle();
        PrintData(p);
        printf("按任意键返回...");
        system("pause >nul");
    }
    else
        printf("用户信息不存在!");
    system("pause >nul");
}

void Delete(Head list)//删除用户信息
{
    int sel;
    Node *p,*r;
    char findstring[16];
    if(!list->next)
    {
        printf("\n没有发现用户信息！\n");
        return;
    }
    system("cls");
    printf("\n1 按用户名删除 \n 2 按姓名删除\n");
    printf("请选择[1,2]");
    scanf("%d",&sel);
    if(sel==1)
    {
        StringInput(findstring,12,"输入一个已有的用户名：");
        p=Locate(list,findstring,"uname");
    }
    else if(sel==2)
    {
        StringInput(findstring,12,"输入一个已有姓名：");
        p=Locate(list,findstring,"name");
    }
    if(p!=NULL)
    {
        r=list;
        while(r->next!=p)
            r=r->next;
        r->next=p->next;
        free(p);
        printf("\n删除成功！");
        getchar();
        saveflag=1;
    }
}

void Modify(Head list)//修改用户信息
{
    Node *p;
    char findstring[16];
    if(!list->next)
    {
        printf("\n没有发现用户信息！");
        return;
    }
    system("cls");
    printf("修改用户信息");
    StringInput(findstring,10,"输入一个已有用户名：");
    p=Locate(list,findstring,"uname");
    if(p)
    {
        printf("用户名：%s \n",p->data.username);
        printf("  姓名：%s \n",p->data.realname);
        StringInput(p->data.realname,15,"请输入新的姓名：");
        StringInput(p->data.password,12,"用户新的登陆密码为 :");
        printf("活期存款：%.4lf,",p->data.normal_balance);
        p->data.normal_balance=NumberInput("更改后的活期存款:");
        printf("定期存款：%.4lf,",p->data.regular_balance);
        p->data.regular_balance=NumberInput("更改的后的定期存款:");
        printf("定期年限：%d,",p->data.regular_year);
        printf("更改后的定期存款年限为:");
        scanf("%d",&p->data.regular_year);
        p->data.rank=0;
        printf("修改成功");
        DisplayAll(list);
        saveflag=1;
    }
    else
        printf("没有暂时用户信息");
    getchar();
}

void Sort(Head list)//用活期存款排序
{
    int i=1;
    Head first;//为原链表剩下用于直接插入排序的节点头指针
    Head t;    //临时指针变量：插入节点
    Head p;    //临时指针变量
    Head q;    //临时指针变量
    if(list -> next==NULL) return;
    first=list->next;
    list->next=NULL;

    while(first!=NULL)
    {
        t=first;
        first=first->next;
        t->next=NULL;
        p=list;
        if(p->next==NULL)
        {
            p->next=t;
        }
        else
        {
            q=p->next;
            while(q!=NULL&&t->data.normal_balance<q->data.normal_balance)
            {
                p=p->next;
                q=p->next;
            }

            t->next=p->next;
            p->next=t;
        }
    }
    p=list->next;
    while(p!=NULL)
    {
        p->data.rank=i++;
        p=p->next;
    }

    DisplayAll(list);
    saveflag=1;
    printf("排序成功");
}


