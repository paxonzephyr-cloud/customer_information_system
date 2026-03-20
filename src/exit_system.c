#include <stdio.h>
#include "declare.h"
#include <stdlib.h>

/**
 * @brief 释放链表内存
 * @param 结构体指针 List* plist
 * @return 无   
 */
void list_destroy(List* plist);

/**
 * @brief 离开程序
 * @param 结构体指针 List* plist
 * @return 无   
 */void exit_system(List* plist)
{
    char ch;

    printf("是否退出('Y'或'y'确认):");
    scanf(" %c", &ch);
    clear_input_buffer();//清除缓存区 

    if(ch=='Y'||ch=='y'){
        list_destroy(plist);//释放内存
        exit(0);
    }else return;

}

void list_destroy(List* plist)
{
    Node* temp=plist->phead;
    Node* next=NULL;
    while(temp){
        next=temp->next;
        free(temp);
        temp=next;
    }
    plist->phead=NULL;
    plist->total_count=0;
}