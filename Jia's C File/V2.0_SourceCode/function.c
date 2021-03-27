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




void ListAllUser(Head list)//��������û���Ϣ����
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
    PrintDataTitle();
    while(p)
    {
        PrintUserData(p);
        p=p->next;
    }
    system("pause >nul");
}

void AddUser(Head list)//����û���Ϣ����
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
        Inputdata(uname,12,"�������û���    :");
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
            printf("�û��� %s �Ѵ��ڣ��Ƿ���������?|y or n|:\n",uname);
            scanf("%s",&c);
            if(c=='y'||c=='Y')
                continue;
            else return;
        }
        else break;
    }
    p=(Node *)malloc(sizeof(Node));//�����ڴ�
    if(!p)
    {
        printf("\n�����ڴ�ʱ����\n");
        return;
    }
    strcpy(p->data.username,uname);
    Inputdata(p->data.realname,12, "�û�����Ϊ      :");
    Inputdata(p->data.password,12, "�û���½����Ϊ  :");
    p->data.normal_balance=0.0;
    p->data.regular_balance=0.0;
    p->data.regular_year=0;
    p->data.account=889900001+RATE.first_account++;
    printf  ("�ɹ������û��˺ţ�%lld \n\n",p->data.account);
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
        printf("\nĿǰû���û�ע��!\n");
        Sleep(3000);
        return;
    }
    system("cls");
    printf("�������û�����\n");
    scanf("%s",u_name);
    printf("���������룺\n");
    scanf("%s",pswd);
    printf("\n");
    while(p)
    {
        if(strcmp(p->data.password,pswd)==0&&strcmp(p->data.username,u_name)==0)
            UsersOper(p,pswd,u_name,list);
        p=p->next;
    }
}


void InsertUser(Head list)//�����û���Ϣ
{
    Head a,b,newnode;
    char c,str[12];
    int mark=0;
    b=list->next;
    system("cls");
    while(1)
    {
        Inputdata(str,10,"�����û�����\n");
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
            printf("\n�û��� %s �Ѵ��ڣ��Ƿ���������?|y or n|��",str);
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
        printf("\n �����ڴ����ʧ�ܣ�");
        system("pause >nul");
        return;
    }
    Inputdata(newnode->data.username,12,    "�û���        :");
    Inputdata(newnode->data.realname,12,    "����          :");
    Inputdata(newnode->data.password,12,    "�û���½����Ϊ:");
    newnode->data.normal_balance=InputMoney ("���ڴ��Ϊ    :");
    newnode->data.regular_balance=InputMoney("���ڴ��Ϊ    :");
    printf                                   ("��������Ϊ    :");
    scanf("%d",&newnode->data.regular_year);
    while(newnode->data.regular_year)
    {
        if(newnode->data.regular_year>=0&&newnode->data.regular_year<=5)
        {
            break;
        }
        else
        {
            printf("\n��������Ϊ1-5��,����������\n");
            system("pause >nul");
            printf("��������Ϊ:");
            scanf("%d",&newnode->data.regular_year);
        }

    }
    newnode->data.account=889900001+RATE.first_account++;
    printf("�����û��˺�Ϊ:%lld \n",newnode->data.account);
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

void FindUser(Head list)//�����û�����
{
    int select;
    char search[16];
    Node *p;
    if(!list->next)
    {
        printf("\nû�з����û���Ϣ��\n");
        system("pause >nul");
        return;
    }
    system("cls");
    printf("\n1:���û�����ѯ\n2:��������ѯ\n");
    printf("��ѡ���ѯ��ʽ:\n");
    scanf("%d",&select);
    if(select==1)
    {
        Inputdata(search,12,"�����Ѵ��ڵ��û�����\n");
        p=Locate(list,search,"uname");
    }
    else if(select==2)
    {
        Inputdata(search,12,"�����Ѵ��ڵ�������");
        p=Locate(list,search,"name");
    }
    if(p)
    {
        PrintDataTitle();
        PrintUserData(p);
        printf("�����������...");
        system("pause >nul");
    }
    else
    {
        printf("�û���Ϣ������!");
        system("pause >nul");
    }
}

void DeleteUser(Head list)//ɾ���û���Ϣ
{
    int choice;
    Node *p,*r;
    char findstr[16];
    if(!list->next)
    {
        printf("\nû�з����û���Ϣ��\n");
        system("pause >nul");
        return;
    }
    system("cls");
    printf("\n1:���û���ɾ�� \n2:������ɾ��\n");
    printf("��ѡ��\n");
    scanf("%d",&choice);
    if(choice==1)
    {
        Inputdata(findstr,12,"����һ�����е��û�����");
        p=Locate(list,findstr,"uname");
    }
    else if(choice==2)
    {
        Inputdata(findstr,12,"����һ������������");
        p=Locate(list,findstr,"name");
    }
    if(p!=NULL)
    {
        r=list;
        while(r->next!=p)
            r=r->next;
        r->next=p->next;
        free(p);
        printf("\nɾ���ɹ���");
        system("pause >nul");
        savemark=1;
    }
}

//void ModifyUser(Head list)//�޸��û���Ϣ
//{
//    Node *p;
//    char findstr[16];
//    int choice;
//    if(!list->next)
//    {
//        printf("\nû�з����û���Ϣ��");
//        system("pause >nul");
//        return;
//    }
//    system("cls");
//    printf("��������Ҫ�޸ĵ����ݣ�\n\n");
//    printf("\t1.�޸��û�����\n");
//    printf("\t2.�޸��û����ڴ��\n");
//    printf("\t3.�޸��û����ڴ���������\n");
//    printf("\t4.����\n\n");
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

void SortNormal(Head list)//�û��ڴ������
{
    int i=1;
    Head p1;//Ϊԭ����ʣ������ֱ�Ӳ�������Ľڵ�ͷָ��
    Head p2;    //��ʱָ�����������ڵ�
    Head p3;    //��ʱָ�����
    Head p4;    //��ʱָ�����
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


