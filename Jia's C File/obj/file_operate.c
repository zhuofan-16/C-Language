void Save_userdata(Head list)
{
    FILE *fp;
    Node  *p;
    int count=0;
    fp=fopen("userdata","wb");
    if(fp==NULL)
    {
        printf("���ļ�ʧ�ܣ�");
        getchar();
        return;
    }
    p=list->next;

    while(p)
    {
        if(fwrite(p,sizeof(Node),1,fp)==1)
        {
            p=p->next;
            count++;
        }
        else break;
    }
    if(count>0)
    {
        getchar();
        printf("\n\n���ݱ���ɹ���");
        getchar();
        saveflag=0;
    }
    else
    {
        printf("û�з����û���Ϣ�����棡\n");
        getchar();
    }
    fclose(fp);
    save_rate();
}

void Load_userdata(Head list)
{
    FILE *fp;
    Node *p,*r;
    int count=0;
    r=list;

    fp=fopen("userdata","ab+");
    if(fp==NULL)
    {
        printf("\n�����������ļ���\n");
        exit(0);
    }

    while(!feof(fp))
    {
        p=(Node *)malloc(sizeof(Node));
        if(!p)
        {
            printf("�ڴ����ʧ�ܣ�");
            exit(0);
        }
        if(fread(p,sizeof(Node),1,fp)==1)
        {
            p->next=NULL;
            r->next=p;
            r=p;
            count++;
        }
    }

    fclose(fp);
    system("cls");
    printf("\n\t\t��ʼ���ɹ������� %d ����Ϣ��¼�룡\n",count);
    Sleep(1000);
    return;
}

void load_rate()
{
    system("color e0");
    FILE *fp;
    fp = fopen("rateinfo","rb");
    if(fp==NULL)
    {
        RATE.normal_rate=0.0030;
        RATE.rate_oneY=0.0175;
        RATE.rate_twoY=0.0225;
        RATE.rate_threeY=0.0275;
        RATE.rate_fiveY=0.0275;
    }
    else
    {
        fread(&RATE,sizeof(struct all_rate),1,fp);
    }
    fclose(fp);
}

void save_rate()//����������Ϣ
{
    FILE *fp;
    fp=fopen("rateinfo","wb");
    if(fp==NULL)
    {
        printf("������Ϣ�ļ���ʧ�ܣ�");
        return;
    }
    else
    {
        fwrite(&RATE,sizeof(struct all_rate),1,fp);
    }

    fclose(fp);
}
