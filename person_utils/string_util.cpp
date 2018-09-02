#include "string_util.h"
#include <sstream>

namespace StrUtil
{
	std::vector<std::string> split(const std::string &str, char szDelim)
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

	std::string toLower(const std::string &str)
	{
		std::string strLow = str;
		std::transform(strLow.begin(), strLow.end(), strLow.begin(), ::tolower);
		return strLow;
	}

	std::string toUpper(const std::string &str)
	{
		std::string strUpper = str;
		std::transform(strUpper.begin(), strUpper.end(), strUpper.begin(), ::toupper);
		return strUpper;
	}

	bool startsWith(const std::string &str, const std::string &sub_str)
	{
		return (str.find(sub_str) == 0);
	}

	bool endsWith(const std::string &str, const std::string &sub_str)
	{
		size_t nPos = str.rfind(sub_str);
		if (nPos == str.length() - sub_str.length())
		{
			return true;
		}
		else
		{
			return false;
		}
	}

	std::string trim(const std::string &str, const std::string strToken /* = "" */)
	{
		std::string strRet = str;
		strRet.erase(0, strRet.find_first_not_of(strToken));
		strRet.erase(strRet.find_last_not_of(strToken) + 1);
		return strRet;
	}

	std::string trimRight(const std::string &str, const std::string strToken /* = "" */)
	{
		std::string strRet = str;
		strRet.erase(strRet.find_last_not_of(strToken) + 1);
		return strRet;
	}

	std::string trimLeft(const std::string &str, const std::string strToken /* = "" */)
	{
		std::string strRet = str;
		strRet.erase(0, strRet.find_first_not_of(strToken));
		return strRet;
	}
}