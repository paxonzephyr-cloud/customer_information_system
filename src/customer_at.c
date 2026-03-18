#include "declare.h"
#include <stdio.h>

void customer_at(List* plist)
{
    printf("要修改的编号是:");
    int id;
    if(scanf("%d",&id)!=1){
        printf("编号输入无效---");
        clear_input_buffer();
        printf("回车继续");
        return;
    }

    Node* temp=plist->phead;

    while(temp != NULL && temp->data.id!=id){   //定位到要修改的node
        temp=temp->next;
    }

    if (temp==NULL) {                       //没找到那就跳出
        printf("未找到编号为%d的用户",id);
        return;
    }


    printf("姓名\t");scanf("%63s",temp->data.name);
    printf("性别\t");scanf("%9s",temp->data.gender);
    printf("年龄\t");scanf("%d",&(temp->data.age));
    printf("手机号\t");scanf("%14s",temp->data.phone);
    printf("邮箱\t");scanf("%49s",temp->data.e_mail);
    printf("\n");

    printf("修改成功---");
    clear_input_buffer();//清除缓存区
    printf("回车继续");

}