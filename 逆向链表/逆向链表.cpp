// 逆向链表.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "data.h"
#include <iostream>


data* creat()
{
    data* prt1 = new data(1, NULL);
    /*data* prt1 = new data(5, NULL);
    data* prt2 = new data(4, prt1);
    data* prt3 = new data(3, prt2);
    data* prt4 = new data(2, prt3);
    data* prt5 = new data(1, prt4);
    return prt5;*/
    for (int i = 2; i <= 5; i++)
    {
        data* neww = new data(i, NULL);
        data* next = prt1->next;
        prt1->next = neww;
        neww->next = next;
    }
    return prt1;
}

data* swap1(data* head)//迭代法
{
    data* neww = 0;
    data* next = 0;
    //data* pre = 0;
    for (data* now = head; now != 0;)
    {
        next = now->next;
        now->next = neww;
        neww = now;
        //pre = neww;
        now = next;
    }
    return neww;
}

data* swap2(data* prt)//递归法
{
    if (prt == NULL || prt->next == NULL)
    {
        return prt;
    }
    data* new_prt = swap2(prt->next);
    prt->next->next = prt;
    prt->next = NULL;
    return new_prt;
}

int main()
{
    data *prt = creat();
    data* neww = swap2(prt);
    while (neww != 0)
    {
        
        std::cout << neww->a << std::endl;
        neww = neww->next;
    }
}

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门使用技巧: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
