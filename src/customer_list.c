#include "declare.h"
#include <stdio.h>


/**
 * @brief 列出所有用户信息
 * @param 结构体指针 List* plist
 * @return 无   
 */void customer_list(List* plist)
{
    printf("\n");
    printf("--- 当前系统共有 %d 名客户 ---\n", plist->total_count);
    Node* temp=plist->phead;
    printf("\nID\t姓名\t性别\t年龄\n");
    while (temp != NULL) {
        printf("%d\t%s\t%s\t%d\n", 
                temp->data.id, temp->data.name, temp->data.gender, temp->data.age);
        temp = temp->next; // 替身向后移动
    }
    printf("--- 列印完毕 ---\n");
    while (getchar()!='\n');//清空缓存区
    printf("回车继续");

}