#ifndef DECLARE_H
#define DECLARE_H

typedef struct{
    int id;     //编号
    char name[64];      //UTF编码---3个字节=1个汉字
    char gender[10];
    int age;
    char phone[15];//电话号码   注意:不需要参与运算,以字符保存即可
    char e_mail[50];//邮箱
}Customer;

typedef struct _node{   //使用链表创建管理数据
    Customer data;
    struct _node* next;
}Node;

typedef struct{        //用于在creat中返回参数
    int total_count;
    Node* phead;
}List;

void customer_instruction(void);//基础结构
void exit_system(List* plist);//进入确认后退出程序(使用exit)
void customer_creat(List* plist);//构建链表
void customer_at(List* plist);//修改用户
void customer_del(List* plist);//删除用户
void customer_list(List* plist);//列出用户清单

void clear_input_buffer(void);//清除缓存区

#endif
