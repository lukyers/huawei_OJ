// huawei_oj2_MaxIncSequence.cpp : �������̨Ӧ�ó������ڵ㡣
// ��������� ��ݼ����� �������ٳ��ж���λͬѧ��ʹ��ʣ�µ�ͬѧ�ųɺϳ�����

#include <iostream>

using namespace std;

int N, i, j, maxs;
int Queue[100];
int Inc[100];
int Dec[100];

int main(int argc, char **argv)
{
	cin>>N;
	if (0 == N)
		return -1;
	//int *Queue = (int *)malloc(N*sizeof(int));
	//int *Inc = (int *)malloc(N*sizeof(int));
	//int *Dec = (int *)malloc(N*sizeof(int));
	for (i = 0; i < N; ++i)
		scanf("%d", &Queue[i]);

	for (i = 0; i < N; ++i)
	{
		Inc[i] = 1;
		for (j = 0; j < i; ++j)
		{
			if (Queue[j] < Queue[i] && Inc[j] + 1 > Inc[i])
			{
				Inc[i] = Inc[j] + 1;
			}
		}
	}
	for (i = 0; i < N; ++i)
	{
		Dec[i] = 1;
		for (j = 0; j < i; ++j)
		{
			if (Queue[j] > Queue[i] && Dec[j] + 1 > Dec[i])
			{
				Dec[i] = Dec[j] + 1;
			}
		}
	}

	for (i = 0; i < N; ++i)
	{
		if (maxs < Inc[i] + Dec[i])
		{
			maxs = Inc[i] + Dec[i];
		}
	}

	printf("%d", N - maxs + 1);
	return 0;
}