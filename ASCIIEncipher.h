/*
* 文件名：ASCIIEncipher.h
* 作者：刘作瀚
*/

#pragma once

#ifndef ASCII_HEADERS_STRING_
#include <string>
#define ASCII_HEADERS_STRING_
#endif // !ASCII_HEADERS_STRING_

#ifndef ASCII_HEADERS_SSTREAM_
#include <sstream>
#define ASCII_HEADERS_SSTREAM_
#endif // !ASCII_HEADERS_SSTREAM_

#ifndef ASCII_HEADERS_VECTOR
#include <vector>
#define ASCII_HEADERS_VECTOR
#endif // !ASCII_HEADERS_VECTOR

class ASCIIEncipher
{
public:
	std::string change(int n, int d);
	std::vector<std::string> encipher(const std::string str);
};
