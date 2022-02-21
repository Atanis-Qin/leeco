// 判断是否为循环链表.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <map>
#include "dataa.h"
using namespace std;

bool test1(dataa* prt)//标记法
{
    map<dataa*, int> mymap;
    dataa* now = prt;
    while (!mymap.count(now))
    {
        mymap.insert(pair<dataa*, int>(now, 1));
        now = now->next;
        if (now == NULL)
        {
            for (auto i : mymap)
            {
                delete i.first;
            }
            return 0;
        }
    }
    for (auto i : mymap)
    {
        delete i.first;
    }

    return 1;
}

bool test2(dataa* prt)
{
    if (prt == NULL)
    {
        return 0;
    }
    dataa* low = prt;
    dataa* hight = prt->next;
    while (low != hight)
    {
        if (hight == NULL||hight -> next == NULL)
        {
            return 0;
        }
        low = low->next;
        hight = hight->next->next;
    }
    return 1;
}

dataa* creat()
{
    dataa* prt5 = new dataa(1, NULL);
    dataa* prt1 = new dataa(1, prt5);
    dataa* prt2 = new dataa(2, prt1);
    dataa* prt3 = new dataa(3, prt2);
    dataa* prt4 = new dataa(4, prt3);
    prt5->a = 5;
    prt5->next = NULL;
    return prt4;
}


int main()
{
    dataa* prt = creat();
    cout << test2(prt) << endl;
    std::cout << "Hello World!\n";
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
