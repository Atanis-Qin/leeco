// 数组三个元素最大乘法结果.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
using namespace std;

void sort(int* arrayy, int n)
{
    int temp = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arrayy + i < arrayy + j)
            {
                temp = *(arrayy + i);
                *(arrayy + i) = *(arrayy + j);
                *(arrayy + j) = temp;
            }
        }
    }
}

int test(int* arrayy, int &n)//排序方法
{
    sort(arrayy, n);
    for (int i = 0; i < 5; i++)
    {
        cout << arrayy[i] << endl;
    }
    return (arrayy[0] * arrayy[1] * arrayy[2] > arrayy[0] * arrayy[n - 1] * arrayy[n - 2]
        ? arrayy[0] * arrayy[1] * arrayy[2]
        : (arrayy[0] * arrayy[n - 1] * arrayy[n - 2]));
}

int test2(int* arrayy, int n)//扫查法
{
    int max1 = -99999, max2 = -99998, max3 = -99997;
    int min1 = 99999, min2 = 99998;
    cout << n << endl;
    for (int i = 0; i < n; i++)
    {
        cout << i << endl;
        if (*(arrayy + i) > max1)
        {
            max3 = max2;
            max2 = max1;
            max1 = *(arrayy + i);
        }
        else if (*(arrayy + i) > max2)
        {
            max3 = max2;
            max2 = *(arrayy + i);
        }
        else if (*(arrayy + i) > max3)
        {
            max3 = *(arrayy + i);
        }
        if (*(arrayy + i) < min1)
        {
            min2 = min1;
            min1 = *(arrayy + i);
        }
        else if (*(arrayy + i) < min2)
        {
            min2 = *(arrayy + i);
        }
    }
        cout << max1 << " " << max2 << " " << max3 << " " << min2 << " " << min1 << endl;
        return max1 * max2 * max3 > min1 * min2 * max1 ? max1 * max2 * max3 : min1 * min2 * max1;
    
}

int main()
{
    std::cout << "Hello World!\n";
    int arrayy[] = { -1,0,1,2,3 };
    int n = sizeof(arrayy) / sizeof(int);
    //cout << test(arrayy, n) << endl;
    cout << n << endl;
    cout << test2(arrayy, n) << endl;
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
