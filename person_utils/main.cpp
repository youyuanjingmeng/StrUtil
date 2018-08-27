#include <cstdio>
#include "string_util.h"

int main()
{
	std::vector<std::string> vecIp = StrUtil::str_split("202.200.112.200", '.');
	return 0;
}