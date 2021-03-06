// BubbleSort.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <vector>

using namespace std;

// 冒泡排序思想和思路
// 凡事思路很重要，只有想清楚了，想透彻了才能下笔如有神，笔下生辉
/*

对于 6 5 4 3 2 1,需要按递增(从小到达排列)
需要比较5大趟，每一大趟比较过后，最大的数字就排到了末尾。
？？n个数字冒泡为啥只需要n-1大趟比较？？n-1趟后，是不是n-1个较大的数都已经排好了？剩下那一个最小的自然也就就位了。

那么每一大趟里，又需要比较几次呢？答案是有几个数字num，就需要比较num-1次（跟趟一样的理论）

*/



void printVector(int bigLoop, int smallLoop, vector<int>& v) {

    cout << "大趟:" << bigLoop + 1 << ", 比较" << smallLoop + 1 << "次后结果：";
    for (size_t i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}


int main()
{
    vector<int> v = { 6,5,4,3,2,1 };


    int n = v.size();

    for (size_t i = 0; i < n-1; i++) // 最外层 需要走n-2-0+1 = n-1趟
    {
        for (size_t j = 0; j < n-1-i; j++) // 内层 需要比较 的次数=这一层没有比较的剩余数字个数-1
        {
            if (v[j] > v[j + 1]) // j的最大值n-2， j+1最大值n-1均在索引范围内
            {
                int temp = v[j];
                v[j] = v[j + 1];
                v[j + 1] = temp;
            }

            printVector(i,j,v);
        }
        cout << endl;
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
