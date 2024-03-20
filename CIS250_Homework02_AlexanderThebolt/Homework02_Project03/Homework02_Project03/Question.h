#pragma once
#include "string"

using namespace std;

class Question
{
private:
	string question;
	string possibleAnswer1;
	string possibleAnswer2;
	string possibleAnswer3;
	string possibleAnswer4;
	int correctAnswer;
public:
	Question();
	Question(string, string, string, string, string, int);

	void setQuestion(string);
	void setPossibleAnswer1(string);
	void setPossibleAnswer2(string);
	void setPossibleAnswer3(string);
	void setPossibleAnswer4(string);
	void setCorrectAnswer(int);

	string getQuestion() const;
	string getPossibleAnswer1() const;
	string getPossibleAnswer2() const;
	string getPossibleAnswer3() const;
	string getPossibleAnswer4() const;
	int getCorrectAnswer() const;
};

