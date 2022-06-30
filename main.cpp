/*
* �ļ�����main.cpp
* ���ߣ������
*/

#ifndef ASCII_STD_IOSTREAM_
#include <iostream>
#define ASCII_STD_IOSTREAM_
#endif // !ASCII_STD_IOSTREAM_

#ifndef ASCII_HEADERS_ENCIPHER_H_
#include "ASCIIEncipher.h"
#define ASCII_HEADERS_ENCIPHER_H_
#endif // !ASCII_HEADERS_ENCIPHER_H_

int main()
{
	std::cout << "��ӭ����ASCII����ϵͳ\n";
	std::cout << "����������1������������2��";
	int cmd;
	std::cin >> cmd;
	if (cmd == 1)
	{
		std::cout << "������Ҫ���ܵ��ַ�����";
		std::string input;
		std::cin >> input;
		ASCIIEncipher link = ASCIIEncipher();
		std::vector<std::string> ans = link.encipher(input);
		std::vector<std::string>::iterator it = ans.begin();
		while (it != ans.end())
		{
			std::cout << *it << std::endl;
			it++;
		}
	}
	else
	{
		std::cout << "������n��";
		int n;
		std::cin >> n;
		std::string input, ans = "";
		char m;
		for (int i = 0; i < n; i++)
		{
			std::cout << "������Ҫ���ܵ��ַ�����";
			std::cin >> input;
			ASCIIEncipher link = ASCIIEncipher();
			m = link.decipher(input);
			ans.insert(ans.length(), 1, m);
		}
		std::cout << ans << std::endl;
	}
	return 0;
}