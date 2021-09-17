#include "CppUnitTest.h"

#include "../include/lib_func.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest
{
	TEST_CLASS(UnitTestIsSame)
	{
	public:
		
		TEST_METHOD(TestIsSame0_0)
		{
			int val1 = 0;
			int val2 = 0;
			Assert::AreEqual(true, is_same(val1, val2));
		}

		TEST_METHOD(TestIsSame1_1)
		{
			int val1 = 1;
			int val2 = 1;
			Assert::AreEqual(true, is_same(val1, val2));
		}

		TEST_METHOD(TestIsNotSame0_1)
		{
			int val1 = 0;
			int val2 = 1;
			Assert::AreEqual(false, is_same(val1, val2));
		}
	};

	TEST_CLASS(UnitTestCalcCombinations3)
	{
	public:

		TEST_METHOD(TestCalcCombinations3_1111)
		{
			Assert::AreEqual(3, calc_combinations_3(1, 1, 1, 1));// 1 1 1
		}

		TEST_METHOD(TestCalcCombinations3_2111)
		{
			Assert::AreEqual(3, calc_combinations_3(2, 1, 1, 1));// 11 11 11
		}

		TEST_METHOD(TestCalcCombinations3_3111)
		{
			Assert::AreEqual(1, calc_combinations_3(3, 1, 1, 1));// 111
		}

		TEST_METHOD(TestCalcCombinations3_3123)
		{
			Assert::AreEqual(2, calc_combinations_3(3, 1, 2, 3));// 3, 12
		}

	};
}
