#ifndef COMM_STRUTIL_H_
#define COMM_STRUTIL_H_

#include <vector>
#include <string>
#include <algorithm>

namespace StrUtil
{
	std::vector<std::string> split(const std::string &str, char szDelim);

	std::string toLower(const std::string &str);
	std::string toUpper(const std::string &str);

	bool startsWith(const std::string &str, const std::string &sub_str);
	bool endsWith(const std::string &str, const std::string &sub_str);

	std::string trim(const std::string &str, const std::string strToken = "");
	std::string trimLeft(const std::string &str, const std::string strToken = "");
	std::string trimRight(const std::string &str, const std::string strToken = "");
};

#endif