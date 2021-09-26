#define WIN32_LEAN_AND_MEAN             // Windows ヘッダーからほとんど使用されていない部分を除外する
#include "Windows.h"                    // Windows API の機能定義

#include <stdbool.h>

#include "../include/lib_func.h"

// 2つの数字が等しいですか？
bool is_same(int val1, int val2)
{
	bool result;

	if (val1 == val2)
	{
		result = true;
	}
	else
	{
		result = false;
	}

	return result;
}

// val1 から val3 の任意の組み合わせでsumになる組み合わせは何個ありますか？
int calc_combinations_3(int sum, int val1, int val2, int val3)
{

	int count = 0;

	if (val1 == sum)
	{
		count++;
	}
	if (val2 == sum)
	{
		count++;
	}
	if (val3 == sum)
	{
		count++;
	}

	if ((val1 + val2) == sum)
	{
		count++;
	}
	if ((val1 + val3) == sum)
	{
		count++;
	}
	if ((val2 + val3) == sum)
	{
		count++;
	}

	if ((val1 + val2 + val3) == sum)
	{
		count++;
	}

	return count;
}
