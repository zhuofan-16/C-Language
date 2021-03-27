#ifndef ALL_H_INCLUDED
#define ALL_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>
#include <time.h>

int savemark=0;//�����ڱ�������Ƿ��޸�
int month=0;    //�·�
int fuzzymark=0;//ģ����ѯ��ʶ

//���ݽṹ
typedef struct all_rate//����ṹ�崢��������Ϣ
{
    double normal_rate;         //��������
    double rate_oneY;           //һ������
    double rate_twoY;           //��������
    double rate_threeY;         //��������
    double rate_fiveY;          //��������
    long long int first_account;//�˺ű���
} all_rate;
struct all_rate RATE;//����ṹ��RATE�����ڴ�������
typedef struct User          //����ṹ�崢���û���Ϣ
{
    char realname[12];        //����
    char username[12];        //�û���
    char password[12];        // �û�����
    long long int account;   //���п��˺�
    double normal_balance;   //�û����ڴ�����
    double regular_balance;  //�û����ڴ�����
    int regular_year;        //���ڴ������
    int rank;                //�û�������
} User;
typedef struct Node
{
    User data;//������
    struct node *next;//ָ����
} Node,*Head;

//��������
void Administrator(Head list);                //����Ա�˵�
void AdminLogin(Head list);                   //����Ա��¼
void AddUser(Head list);                     //�����û�����
void Add_Normal(Node *p,char u_name,Head list);//���ڴ��
void Add_Regular(Node *p,char u_name,Head list);//���ڴ��
void Change_normal_rate();                   //�������ʱ������
void Change_regular_rate();                  //�������ʱ������
void Change_remind(int x);                   //���ʱ�����Ѻ���
void DeleteUser(Head list);                  //ɾ���û�����
void FindUser(Head list);                    //�����û�����
void Help();                                 //����
double InputMoney(char *msg);                //�������뺯��
void Inputdata(char *t,int lenth,char*msg);  //��Ϣ¼�뺯��
void ListAllUser(Head list);                 //��ʾ�����û�����
void Loading();                              //�������
void Load_rate();                            //����������Ϣ
void Load_userdata(Head list);               //��ʼ���û�����
void Menu();                                 //�˵�
void ModifyUser(Head list);                  //�����û���Ϣ
void ModifyPswd(Node *p,Head list);          //�޸�����
void PrintUserData(Node *p);                 //��ӡ�û���Ϣ����
void PrintDataTitle();                       //��ӡ������Ϣ
void ReadMonth();                            //���ص�ǰ�·�
void Rate_Change_With_Month();               //������ʱ��仯����
void Show_rate();                            //��ʾ��ǰ����
void SortNormal(Head list);                  //�����ڴ��������
void Searchls(Head list);                    //ģ������
void Save_userdata(Head list);               //�����û���Ϣ�������̺���
void Save_rate();                            //����������Ϣ�������̺���
void UserCreat(Head list);                   //�û���������¼��ע�ᣩ
void UsersOper(Node *p,char u_name,char pswd,Head list);//�û��˵�
#endif // ALL_H_INCLUDED