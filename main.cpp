/*
* 文件名：main.cpp
* 作者：刘作瀚
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
	std::cout << "欢迎进入ASCII加密系统\n";
	std::cout << "加密请输入1，解密请输入2：";
	int cmd;
	std::cin >> cmd;
	if (cmd == 1)
	{
		std::cout << "请输入要加密的字符串：";
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
		std::cout << "请输入n：";
		int n;
		std::cin >> n;
		std::string input, ans = "";
		char m;
		for (int i = 0; i < n; i++)
		{
			std::cout << "请输入要解密的字符串：";
			std::cin >> input;
			ASCIIEncipher link = ASCIIEncipher();
			m = link.decipher(input);
			ans.insert(ans.length(), 1, m);
		}
		std::cout << ans << std::endl;
	}
	return 0;
}