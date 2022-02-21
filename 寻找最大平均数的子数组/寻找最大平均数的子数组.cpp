// 寻找最大平均数的子数组.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
using namespace std;

double* test(int* arrayy, int m, int k)
{
    int sum = 0;
    for (int i = 0; i < k; i++)
    {
        sum += arrayy[i];
    }
    int max = sum, num = 0;
    for (int i = k; i < m; i++)
    {
        sum = sum - arrayy[i - k] + arrayy[i];
        if (sum > max)
        {
            max = sum;
            num = i - k + 1;
        }
    }
    cout << (max / (double)k) << " " << num << endl;
    double res[2] = { (max / k),num };
    for (int i = 0; i < 2; i++)
    {
        cout << res[i] << endl;
    }
    return res;
}

int main()
{
    int arrayy[] = { 0,1,2,0,0,0,0,0,0,9,8 }, n = sizeof(arrayy) / sizeof(int);
    double* res = test(arrayy,n,2);
    for (int i = 0; i < 2; i++)
    {
        cout << res[i] << endl;
    }

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
