#include <iostream>
#include <string>

using namespace std;

int addcan = 0, invalid = 0, ret = 0;

struct Candidate
{
	string name;
	int tickets;
};

int anlycmd(string cmd)
{
	if ("addCandidate" == cmd)
		return 1;
	else if ("vote" == cmd)
		return 2;
	else if ("getVoteResult" == cmd)
		return 3;
	else 
		return 0;
}

void outputRes(Candidate *candi, int invalid)
{
	int i;
	for (i = 0; i < addcan; ++i)
	{
		cout<<candi[i].name<<" "<<candi[i].tickets<<endl;
	}
	cout<<invalid<<endl;
}

int findcandi(string name, Candidate *candi)
{
	int i;
	for (i = 0; i < addcan; ++i)
	{
		if (name == candi[i].name)
			return i;
	}
	return -1;
}

int main()
{
	string cmd, p;
	Candidate candi[20];
	while (getline(cin, cmd))
	{
		if ("" == cmd)
			continue;
		p = strtok((char *)cmd.c_str(), " ");
		
		switch (anlycmd(p))
		{			
			case 1 :	//addCandidate
					p = strtok(NULL, " ");
					candi[addcan].name = p;
					candi[addcan].tickets = 0;
					addcan++;
					break;
			case 2 :	//vote
					p = strtok(NULL, " ");
					ret = findcandi(p, candi);
					if (-1 != ret)
						candi[ret].tickets++;
					else if (-1 == ret)
						invalid++;
					break;

			case 3 :
					outputRes(candi, invalid);
					system("pause");
					return 0;
			default:
					break;
		}
	}
	return 0;
	system("pause");
}