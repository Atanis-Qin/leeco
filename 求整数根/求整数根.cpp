// 求整数根.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
using namespace std;

int test1(int& a)//二分法
{
    int low = 0, hight = a, index = -1;
    while ((hight - low) > 0)
    {
        if ((low + (hight - low)/2) * (low + (hight - low)/2) > a)
        {
            hight = low + (hight - low) / 2 - 1;
        }
        //else if(((hight + low) / 2) * ((hight + low) / 2) == a)
        //{
        //    return (hight + low) / 2;
        //}
        else 
        {
            index = low + (hight - low) / 2;
            low = low + (hight - low) / 2 + 1;
        }
    }
    return index;
}


int test2(double i, int a)//牛顿迭代
{
        double x = (i + a / i) / 2;
        if (a/i == i)
        {
            return i;
        }
        else
        {
            return test2(a / x, a);
        }
 
}



int main()
{
    int x = 16;
    std::cout << "Hello World!\n";
    int a = test2(1, x);
    cout << a << endl;
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
