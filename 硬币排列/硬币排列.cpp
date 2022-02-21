// 硬币排列.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
using namespace std;


int test1(int n)//穷举法
{
    int a = 0;
    for (int i = 1;; i++)
    {
        a = a + i;
        if (a >= n)
        {
            return i;
        }
    }
}

int test2(int n)//二分查找法
{
    int low = 0, hight = n;
    while (low <= hight)
    {
        if ((1 + (low + hight) / 2) * ((low + hight) / 2) / 2 > n)
        {
            hight = (low + hight) / 2 - 1;
        }
        else if ((1 + (low + hight) / 2) * ((low + hight) / 2) / 2 < n)
        {
            low = (low + hight) / 2 + 1;
        }
        else if ((1 + (low + hight) / 2) * ((low + hight) / 2) / 2 == n)
        {
            return (low + hight) / 2;
        }
    }
    return hight;
}


int niudundiedai(double a, double b)
{
    double res = (a + (2 * b + a) / a) / 2;
    if (res == a)
    {
        return res;
    }
    else
    {
        return niudundiedai(res, b);
    }
}


int test3(int n)//牛顿迭代法，利用了开平方的公式
{
    if (n == 0)
    {
        return 0;
    }
    return niudundiedai(1.0, n);
}


int main()
{
    cout << test3(16) << endl;
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
