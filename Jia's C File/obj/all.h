#ifndef ALL_H_INCLUDED
#define ALL_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>
//�ṹ�嶨���ʼ���ʣ����㴢��
typedef struct all_rate
{
    double normal_rate;
    double rate_oneY;
    double rate_twoY;
    double rate_threeY;
    double rate_fiveY;
    long long int first_account;
} all_rate;

struct all_rate RATE;//����ṹ��RATE�����ڴ�������

int saveflag=0;//�����ڱ�������Ƿ��޸�

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

double NumberInput(char *msg);
void Loading();
void load_rate();
void Load_userdata(Head list);
void change_normal_rate();
void change_regular_rate();
void change_remind();
void AddUser(Head list);
void StringInput(char *t,int lens,char*msg);
void DisplayAll(Head list);
void Insert(Head list);
void Find(Head list);
void Delete(Head list);
void Sort(Head list);
void Menu();
void Help();
void Save_userdata(Head list);
void save_rate();
void PrintData(Node *p);
void PrintTitle();
void show_rate();


#endif // ALL_H_INCLUDED
