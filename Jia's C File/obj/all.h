#ifndef ALL_H_INCLUDED
#define ALL_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>
//结构体定义初始利率，方便储存
typedef struct all_rate
{
    double normal_rate;
    double rate_oneY;
    double rate_twoY;
    double rate_threeY;
    double rate_fiveY;
    long long int first_account;
} all_rate;

struct all_rate RATE;//定义结构体RATE，用于储存利率

int saveflag=0;//是用于标记数据是否被修改

typedef struct User          //定义结构体储存用户信息
{
    char realname[12];        //姓名
    char username[12];        //用户名
    char password[12];        // 用户密码
    long long int account;   //银行卡账号
    double normal_balance;   //用户活期存款余额
    double regular_balance;  //用户定期存款余额
    int regular_year;        //定期存款年限
    int rank;                //用户排序标记
} User;

typedef struct Node
{
    User data;//数据域
    struct node *next;//指针域
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
