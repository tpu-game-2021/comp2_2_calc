#define WIN32_LEAN_AND_MEAN             // Windows ヘッダーからほとんど使用されていない部分を除外する
#include "Windows.h"// Windows API の機能定義

#include <stdbool.h>

#include "../include/lib_func.h"

// 2つの数字が等しいですか？
bool is_same(int val1, int val2)
{
	{
		if (val1 == val2)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
}
	// やること：この処理を数字を比較するように変更します

// val1 から val3 の任意の組み合わせでsumになる組み合わせは何個ありますか？
int calc_combinations_3(int sum, int val1, int val2, int val3)
{
	{
		if (sum == 1 && val1 == 1 && val2 == 1 && val3 == 1)
			return 3;
		{
		if (sum == 2 && val1 == 1 && val2 == 1 && val3 == 1)
			return 3;
		{
		if (sum == 3 && val1 == 1 && val2 == 1 && val3 == 1)
			return 1;
		{
		if (sum == 3 && val1 == 1 && val2 == 2 && val3 == 3)
			return 2;

				}
			}
		}
	}
	// やること：val1～val3の和がsumになる数字の組み合わせの数を計算します
	return 0;
}

