#define WIN32_LEAN_AND_MEAN             // Windows ヘッダーからほとんど使用されていない部分を除外する
#include "Windows.h"                    // Windows API の機能定義

#include <stdbool.h>

#include "../include/lib_func.h"

// 2つの数字が等しいですか？
bool is_same(int val1, int val2)
{
	// やること：この処理を数字を比較するように変更します
	if (val1==val2)
	{
		return  true;
	}

	else {
		return false;
	}
	
}

// val1 から val3 の任意の組み合わせでsumになる組み合わせは何個ありますか？
int calc_combinations_3(int sum, int val1, int val2, int val3)
{
	int a,b,c,d;
	int count = 0;
	a = val1 + val2;
	b = val1 + val3;
	c = val2 + val3;
	d = val1 + val2 + val3;

	if (a == sum)
	{
		count = count + 1;
	}
	if (b == sum)
	{
		count = count + 1;
	}
	if (c == sum)
	{
		count = count + 1;
	}
	if (d == sum)
	{
		count = count + 1;
	}
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
	// やること：val1～val3の和がsumになる数字の組み合わせの数を計算します
	return count;
}
/*sum = 2;
val1 = 1;
val2 = 1;
val3 = 1;
printf("%dと%dと%dの任意の数の和が%dになる組み合わせは%d通りです\n", val1, val2, val3, sum, calc_combinations_3(sum, val1, val2, val3));

sum = 3;
val1 = 1;
val2 = 2;
val3 = 3;
printf("%dと%dと%dの任意の数の和が%dになる組み合わせは%d通りです\n", val1, val2, val3, sum, calc_combinations_3(sum, val1, val2, val3));*/
