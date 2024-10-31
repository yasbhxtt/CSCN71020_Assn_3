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
		{	//Player1 Expected To Win
			Assert::AreEqual("Player1", Game_OUTCOME("Scissors", "Paper"));
			Assert::AreEqual("Player1", Game_OUTCOME("Paper", "Rock"));
			Assert::AreEqual("Player1", Game_OUTCOME("Rock", "Scissors"));
		}
		
		TEST_METHOD(TestPlayer2Winning)
		{	//Player2 Expected To Win
			Assert::AreEqual("Player2", Game_OUTCOME("Paper", "Scissors"));
			Assert::AreEqual("Player2", Game_OUTCOME("Scissors", "Rock"));
			Assert::AreEqual("Player2", Game_OUTCOME("Rock", "Paper"));
		}

		TEST_METHOD(TestPlayersDraw)
		{	//Players Are Expected To Draw!
			Assert::AreEqual("DRAW!", Game_OUTCOME("Paper", "Paper"));
			Assert::AreEqual("DRAW!", Game_OUTCOME("Scissors", "Scissors"));
			Assert::AreEqual("DRAW!", Game_OUTCOME("Rock", "Rock"));
		}

		TEST_METHOD(TestInvalidInput)
		{	//INVALID INPUTS! inputs from user should not be valid
			Assert::AreEqual("INVALID INPUT!", Game_OUTCOME("@#$WF", "Paper"));
			Assert::AreEqual("INVALID INPUT!", Game_OUTCOME("", "Scissors"));
			Assert::AreEqual("INVALID INPUT!", Game_OUTCOME("1232", "Rock"));
			Assert::AreEqual("INVALID INPUT!", Game_OUTCOME("OWL", "Paper"));
			Assert::AreEqual("INVALID INPUT!", Game_OUTCOME("SCISSOR23", "Fo3rk"));
			Assert::AreEqual("INVALID INPUT!", Game_OUTCOME("SPoon", "Rock"));
		}


	};
}
