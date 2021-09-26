#define WIN32_LEAN_AND_MEAN             // Windows ヘッダーからほとんど使用されていない部分を除外する
#include "Windows.h"                    // Windows API の機能定義

#include <stdbool.h>

#include "../include/lib_func.h"

// 2つの数字が等しいですか？
bool is_same(int val1, int val2)
{
	// やること：この処理を数字を比較するように変更します
	if (val1 == val2)
	{
		return true;
	}
	else {
		return false;
	}
}

// val1 から val3 の任意の組み合わせでsumになる組み合わせは何個ありますか？
int calc_combinations_3(int sum, int val1, int val2, int val3)
{
	// やること：val1～val3の和がsumになる数字の組み合わせの数を計算します
	if ((sum == val1 == val2 == val3) || (val1 == val2 == val3 && sum == val1 * 2)) {
		return 3;
	}
	else if (val1 + val2 + val3 == sum || val1 + val2 == sum || val1 + val3 == sum || val2 + val3 == sum)
	{
		if (sum == val1 || sum == val2 || sum == val3) {
			return 2;
		}
		else {
			return 1;
		}
	}
	else if (sum == val1 || sum == val2 || sum == val3) {
		return 1;
	}
	else {
		return 0;
	}
}
