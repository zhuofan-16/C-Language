#ifndef ALL_H_INCLUDED
#define ALL_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>

int saveflag=0;//是用于标记数据是否被修改

//数据结构
typedef struct all_rate//定义结构体储存利率信息
{
    double normal_rate;         //活期利率
    double rate_oneY;           //一年利率
    double rate_twoY;           //两年利率
    double rate_threeY;         //三年利率
    double rate_fiveY;          //五年利率
    long long int first_account;//账号变量
} all_rate;
struct all_rate RATE;//定义结构体RATE，用于储存利率
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

//函数声明
void AddUser(Head list);                     //添加用户函数
void change_normal_rate();                   //活期利率变更函数
void change_regular_rate();                  //定期利率变更函数
void change_remind();                        //利率变更提醒函数
void DisplayAll(Head list);                  //显示所有用户函数
void Delete(Head list);                      //删除用户函数
void Find(Head list);                        //查找用户函数
void Help();                                 //帮助
void Insert(Head list);                      //插入信息函数
void Loading();                              //载入界面
void load_rate();                            //加载利率信息
void Load_userdata(Head list);               //初始化用户数据
void Menu();                                 //菜单
double NumberInput(char *msg);               //数据输入函数
void PrintData(Node *p);                     //打印用户信息函数
void PrintTitle();                           //打印标题信息
void show_rate();                            //显示当前利率
void StringInput(char *t,int lens,char*msg);//信息录入函数
void Sort(Head list);                        //按活期存款排序函数
void Save_userdata(Head list);               //保存用户信息到储存盘函数
void save_rate();                            //保存利率信息到储存盘函数

#endif // ALL_H_INCLUDED
