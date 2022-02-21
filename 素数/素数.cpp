// 素数.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>

bool isprime(int& a)
{
    bool prime = !false;
    for (int i = 2; i < a; i++)
    {
        if (a % i == 0)
        {
            return !prime;
        }
    }
    return prime;
}

void test1(int a, int& count)//暴力破解
{
    for (int i = 2; i < 100; i++)
    {
        count += isprime(i) ? 1: 0;
    }
    
}

void test2(int a, int& count)//埃氏筛选
{
    bool *prime = new bool[a];//动态创建一个bool数组，里面全为ture
    std::cout << prime[0] << std::endl;
    for (int i = 2; i < a; i++)
    {
        if (prime[i])
        {
            count++;
            for (int j = 2 * i; j < a; j += i)
            {
                prime[j] = 0;
            }
        }
    }
}

int main()
{   
    int count = 0;
    test2(100, count);
    std::cout << count << std::endl;
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
