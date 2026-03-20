#include "declare.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * @brief 删除用户信息
 * @param 结构体指针 List* plist
 * @return 无   
 */
void customer_del(List* plist)
{
    printf("要删除的编号是:");
    int id;
    if(scanf("%d",&id)!=1){
        printf("编号输入无效---");
        clear_input_buffer();
        printf("回车继续");
        return;
    }
    
    Node* temp=plist->phead;
    Node* last=NULL;    //记录要删除的上一个node,要防止修改第一个的情况

    while(temp != NULL && temp->data.id!=id){   //定位到要删除的node
        last=temp;
        temp=temp->next;
    }
      
    if (temp==NULL) {                       //没找到那就跳出
        printf("未找到编号为%d的用户",id);
        return;
    }

    if(last==NULL){//即删除第一个

        plist->phead=temp->next;//将第二个的地址保存到头地址phead中
    
    }else { 
        last->next=temp->next;//将要删除的node指向的node地址\
        // 赋值给上一个node的next   
        }
   
    //更新之后的node的id值(-1)
    Node* pAfter = (last == NULL) ? plist->phead : last->next;
    free(temp);//释放删除node的内存
    plist->total_count--; // 总数减1
    
    while (pAfter!=NULL) {      //处理只有一个节点时不能用do while
        (pAfter->data.id)--;
        pAfter=pAfter->next;
    }

    printf("删除成功---");
    while (getchar()!='\n');//清空缓存区
    printf("回车继续");

}