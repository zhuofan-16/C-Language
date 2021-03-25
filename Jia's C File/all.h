#ifndef ALL_H_INCLUDED
#define ALL_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>

int saveflag=0;//�����ڱ�������Ƿ��޸�

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
void AddUser(Head list);                     //����û�����
void change_normal_rate();                   //�������ʱ������
void change_regular_rate();                  //�������ʱ������
void change_remind();                        //���ʱ�����Ѻ���
void DisplayAll(Head list);                  //��ʾ�����û�����
void Delete(Head list);                      //ɾ���û�����
void Find(Head list);                        //�����û�����
void Help();                                 //����
void Insert(Head list);                      //������Ϣ����
void Loading();                              //�������
void load_rate();                            //����������Ϣ
void Load_userdata(Head list);               //��ʼ���û�����
void Menu();                                 //�˵�
double NumberInput(char *msg);               //�������뺯��
void PrintData(Node *p);                     //��ӡ�û���Ϣ����
void PrintTitle();                           //��ӡ������Ϣ
void show_rate();                            //��ʾ��ǰ����
void StringInput(char *t,int lens,char*msg);//��Ϣ¼�뺯��
void Sort(Head list);                        //�����ڴ��������
void Save_userdata(Head list);               //�����û���Ϣ�������̺���
void save_rate();                            //����������Ϣ�������̺���

#endif // ALL_H_INCLUDED
