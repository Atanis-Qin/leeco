// 两个有序数列相连接.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
using namespace std;


int* test1(int* a, int n, int* b, int m)
{
    int* newarrayy = new int[n + m]();//加入括号表示全部初始化为0
    for (int i = 0, j = 0, k = 0; (i < n || j < m) && k < n + m ; k++)
    {
        bool x = a[i] < b[j];
        newarrayy[k] = x ? a[i] : b[j];
        if (x)
        {
            if (i != n - 1)
            {
                i++;
            }
            else if (i == n - 1)
            {
                for (int ii = j, kk = k+1; ii < m; ii++)
                {
                    newarrayy[kk] = b[ii];
                    kk++;
                }
                break;
            }
            
        }
        else
        {
            if (j != m - 1)
            {
                j++;
            }
            else if (j == m - 1)
            {
                for (int jj = i; jj < n; jj++)
                {
                    newarrayy[k + 1] = b[jj];
                }
                break;
            }
        }
    }
    return  newarrayy;
}


int main()
{
    int arr1[] = { 1,3,5,7,9,11,12,13,14,15 };
    int arr2[] = { 2,4,6,8,10,16,17,19,20 };
    int* re = test1(arr1, sizeof(arr1) / sizeof(int), arr2, sizeof(arr2) / sizeof(int));
    for (int i = 0; i < sizeof(arr1) / sizeof(int) + sizeof(arr2) / sizeof(int); i++)
    {
        cout << re[i] << endl;
    }
    std::cout << "Hello World!\n";
}

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单


