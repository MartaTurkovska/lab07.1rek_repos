#include "pch.h"
#include "CppUnitTest.h"
#include "../lab_07.1(rek)/lab_07.1(rek).cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest71rek
{
	TEST_CLASS(UnitTest71rek)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			int a;
			int S = 0;
			int k = 0;
			int rowCount = 8;
			int colCount = 5;
			int** y = new int* [rowCount];
			for (int i = 0; i < rowCount; i++)
				y[i] = new int[colCount];
			Create(y, rowCount, colCount, 99, 21, 0, 0);
			Calc(y, rowCount, colCount, S, k, 4, 4);
			a = S;
			Assert::AreEqual(a, 302);
		}
	};
}
