#include <iostream>
#include <cstdio>
using namespace std;
#include <string>
#include <sstream>
string NumToString(long long i)//Êý×Ö×ª×Ö·û´®
{
	stringstream ss;
	ss << i;
	return ss.str();
}
long long StringToNum(string s)//×Ö·û´®×ªÊý×Ö
{
	long long num;
	stringstream ss(s);
	ss >> num;
	return num;
}
long long getcode(long long num)
{
	for (int i = 0; i < 100; i++)
	{
		string text = NumToString(num * 2L);

		if (text.length() <= 12)
		{
			num = StringToNum(text);
		}
		else
		{
			num = StringToNum(text.substr(0, 12));
		}

	}
	return num;
}
int main()
{
	long long str;
	printf(
		R"(This is a keygen of xjpdf.
Only used for studying and communication.
Do not use it for commercial purpose.
If you like this software, please buy the authorised edition(http://www.xjpdf.com/buy), thanks!
)");
	cout << "Enter code:";
	cin >> str;
	cout << "Serial:" << getcode(str) << endl;
	system("pause");
	return 0;
}