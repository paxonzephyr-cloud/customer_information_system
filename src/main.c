#include "declare.h"
#include <stdio.h>


void clear_input_buffer(void)
{
    int ch;
    while ((ch = getchar()) != '\n' && ch != EOF) {}
}

int main(void)
{
    
    int choice;
    
    List list={0,NULL};

    printf("按下回车进入系统");

    do {
        getchar();
        customer_instruction();

        printf("请输入选择(1~5):");
        while(scanf("%d",&choice)!=1){
            printf("输入错误,重新输入:");
            clear_input_buffer();//清除缓存区  
         }
        
        clear_input_buffer();//清除缓存区  1空格1,1,1等会影响到后续

        switch (choice) {
        
        case 1:customer_creat(&list);break;
        case 2:customer_at(&list);   break;
        case 3:customer_del(&list);  break;
        case 4:customer_list(&list); break;
        case 5:exit_system(&list);   break;//这里最好也加上break,避免意外落入default
        default:printf("输入错误---");    
                clear_input_buffer();//清除缓存区  
                printf("回车继续");
        }
 
    }while (1);

    return 0;
}

