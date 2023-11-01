#include "pch.h"
#include "CppUnitTest.h"
#include "stdbool.h"
#define MAXLEN 10

extern "C" char* RPSoption(char* playerOne, char* playerTwo);

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace RPSTests
{
	TEST_CLASS(RPSTests) {
	public:
		
		TEST_METHOD(player_one_and_two_inputs_rock_expected_draw)
		{

			char* playerOne = "rock";

			char* playerTwo = "rock";

			char* expected = "DRAW!";

			char* actual = RPSoption(playerOne, playerTwo);

			Assert::AreEqual(expected, actual);

		}
		TEST_METHOD(player_one_and_two_inputs_scissors_expected_draw)
		{




		}
		TEST_METHOD(player_one_and_two_inputs_paper_expected_draw)
		{




		}
		TEST_METHOD(player1_rock_player2_paper_expected_player2wins)
		{




		}
		TEST_METHOD(player1_paper_player2_rock_expected_player1wins)
		{




		}
		TEST_METHOD(player1_scissors_player2_paper_expected_player1wins)
		{




		}
		TEST_METHOD(player1_paper_player2_scissors_expected_player2wins)
		{




		}
		TEST_METHOD(player1_rock_player2_paper_scissors_player1wins)
		{




		}
		TEST_METHOD(player1_scissors_player2_rock_expected_player2wins)
		{




		}
		TEST_METHOD(invalid_input_from_player1_expected_ERRORmsg)
		{




		}
		TEST_METHOD(invalid_input_from_player2_expected_ERRORmsg)
		{




		}
	};
}
