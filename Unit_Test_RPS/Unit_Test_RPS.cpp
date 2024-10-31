#include "pch.h"
#include "CppUnitTest.h"
#include "main.h"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;
extern "C" {
	const char* Game_OUTCOME(const char* player1, const char* player2);
}

namespace UnitTestRPS
{
	TEST_CLASS(UnitTestRPS)
	{
	public:

		TEST_METHOD(TestPlayer1Winning)
		{
			Assert::AreEqual("Player1", Game_OUTCOME("Scissors", "Paper"));
			Assert::AreEqual("Player1", Game_OUTCOME("Paper", "Rock"));
			Assert::AreEqual("Player1", Game_OUTCOME("Rock", "Scissors"));
		}

	};
}
