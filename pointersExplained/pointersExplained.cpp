// pointersExplained.cpp : Defines the entry point for the console application.
//

// pointers_inClassPractice.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std; 


int main()
{
	int* pAPointer; // declare a pointer
	int* pScore = 0; // declare an initialize a pointer
	int score = 1000; // This is WHAT YOU ARE POINTING TO! It had to be something
	pScore = &score; // assign pointer pScore !!!address of!!! a variable score

	cout << "Assigning &score to pScore\n";
	cout << "&score is: " << &score << "\n"; // address of a score variable
	cout << "pScore is: " << pScore << "\n"; //address stored in pointer
	cout << "score is: " << score << "\n";
	cout << "*pScore is: " << *pScore << "\n\n"; // value pointed to by pointer

	cout << "Adding 500 to score\n";
	//This line below is just a clever way of writing 
	//score = score + 500;
	//either line would work and do the same thing
	score += 500;
	cout << "score is: " << score << "\n";
	cout << "*pScore is: " << *pScore << "\n\n";

	cout << "Adding 500 to *pScore\n";
	*pScore += 500; //Dereferencing the pointer here, SHOW ME THE MONEY! aka Value!!!
	cout << "score is: " << score << "\n";
	cout << "*pScore is: " << *pScore << "\n\n"; // Dereferencing the pointer here, SHOW ME THE MONEY! aka Value!!!

	cout << "Assigning &newScore to pScore\n";
	int newScore = 5000;
	pScore = &newScore;
	cout << "&newScore is: " << &newScore << "\n";
	cout << "&newScore is: " << &newScore << "\n";
	cout << "newScore is: " << newScore << "\n";
	cout << "*pScore is: " << *pScore << "\n\n";

	cout << "Assigning &str to pStr\n";
	string str = "score";
	string* pStr = &str; //pointer to string object
	cout << "str is: " << str << "\n";
	cout << "*pStr is: " << *pStr << "\n";
	cout << "(*pStr).size() is: " << (*pStr).size() << "\n";
	cout << "pStr->size() is: " << pStr->size() << "\n";

	system("pause");
	return 0;
}

