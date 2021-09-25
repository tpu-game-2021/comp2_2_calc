#pragma once // インクルードガード

// C++ でCのライブラリを使うときのおまじない
#ifdef __cplusplus
extern "C" {
#endif


// 2つの数字が等しいですか？
bool is_same(int val1, int val2);


// val1 から val3 の任意の組み合わせで値の和がsumになる組み合わせは何個ありますか？
int calc_combinations_3(int sum, int val1, int val2, int val3);


// C++ でCのライブラリを使うときのおまじない
#ifdef __cplusplus
} // extern "C"
#endif