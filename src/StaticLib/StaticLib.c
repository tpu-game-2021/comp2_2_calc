#define WIN32_LEAN_AND_MEAN             // Windows ヘッダーからほとんど使用されていない部分を除外する
#include "Windows.h"                    // Windows API の機能定義

#include <stdbool.h>

#include "../include/lib_func.h"

// 2つの数字が等しいですか？
bool is_same(int val1, int val2)
{
	if (val1 == val2)
	{
		return true;
	}
	else
	return false;
}

// val1 から val3 の任意の組み合わせでsumになる組み合わせは何個ありますか？
int calc_combinations_3(int sum, int val1, int val2, int val3)
{
	int x = val1 + val2, y = val2 + val3,z = val1 + val3;
	int a = val1 + val2 + val3;
	int count = 0;
	if (val1 == sum)
	{
		count = count + 1;
	}
	if (val2 == sum)
	{
		count = count + 1;
	}
	if (val3 == sum)
	{
		count = count + 1;
	}
	if (x == sum)
	{
		count = count + 1;
	}
	if (y == sum)
	{
		count = count + 1;
	}
	if (z == sum)
	{
		count = count + 1;
	}
	if (a == sum)
	{
		count = count + 1;
	}
	return count;
}
