
void Menu()
{
    system("cls");
    printf("\t\t                ��ӭʹ�����д�����ϵͳ\n\n");
    printf("\t\t��--------------------------�˵�-----------------------��\n");
    printf("\t\t|                                                       |\n");
    printf("\t\t|      <1> ¼���û���Ϣ       <7>  �г������û�         |\n");
    printf("\t\t|      <2> ɾ���û���Ϣ       <8>  ���������޸�         |\n");
    printf("\t\t|      <3> �����û���Ϣ       <9>  ���������޸�         |\n");
    printf("\t\t|      <4> �޸��û���Ϣ       <10> �û�����             |\n");
    printf("\t\t|      <5> �����û���Ϣ       <11> ������Ϣ             |\n");
    printf("\t\t|      <6> ���������       <12> �˳�ϵͳ             |\n");
    printf("\t\t|                                                       |\n");
    printf("\t\t��-----------------------------------------------------��\n");
}

void PrintTitle()
{
    printf("����       �û���     �˺�       ���ڴ��   ���ڴ��   �������� \n");

}

void PrintData(Node *p)
{
    printf("%-10s %-10s %-10lld %-10.2lf %-10.2lf %d��\n",p->data.realname,p->data.username,p->data.account,p->data.normal_balance,p->data.regular_balance,p->data.regular_year);
}

void show_rate()
{
    printf("\t\t*************************************************************\n");
    printf("\t\t��ǰ�����������£�                                                 \n");
    printf("\t\t                                                                   \n");
    printf("\t\t              <1> һ��(����Ϊ��%.4f)                 \n",RATE.rate_oneY);
    printf("\t\t              <2> ����(����Ϊ��%.4f)                   \n",RATE.rate_twoY);
    printf("\t\t              <3> ����(����Ϊ��%.4f)                 \n",RATE.rate_threeY);
    printf("\t\t              <4> ����(����Ϊ��%.4f)                  \n",RATE.rate_fiveY);
    printf("\t\t                                                                      \n");
    printf("\t\t*************************************************************\n");
}

void Loading()
{
    int z;
    system("color e0");
    printf("\t\t=======================================================\n");
    printf("\t\t||                                                   ||\n");
    printf("\t\t||                                                   ||\n");
    printf("\t\t||                                                   ||\n");
    printf("\t\t||                                                   ||\n");
    printf("\t\t||                                                   ||\n");
    printf("\t\t||                                                   ||\n");
    printf("\t\t||             ��ӭʹ�����д�����ϵͳ!             ||\n");
    printf("\t\t||                                                   ||\n");
    printf("\t\t||                                                   ||\n");
    printf("\t\t||                                                   ||\n");
    printf("\t\t||                                                   ||\n");
    printf("\t\t||                                                   ||\n");
    printf("\t\t=======================================================\n");
    printf("\n\n\n\n\n\n");
    printf("\t\t��������ϵͳ�����Ժ�...\n");
    printf("\t\t");
    printf(".......................................................\r");
    printf("\t\t");
    for(z=16; z<71; z++)
    {
        Sleep(10);
        printf(">");
    }
}

void change_remind(int b)
{
    if(b==1)
    {
        system("cls");
        printf("�����ѷ����䶯���ڴ���ʾ��,������Ҫ��ǰ�����и��Ĵ�ʽ\n\n");
        printf("\n��ǰ������Ϣ���£�\n");
        printf("\t\t*************************************************************\n");
        printf("\t\t                                                           \n");
        printf("\t\t                  ��ǰ��������:%.4f                      \n",RATE.normal_rate);
        printf("\t\t                                                           \n");
        printf("\t\t                                                           \n");
        show_rate();
        system("pause >nul");
    }
    return;
}


void Help()
{
    system("cls");
    printf("\t\t\t ----------------------------------------------------\n");
    printf("\t\t\t|                  ���д�����ϵͳ                  |\n");
    printf("\t\t\t|                        v2.0                        |\n");
    printf("\t\t\t|                                                    |\n");
    printf("\t\t\t|                                                    |\n");
    printf("\t\t\t|                                                    |\n");
    printf("\t\t\t|                                                    |\n");
    printf("\t\t\t|                                                    |\n");
    printf("\t\t\t|                                                    |\n");
    printf("\t\t\t|                                                    |\n");
    printf("\t\t\t|                                                    |\n");
    printf("\t\t\t|                                                    |\n");
    printf("\t\t\t ----------------------------------------------------\n");
    system("pause >nul");
    return;
}
