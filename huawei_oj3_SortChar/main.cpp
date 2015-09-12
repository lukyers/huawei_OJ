// huawei_oj2_MaxIncSequence.cpp : 定义控制台应用程序的入口点。
// 最长递增序列 最长递减序列 计算最少出列多少位同学，使得剩下的同学排成合唱队形

#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
	char arr[256];
	memset(arr, 0, sizeof(arr));
	char c;
	while ((c = getchar()) && (c != '\n') && (c != '\0'))
		arr[c]++;

	for (int i = 0; i < 256; ++i)
	{
		while (arr[i]--)
			cout<<char(i);
	}
	return 0;
}