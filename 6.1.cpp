#include "pch.h"
#include "CppUnitTest.h"
#include "../lab6.1/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace My61
{
	TEST_CLASS(UnitTest61rec)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			const int n = 7;
			int a[n] = { -2, 8, 7, -6, 5, -4, 6 };
			int count = 0;
			for (int i = 0; i < n; i++)
			{
				if (a[i] % 2 == 0 && a[i] < 0)
					count++;
			}
			Assert::AreEqual(3, count);
		}
	};
}

