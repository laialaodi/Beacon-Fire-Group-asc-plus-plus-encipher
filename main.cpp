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
	std::cout << "������Ҫ���ܵ��ַ�����";
	std::string input;
	getline(std::cin, input);
	ASCIIEncipher link = ASCIIEncipher();
	std::vector<std::string> ans = link.encipher(input);
	std::vector<std::string>::iterator it = ans.begin();
	while (it != ans.end())
	{
		std::cout << *it << std::endl;
		it++;
	}
	return 0;
}