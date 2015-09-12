#include <iostream>
#include <string>

using namespace std;

int main()
{
	char word[128];
	int res = 0, i1 = 0, i2 = 0;

	gets(word);

	while(1)
	{
		if (*word == NULL)
		{
			return -1;
		}
		if ('\0' == word[i2])
		{
			res = i2 - i1;
			break;
		}
		else if (' ' == word[i2])
		{
			i1 = i2 + 1;
		}
		i2++;
	}
	cout<<res<<endl;
	return 0;
}