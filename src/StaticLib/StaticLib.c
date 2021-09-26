#define WIN32_LEAN_AND_MEAN             // Windows ヘッダーからほとんど使用されていない部分を除外する
#include "Windows.h"                    // Windows API の機能定義

#include <stdbool.h>

#include "../include/lib_func.h"

// 2つの数字が等しいですか？
bool is_same(int val1, int val2)
{
	// やること：この処理を数字を比較するように変更します
	return is_same(val1, val2);
}

// val1 から val3 の任意の組み合わせでsumになる組み合わせは何個ありますか？
int calc_combinations_3(int sum, int val1, int val2, int val3)
{
	// やること：val1～val3の和がsumになる数字の組み合わせの数を計算します
	int combination = 0;
	int A = val1 + val2;
	int B = val2 + val3; 
	int C = val3 + val1;
	int D = val1 + val2 + val3;
	
	if (val1==sum)
	{
		combination = combination + 1;
	}
	if (val2==sum)
	{
		combination = combination + 1;
	}
	if (val3==sum)
	{
		combination = combination + 1;
	}
	if (A==sum)
	{
		combination = combination + 1;
	}
	if (B==sum)
	{
		combination = combination + 1;
	}
	if (C==sum)
	{
		combination = combination + 1;
	}
	if (D==sum)
	{
		combination = combination + 1;
	}
	
	return combination;
}
