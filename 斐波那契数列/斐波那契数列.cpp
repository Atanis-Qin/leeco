// 斐波那契数列.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
using namespace std;

int test1(int n)//递归法，暴力计算
{
    if (n == 0)
    {
        return 0;
    }
    if (n == 1)
    {
        return 1;
    }
    return test1(n - 1) + test1(n - 2);
}

int test2(int* arrayy, int n)//降低重复计算的递归法，用数据记录下求过的记录
{
    if (n == 0)
    {
        arrayy[0] = 0;
        return 0;
    }
    if (n == 1)
    {
        arrayy[1] = 1;
        return 1;
    }
    //int* arrayy = new int[n + 1]();//在动态申请的后端加上（）可以全部初始化0
    int x = arrayy[n - 1];
    if (arrayy[n] != 0)
    {
        return arrayy[n];
        //return test2(arrayy, n - 1) + test2(arrayy, n - 1);
    } 
    return test2(arrayy, n - 1) + test2(arrayy, n - 2);

}


int test3(int n)//双指针，从最开始计算，记录两个数，指针往后滑动
{
    if (n == 0)
    {
        return 0;
    }
    if (n == 1)
    {
        return 1;
    }
    int sum = 0;
    int low = 0;
    int hight = 1;
    for (int i = 2;i <= n; i++)
    {
        sum = low + hight;
        low = hight;
        hight = sum;
    }
    return sum;
}


int main()
{
    //cout << test1(4) << endl;
    int a = 10;
    int* arrayy = new int[a+1]();
    //cout << test2(arrayy, a) << endl;
    std::cout << "Hello World!\n";
    delete[] arrayy;
    cout << test3(a) << endl;
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
