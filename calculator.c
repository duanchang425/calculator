//使用函数指针数组解决计算器问题

#include<stdio.h>
#include<windows.h>
//#include<assert.h>

void menu()
{
    printf("**************************\n");
    printf("****欢迎来到计算器页面****\n");
    printf("**** 1.add    2.mul  *****\n");
    printf("*****3.sub    4.div1 *****\n");
    printf("*****0.exit          *****\n");
    printf("**************************\n");
}

int add(int x, int y)
{
    return x + y;
}

int mul(int x, int y)
{
    return x * y;
}

int sub(int x, int y)
{
    return x - y;
}

int div1(int x, int y)
{
    return x / y;
}

int main()
{
    int n = 1;
    menu();
    while (n)
    {
        printf("请输入选项:\n");
        scanf("%d", &n);
        int(*arr[5])() = { 0,add,mul,sub,div1 };//转移表
        //定义一个函数指针数组，存放函数地址
        if (n >= 0 && n < 5)
        {
            int x = 0, y = 0;
            printf("请输入两个整数:>\n");
            scanf("%d%d", &x, &y);
            printf("%d\n", (*arr[n])(x,y));//输出结果
        }
        else
        {
            printf("输入有误，请重新输入!\n");
            scanf("%d", &n);
        }
    }
    system("pause");
    return 0;
}