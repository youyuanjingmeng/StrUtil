#include "string_util.h"
#include <sstream>

namespace StrUtil
{
	std::vector<std::string> str_split(const std::string &str, char szDelim)
	{
		std::stringstream ss(str);
		std::string strItem;
		std::vector<std::string> elemsRet;
		while (std::getline(ss, strItem, szDelim))
		{
			elemsRet.emplace_back(strItem);
		}
		return elemsRet;
	}
}