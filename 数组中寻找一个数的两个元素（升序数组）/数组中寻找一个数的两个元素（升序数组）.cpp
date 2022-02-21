// 数组中寻找一个数的两个元素（升序数组）.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>

using namespace std;



/// <summary>
/// 有序数组一般可以采用二分法实现，进一步降低空间复杂度
/// </summary>
/// <returns></returns>

int test1(int* arrayy, int sum, int n)//二分法
{
    for (int i = 0; i < n; i++)
    {
        int temp = sum - arrayy[i];
        int low = i + 1;
        int hight = n - 1;
        for (; low <= hight;)
        {
            if (arrayy[(low + hight) / 2] > temp)
            {
                hight = (low + hight) / 2 - 1;
            }
            else if (arrayy[(low + hight) / 2] < temp)

            {
                low = (low + hight) / 2 + 1;
            }
            else
            {
                cout << i << " " << low << endl;
                return 0;
            }
        }
    }
    cout << "no found" << endl;
}


int test2(int* arrayy, int sum, int n)//双指针法
{
    int low = 0, hight = n - 1;
    for (; low <= hight;)
    {
        if (arrayy[low] + arrayy[hight] > sum)
        {
            hight -= 1;
        }
        else if (arrayy[low] + arrayy[hight] < sum)
        {
            low += 1;
        }
        else
        {
            cout << low << " " << hight << endl;
            return 0;
        }
    }
    cout << "no found" << endl;
}

int main()
{
    int arrayy[] = { 0,1,2,3,4,5,6,7,8,9 }, sum = 8, n = sizeof(arrayy)/sizeof(int);
    //test1(arrayy, sum, n);
    test2(arrayy, sum, n);
   
    
    std::cout << "Hello World!\n";
    return 0;
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
