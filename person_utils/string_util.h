#ifndef _UTILS_STRING_UTILS_H
#define _UTILS_STRING_UTILS_H

#include <vector>
#include <string>

namespace StrUtil
{
	std::vector<std::string> str_split(const std::string &str, char szDelim);
};

#endif