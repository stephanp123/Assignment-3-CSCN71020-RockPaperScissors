#include "pch.h"
#include "CppUnitTest.h"
#define MAXLEN 10

extern "C" char* RPSoption(char* playerOne, char* playerTwo);
extern "C" char* inputErrP1(char* playerOne);
extern "C" char* inputErrP2(char* playerTwo);

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace RPSTests
{
	TEST_CLASS(RPSTests) {
	public:
		
		TEST_METHOD(player_one_and_two_inputs_rock_expected_draw)
		{

			char* playerOne = "rock";

			char* playerTwo = "rock";

			char* expected = "Draw";

			char* actual = RPSoption(playerOne, playerTwo);

			Assert::AreEqual(expected, actual);

		}
		TEST_METHOD(player_one_and_two_inputs_scissors_expected_draw)
		{

			char* playerOne = "scissors";

			char* playerTwo = "scissors";

			char* expected = "Draw";

			char* actual = RPSoption(playerOne, playerTwo);

			Assert::AreEqual(expected, actual);

		}
		TEST_METHOD(player_one_and_two_inputs_paper_expected_draw)
		{

			char* playerOne = "paper";

			char* playerTwo = "paper";

			char* expected = "Draw";

			char* actual = RPSoption(playerOne, playerTwo);

			Assert::AreEqual(expected, actual);

		}
		TEST_METHOD(player1_rock_player2_paper_expected_player2wins)
		{

			char* playerOne = "rock";

			char* playerTwo = "paper";

			char* expected = "Player2";

			char* actual = RPSoption(playerOne, playerTwo);

			Assert::AreEqual(expected, actual);

		}
		TEST_METHOD(player1_paper_player2_rock_expected_player1wins)
		{

			char* playerOne = "paper";

			char* playerTwo = "rock";

			char* expected = "Player1";

			char* actual = RPSoption(playerOne, playerTwo);

			Assert::AreEqual(expected, actual);

		}
		TEST_METHOD(player1_scissors_player2_paper_expected_player1wins)
		{

			char* playerOne = "scissors";

			char* playerTwo = "paper";

			char* expected = "Player1";

			char* actual = RPSoption(playerOne, playerTwo);

			Assert::AreEqual(expected, actual);

		}
		TEST_METHOD(player1_paper_player2_scissors_expected_player2wins)
		{

			char* playerOne = "paper";

			char* playerTwo = "scissors";

			char* expected = "Player2";

			char* actual = RPSoption(playerOne, playerTwo);

			Assert::AreEqual(expected, actual);

		}
		TEST_METHOD(player1_rock_player2_paper_scissors_player1wins)
		{

			char* playerOne = "rock";

			char* playerTwo = "scissors";

			char* expected = "Player1";

			char* actual = RPSoption(playerOne, playerTwo);

			Assert::AreEqual(expected, actual);

		}
		TEST_METHOD(player1_scissors_player2_rock_expected_player2wins)
		{

			char* playerOne = "scissors";

			char* playerTwo = "rock";

			char* expected = "Player2";

			char* actual = RPSoption(playerOne, playerTwo);

			Assert::AreEqual(expected, actual);

		}
		TEST_METHOD(invalid_input_from_player1_Rock_expected_ERRORmsg)
		{

			char* playerOne = "Rock" "ROCK";

			char* expected = "Invalid";

			char* actual = inputErrP1(playerOne);

			Assert::AreEqual(expected, actual);

		}
		TEST_METHOD(invalid_input_from_player1_Paper_expected_ERRORmsg)
		{

			char* playerOne = "Paper" "PAPER";

			char* expected = "Invalid";

			char* actual = inputErrP1(playerOne);

			Assert::AreEqual(expected, actual);

		}
		TEST_METHOD(invalid_input_from_player1_Scissors_expected_ERRORmsg)
		{

			char* playerOne = "Scissors" "SCISSORS";

			char* expected = "Invalid";

			char* actual = inputErrP1(playerOne);

			Assert::AreEqual(expected, actual);

		}
		TEST_METHOD(invalid_input_from_player2_Paper_expected_ERRORmsg)
		{

			char* playerTwo = "Paper" "PAPER";

			char* expected = "Invalid";

			char* actual = inputErrP2(playerTwo);

			Assert::AreEqual(expected, actual);

		}
		TEST_METHOD(invalid_input_from_player2_Rock_expected_ERRORmsg)
		{

			char* playerTwo = "Rock" "ROCK";

			char* expected = "Invalid";

			char* actual = inputErrP2(playerTwo);

			Assert::AreEqual(expected, actual);

		}
		TEST_METHOD(invalid_input_from_player2_Scissors_expected_ERRORmsg)
		{

			char* playerTwo = "Scissors" "SCISSORS";

			char* expected = "Invalid";

			char* actual = inputErrP2(playerTwo);

			Assert::AreEqual(expected, actual);

		}
		TEST_METHOD(invalid_input_from_player1_misc_word_expected_ERRORmsg)
		{

			char* playerOne = "Car";

			char* expected = "Invalid";

			char* actual = inputErrP2(playerOne);

			Assert::AreEqual(expected, actual);

		}
		TEST_METHOD(invalid_input_from_player2_misc_word_expected_ERRORmsg)
		{

			char* playerTwo = "Car";

			char* expected = "Invalid";

			char* actual = inputErrP2(playerTwo);

			Assert::AreEqual(expected, actual);

		}
		TEST_METHOD(invalid_input_from_player1_no_word_expected_ERRORmsg)
		{

			char* playerOne = "";

			char* expected = "Invalid";

			char* actual = inputErrP2(playerOne);

			Assert::AreEqual(expected, actual);

		}
		TEST_METHOD(invalid_input_from_player2_no_word_expected_ERRORmsg)
		{

			char* playerTwo = "";

			char* expected = "Invalid";

			char* actual = inputErrP2(playerTwo);

			Assert::AreEqual(expected, actual);

		}
	};
}