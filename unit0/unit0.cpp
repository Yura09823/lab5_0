#include "pch.h"
#include "CppUnitTest.h"
#include "../lab5_1/lab5_1.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace unit0
{
	TEST_CLASS(unit0)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int p;
			p = g(2, 3);
			Assert::AreEqual(p, 0);
		}
	};
}
