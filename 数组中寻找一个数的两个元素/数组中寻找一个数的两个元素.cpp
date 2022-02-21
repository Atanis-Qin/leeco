// 数组中寻找一个数的两个元素.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <map>
using namespace std;


/// <summary>
/// 无序数组一般可以采用标记法来提高效率
/// </summary>
/// <returns></returns>
int main()
{
    int arrayy[] = { 1,2,3,4,5,6,7,8,9 };
    int sum = 13;
    map<int, int> mymap;
    for (int i = 0; i < sizeof(arrayy) / sizeof(int); i++)
    {
        if (mymap.count(sum - arrayy[i]))//在前面遍历过的数字中找是否有这个差值，有便是结果
        {
            int arrayyy[] = { mymap.at(sum - arrayy[i]),i };
            for (int k = 0; k < 2; k++)
            {
                cout << arrayyy[k] << endl;
            }
            break;
        }
        mymap.insert(pair<int, int>(arrayy[i], i));
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
