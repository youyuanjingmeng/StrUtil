#include <cstdio>
#include "string_util.h"

int main()
{
	std::vector<std::string> vecIp = StrUtil::split("202.200.112.200", '.');

	std::string strSrc = "     127.0.0.1  ";
	std::string str = StrUtil::trim(strSrc, " ");
	std::string strLeft = StrUtil::trimLeft(strSrc, " ");
	std::string strRight = StrUtil::trimRight(strSrc, " ");

	std::string strTestStart = "505402303@qq.com";
	if (StrUtil::startsWith(strTestStart, "505"))
	{
		printf("%s startswith 505\n", strTestStart.c_str());
	}
	if (StrUtil::endsWith(strTestStart, "com"))
	{
		printf("%s endswith com\n", strTestStart.c_str());
	}

	std::string strUpperTest = "ABcdefGHJki";
	std::string strToUpper = StrUtil::toUpper(strUpperTest);
	std::string strToLower = StrUtil::toLower(strUpperTest);
	printf("%s to Upper is: %s\n", strUpperTest.c_str(), strToUpper.c_str());
	printf("%s to Lower is: %s\n", strUpperTest.c_str(), strToLower.c_str());
	return 0;
}