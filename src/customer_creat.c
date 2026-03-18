#include "declare.h"
#include <stdio.h>
#include <stdlib.h>


void customer_creat(List* plist)
{
    Node* p=(Node*)malloc(sizeof(Node));
    if (p==NULL){
        printf("内存空间分配失败\n");
        return;
    }
    
    plist->total_count++; 
    p->data.id = plist->total_count;
    printf("姓名\t");scanf("%63s",p->data.name);
    printf("性别\t");scanf("%9s",p->data.gender);
    printf("年龄\t");scanf("%d",&(p->data.age));
    printf("手机号\t");scanf("%14s",p->data.phone);
    printf("邮箱\t");scanf("%49s",p->data.e_mail);
    p->next=NULL;//必须保证末尾添加的节点next为NULL

    if (plist->phead==NULL)             //第一次创建链表
{
    plist->phead=p;
    printf("保存成功---");
    clear_input_buffer();//清除缓存区
    printf("回车继续");
    return;
}
    Node* temp=plist->phead;    //保护头指针
    while (temp->next) {        //寻找到末尾
        temp=temp->next;
    }
    temp->next=p;

    printf("保存成功----");
    clear_input_buffer();//清除缓存区
    printf("回车继续");
    
}
