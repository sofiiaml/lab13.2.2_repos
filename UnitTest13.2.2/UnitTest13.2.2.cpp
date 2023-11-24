#include "pch.h"
#include "CppUnitTest.h"
#include "../PR13.2.2/PR13.2.2.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1322
{
	TEST_CLASS(UnitTest1322)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			char num = '5', letter = 'k', punct = ',';
			Assert::IsTrue(CHECK_NUM(num));
			Assert::IsTrue(CHECK_LETTER(letter));
			Assert::IsTrue(CHECK_PUNCT(punct));
			Assert::IsFalse(CHECK_NUM(letter));
			Assert::IsFalse(CHECK_NUM(punct));
			Assert::IsFalse(CHECK_LETTER(punct));
			Assert::IsFalse(CHECK_LETTER(num));
			Assert::IsFalse(CHECK_PUNCT(letter));
			Assert::IsFalse(CHECK_PUNCT(num));
		}
	};
}
