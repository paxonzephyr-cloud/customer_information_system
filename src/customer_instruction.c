#include "declare.h"
#include <stdio.h>

/**
 * @brief 列出系统基本信息及操作
 * @param 无
 * @return 无   
 */
void customer_instruction(void)
{
    printf("                用户输入数字选择功能(1~5)\n");
    printf("    输入1，进入“添加客户”界面，需要填写姓名、性别、\
年龄、电话、邮箱这些信息\n");
    printf("    输入2，进入“修改客户”，首先要输入要修改客户的编号，\
然后填写信息\n");
    printf("    输入3，进入“删除客户”，输入要删除客户的编号，\
再确认是否删除\n");
    printf("    输入4，进入“客户列表”，显示客户列表信息\n");
    printf("    输出5，经过确认后退出系统\n");
    printf("\n");


}