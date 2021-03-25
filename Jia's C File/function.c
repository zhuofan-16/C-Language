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




void DisplayAll(Head list)//����û���Ϣ����
{
    Node *p;
    p=list->next;
    if(p==NULL)
    {
        printf("\nû�з����û���Ϣ!\n");
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

void AddUser(Head list)//����û���Ϣ����
{
    Node *p,*s,*r;
    char ch,flag=0,uname[10];
    r=list;
    s= list ->next;
    system("cls");
    while(r->next!=NULL)
        r=r->next;
    printf("�ɶ������룬���û���Ϊ0��������\n");
    while(1)
    {
        while(1)
        {
            StringInput(uname,12,"�������û���    :");
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
                printf("�û��� %s �Ѵ��ڣ��Ƿ�����?(y/n):\n",uname);
                scanf("%c",&ch);
                if(ch=='y'||ch=='Y')
                    continue;
                else return;
            }
            else break;
        }
        p=(Node *)malloc(sizeof(Node));//�����ڴ�
        if(!p)
        {
            printf("\n�ڴ����ʧ�ܣ�\n");
            return;
        }
        strcpy(p->data.username,uname);
        StringInput(p->data.realname,12, "�û�����Ϊ      :");
        StringInput(p->data.password,12, "�û���½����Ϊ  :");
        p->data.normal_balance=NumberInput ("�û����ڴ��Ϊ  :");
        p->data.regular_balance=NumberInput("�û����ڴ��Ϊ  :");
        printf  ("���ڴ������Ϊ  :");
        scanf("%d",&p->data.regular_year);
        p->data.account=889900001+RATE.first_account++;
        printf  ("�ɹ������û��˺ţ�%lld \n\n",p->data.account);
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

void Insert(Head list)//�����û���Ϣ
{
    Head p,v,newnode;
    char ch,num[12],s[12];
    int flag=0;
    v=list->next;
    system("cls");
    while(1)
    {
        StringInput(s,10,"�������û���֮����룺");
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
            printf("\n�û��� %s �����ڣ��Ƿ�����?��y/n����",s);
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
        printf("\n �����ڴ����ʧ�ܣ�");
        return;
    }
    StringInput(newnode->data.username,12,    "�û���        :");
    StringInput(newnode->data.realname,12,    "����          :");
    StringInput(newnode->data.password,12,    "�û���½����Ϊ:");
    newnode->data.normal_balance=NumberInput ("���ڴ��Ϊ    :");
    newnode->data.regular_balance=NumberInput("���ڴ��Ϊ    :");
    printf                                   ("��������Ϊ    :");
    scanf("%d",&newnode->data.regular_year);
    newnode->data.account=889900001+RATE.first_account++;
    printf("�����û��˺�Ϊ:%lld \n",newnode->data.account);
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

void Find(Head list)//�����û�����
{
    int select;
    char searchinput[16];
    Node *p;
    if(!list->next)
    {
        printf("\nû�з����û���Ϣ��\n");
        return;
    }
    system("cls");
    printf("\n1�����û�����ѯ\n2����������ѯ\n");
    printf("��ѡ���ѯ��ʽ��[1,2]:\n");
    scanf("%d",&select);
    if(select==1)
    {
        StringInput(searchinput,12,"����һ����ϵͳ�Ѵ��ڵ��û�����\n");
        p=Locate(list,searchinput,"uname");
    }
    else if(select==2)
    {
        StringInput(searchinput,12,"����һ����ϵͳ���ڵ�������");
        p=Locate(list,searchinput,"name");
    }
    if(p)
    {
        PrintTitle();
        PrintData(p);
        printf("�����������...");
        system("pause >nul");
    }
    else
        printf("�û���Ϣ������!");
    system("pause >nul");
}

void Delete(Head list)//ɾ���û���Ϣ
{
    int sel;
    Node *p,*r;
    char findstring[16];
    if(!list->next)
    {
        printf("\nû�з����û���Ϣ��\n");
        return;
    }
    system("cls");
    printf("\n1 ���û���ɾ�� \n 2 ������ɾ��\n");
    printf("��ѡ��[1,2]");
    scanf("%d",&sel);
    if(sel==1)
    {
        StringInput(findstring,12,"����һ�����е��û�����");
        p=Locate(list,findstring,"uname");
    }
    else if(sel==2)
    {
        StringInput(findstring,12,"����һ������������");
        p=Locate(list,findstring,"name");
    }
    if(p!=NULL)
    {
        r=list;
        while(r->next!=p)
            r=r->next;
        r->next=p->next;
        free(p);
        printf("\nɾ���ɹ���");
        getchar();
        saveflag=1;
    }
}

void Modify(Head list)//�޸��û���Ϣ
{
    Node *p;
    char findstring[16];
    if(!list->next)
    {
        printf("\nû�з����û���Ϣ��");
        return;
    }
    system("cls");
    printf("�޸��û���Ϣ");
    StringInput(findstring,10,"����һ�������û�����");
    p=Locate(list,findstring,"uname");
    if(p)
    {
        printf("�û�����%s \n",p->data.username);
        printf("  ������%s \n",p->data.realname);
        StringInput(p->data.realname,15,"�������µ�������");
        StringInput(p->data.password,12,"�û��µĵ�½����Ϊ :");
        printf("���ڴ�%.4lf,",p->data.normal_balance);
        p->data.normal_balance=NumberInput("���ĺ�Ļ��ڴ��:");
        printf("���ڴ�%.4lf,",p->data.regular_balance);
        p->data.regular_balance=NumberInput("���ĵĺ�Ķ��ڴ��:");
        printf("�������ޣ�%d,",p->data.regular_year);
        printf("���ĺ�Ķ��ڴ������Ϊ:");
        scanf("%d",&p->data.regular_year);
        p->data.rank=0;
        printf("�޸ĳɹ�");
        DisplayAll(list);
        saveflag=1;
    }
    else
        printf("û����ʱ�û���Ϣ");
    getchar();
}

void Sort(Head list)//�û��ڴ������
{
    int i=1;
    Head first;//Ϊԭ����ʣ������ֱ�Ӳ�������Ľڵ�ͷָ��
    Head t;    //��ʱָ�����������ڵ�
    Head p;    //��ʱָ�����
    Head q;    //��ʱָ�����
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
    printf("����ɹ�");
}


