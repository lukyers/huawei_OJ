#include <iostream>
#include <sstream>
#include <string>
#include <vector>

using namespace std;

static int res = 0;

std::vector<std::string> split(std::string str, std::string pattern)  
{  
	std::string::size_type pos;  
	std::vector<std::string> result;  
	str += pattern;
	int size = str.size();  

	for(int i=0; i<size; i++)  
	{  
		pos=str.find(pattern, i);  
		if(pos < size)
		{  
			std::string s=str.substr(i,pos-i);  
			result.push_back(s);  
			i=pos+pattern.size()-1;
		}
	}  
	return result;  
} 

int analystrs(vector<string> strs)
{
	string cmd;
	vector<string>::iterator ita;
	for (ita = strs.begin(); ita != strs.end(); ++ita)
	{
		if (strs.size() == 7){
			res = 2;
			break;
		}
		if ("1T2T3T" == *ita)
			res++;

		cmd = *ita;
		if (cmd.size() >= 8)
			res += 2;
	}
	return res;
}

int main()
{
	int i = 0;
	string str, p[7];
	vector<string> strs;

	getline(cin, str);
	strs = split(str, ",");
	res = analystrs(strs);
	cout<<res<<endl;
	return 0;
}