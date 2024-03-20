//=====================================================================
//Name: Alexander Thebolt
//Date: 03-01-2023
//Desc: Program 3: Trivia Game - 2 player game. Players compete for the
//highest score answering 5 trivia questions each. Highest score wins.
//=====================================================================

#include <iostream>
#include "Question.h"

using namespace std;

void defaultQuestions(Question []);

int main()
{
    Question question[10];
    int answer;
    int player1Score = 0;
    int player2Score = 0;

    defaultQuestions(question);

    for (int i = 0; i < 10; i++)
    {
        if (i % 2 == 0)
        {
            cout << "Player 1's Turn" << endl;
        }
        else
        {
            cout << "Player 2's Turn" << endl;
        }
        cout << "Question #" << i + 1 << ": " << question[i].getQuestion() << endl;
        cout << "===============================================" << endl;
        cout << "1. " << question[i].getPossibleAnswer1() << endl;
        cout << "2. " << question[i].getPossibleAnswer2() << endl;
        cout << "3. " << question[i].getPossibleAnswer3() << endl;
        cout << "4. " << question[i].getPossibleAnswer4() << endl;
        cout << "===============================================" << endl;
        cout << "Answer (1, 2, 3 or 4): ";
        cin >> answer;

        if (answer == question[i].getCorrectAnswer())
        {
            if (i % 2 == 0)
            {
                player1Score++;
            }
            else
            {
                player2Score++;
            }
        }

        system("cls");
    }

    if (player1Score > player2Score)
    {
        cout << "Player 1 Wins!" << endl;
    }
    else if(player2Score > player1Score)
    {
        cout << "Player 2 Wins!" << endl;
    }
    else
    {
        cout << "It's a draw!" << endl;
    }

    cout << "Player 1's score: " << player1Score << endl;
    cout << "Player 2's score: " << player2Score << endl;
}

//question bank
void defaultQuestions(Question question[])
{
    question[10];

    question[0].setQuestion("Which pet favors me most?");
    question[0].setPossibleAnswer1("Biddle");
    question[0].setPossibleAnswer2("Kiki");
    question[0].setPossibleAnswer3("Ginger");
    question[0].setPossibleAnswer4("None of them");
    question[0].setCorrectAnswer(2);

    question[1].setQuestion("What is my eye color?");
    question[1].setPossibleAnswer1("Brown");
    question[1].setPossibleAnswer2("Blue");
    question[1].setPossibleAnswer3("Green");
    question[1].setPossibleAnswer4("Hazel");
    question[1].setCorrectAnswer(2);

    question[2].setQuestion("What is my middle name?");
    question[2].setPossibleAnswer1("Ander");
    question[2].setPossibleAnswer2("Matthew");
    question[2].setPossibleAnswer3("Brian");
    question[2].setPossibleAnswer4("The");
    question[2].setCorrectAnswer(3);

    question[3].setQuestion("How tall am I?");
    question[3].setPossibleAnswer1("5' 9''");
    question[3].setPossibleAnswer2("5' 10''");
    question[3].setPossibleAnswer3("5' 11''");
    question[3].setPossibleAnswer4("5' 2''");
    question[3].setCorrectAnswer(1);

    question[4].setQuestion("When is my birthday?");
    question[4].setPossibleAnswer1("Febuary 10th");
    question[4].setPossibleAnswer2("May 5th");
    question[4].setPossibleAnswer3("October 15th");
    question[4].setPossibleAnswer4("May 15th");
    question[4].setCorrectAnswer(3);

    question[5].setQuestion("What is my favorite color?");
    question[5].setPossibleAnswer1("Red");
    question[5].setPossibleAnswer2("Blue");
    question[5].setPossibleAnswer3("Green");
    question[5].setPossibleAnswer4("Cyan");
    question[5].setCorrectAnswer(2);

    question[6].setQuestion("How many hats do I own?");
    question[6].setPossibleAnswer1("1-5");
    question[6].setPossibleAnswer2("6-15");
    question[6].setPossibleAnswer3("16-25");
    question[6].setPossibleAnswer4("26+");
    question[6].setCorrectAnswer(4);

    question[7].setQuestion("What is my shoe size?");
    question[7].setPossibleAnswer1("8");
    question[7].setPossibleAnswer2("9");
    question[7].setPossibleAnswer3("9.5");
    question[7].setPossibleAnswer4("11");
    question[7].setCorrectAnswer(3);

    question[8].setQuestion("What do I do in my freetime?");
    question[8].setPossibleAnswer1("Game");
    question[8].setPossibleAnswer2("Sleep");
    question[8].setPossibleAnswer3("I don't have free time");
    question[8].setPossibleAnswer4("Cry");
    question[8].setCorrectAnswer(1);

    question[9].setQuestion("When do I go to sleep?");
    question[9].setPossibleAnswer1("Never");
    question[9].setPossibleAnswer2("Around 10PM");
    question[9].setPossibleAnswer3("Around 7AM");
    question[9].setPossibleAnswer4("Around 12AM");
    question[9].setCorrectAnswer(4);
}