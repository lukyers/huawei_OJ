// huawei_oj2_MaxIncSequence.cpp : �������̨Ӧ�ó������ڵ㡣
// ��������� ��ݼ����� �������ٳ��ж���λͬѧ��ʹ��ʣ�µ�ͬѧ�ųɺϳ�����

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