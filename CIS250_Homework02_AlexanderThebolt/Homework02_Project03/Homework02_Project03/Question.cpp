#include "Question.h"
Question::Question()
{

}
Question::Question(string q, string pa1, string pa2, string pa3, string pa4, int ca)
{
	question = q;
	possibleAnswer1 = pa1;
	possibleAnswer2 = pa2;
	possibleAnswer3 = pa3;
	possibleAnswer4 = pa4;
	correctAnswer = ca;
}

void Question::setQuestion(string q)
{
	question = q;
}
void Question::setPossibleAnswer1(string pa1)
{
	possibleAnswer1 = pa1;
}
void Question::setPossibleAnswer2(string pa2)
{
	possibleAnswer2 = pa2;
}
void Question::setPossibleAnswer3(string pa3)
{
	possibleAnswer3 = pa3;
}
void Question::setPossibleAnswer4(string pa4)
{
	possibleAnswer4 = pa4;
}
void Question::setCorrectAnswer(int ca)
{
	correctAnswer = ca;
}

string Question::getQuestion() const
{
	return question;
}
string Question::getPossibleAnswer1() const
{
	return possibleAnswer1;
}
string Question::getPossibleAnswer2() const
{
	return possibleAnswer2;
}
string Question::getPossibleAnswer3() const
{
	return possibleAnswer3;
}
string Question::getPossibleAnswer4() const
{
	return possibleAnswer4;
}
int Question::getCorrectAnswer() const
{
	return correctAnswer;
}