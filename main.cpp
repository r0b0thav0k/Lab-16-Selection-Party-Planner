/*****************************************************************************
 * AUTHOR	  : Stanley Ferguson and Milad Fatemi
 * STUDENT ID : 1052330 and 1050506
 * LAB #16	  : Selection - Party Planner
 * CLASS	  : CS1A
 * SECTION	  : MW: 8am
 * DUE DATE	  : 03/27/17
 *****************************************************************************/

#include <iostream>
#include <iomanip>
#include <cstring>
#include <ctype.h>
using namespace std;

/*****************************************************************************
 * OUTPUT - SNACK SERVED AND BEVERAGE SERVED
 *----------------------------------------------------------------------------
 * This program will obtain from the friend their full name,
 *  age, snack preference, and beverage based on age.
 *
 * It selects, stores and outputs the beverage and snack preference for each
 * user based on their age
 *
 *----------------------------------------------------------------------------
 * INPUT:
 *	  The set of data will be input
 *
 * 	  	name		: the full name of the friend
 * 	 	age				: the age of friend
 * 	  	snackChocolate	: if friend likes chocolate option
 * 	  	snackNuts		: if friend likes nuts option
 *
 * OUTPUT:
 * 	This program will output the program heading, the beverage and snack
 * 	preference for each user based on their age
 *
 * 		name		: the full name of the friend
 * 		snackPreference	: the friends snack preference
 * 		beverage		: the friends beverage based on age
 *
 *****************************************************************************/

int main()
{
	/*************************************************************************
	 * CONSTANTS
	 * -----------------------------------------------------------------------
	 * OUTPUT - THE CLASS HEADING
	 * -----------------------------------------------------------------------
	 * PROGRAMMER : Programmer's Name
	 * CLASS	  : Student's Course
	 * SECTION	  : Class Days and Times
	 * LAB_NUM	  : Lab Number (specific to this lab)
	 * LAB_NAME	  : Title of the Lab
	 * -----------------------------------------------------------------------
	 * CONSTANTS USED FOR THE COLUMN SPACING
	 * -----------------------------------------------------------------------
	 * NAME_SIZE  	   : spacing for the user's full name
	 * PROMPT_COL 	   : spacing for the prompt column
	 * SNACK_PREF_SIZE : size for string
	 * BEVERAGE_SIZE   : size for string
	 *************************************************************************/
	const char  PROGRAMMER[] = "Stanley Ferguson and Milad Fatemi";
	const char  CLASS[]		 = "CS1A";
	const char  SECTION[]	 = "MW: 8:00a";
	const int   LAB_NUM      = 16;
	const char  LAB_NAME[]   = "Selection - Party Planner";

    const int 		NAME_SIZE  = 25;
    const int 		PROMPT_COL = 30;
    const char SNACK_PREF_SIZE = 16;
    const char BEVERAGE_SIZE   = 5;

    char name[NAME_SIZE];
	int  age;             	  			   // IN & CALC  - friend's age
	char snackChocolate;  	  			   // IN & CALC  - if friends like
										   //              chocolate
	char snackNuts;       	  			   // IN & CALC  - if friends like
										   //			   nuts
	char snackPreference[SNACK_PREF_SIZE]; // CALC & OUT - friend's snack
										   //			   preference
	char beverage[BEVERAGE_SIZE];          // CALC & OUT - friend's beverage
										   //			   type

	// OUTPUT - Class Heading
	cout << left;
	cout << "**********************************************************\n";
	cout << "*  PROGRAMMED BY : "  << PROGRAMMER << endl;
	cout << "*  "	   << setw(14) << "CLASS"	 << ": " << CLASS    << endl;
	cout << "*  "	   << setw(14) << "SECTION"  << ": " << SECTION  << endl;
	cout << "*  LAB #" << setw(9)  << LAB_NUM	 << ": " << LAB_NAME << endl;
	cout << "**********************************************************\n\n";
	cout << right;

	/*************************************************************************
	 * INPUT - The user will input their full name, age, and whether or not
	 *         the friend likes chocolate
	 *
	 *************************************************************************/
	// INPUT - fullName, age, and snackChocolate/snackNuts comparison
	cout << left;
	cout << setw(PROMPT_COL) << "What is your friend\'s name? ";
	cin.getline(name,NAME_SIZE);
	//cerr << "TESTING: name: " << name;

	cout << setw(PROMPT_COL) << "How old is your friend? ";
	cin  >> age;
	cin.ignore(1000,'\n');
	//cerr << "TESTING: age: " << age;

	cout << setw(PROMPT_COL) << "Do they like chocolate (Y/N)? ";
	cin.get(snackChocolate);
	snackChocolate = toupper(snackChocolate);
	cin.ignore(1000, '\n');
	//cerr << "TESTING: Snack Chocolate: " << snackChocolate;

	//if-then-else statement for snackChocolate
	if (snackChocolate == 'Y')
	{
		cout << setw(PROMPT_COL) << "Do they like nuts (Y/N)? ";
		cin.get(snackNuts);
		snackNuts = toupper(snackNuts);
		cin.ignore(1000, '\n');
		cout << endl;
		//cerr << "TESTING: Snack Nuts: " << snackNuts;

		//if-then-else statement for snackNuts including string copy for each
		if (snackNuts == 'Y')
		{
			strncpy(snackPreference, "Peanut M & M\'s", SNACK_PREF_SIZE);
			//cerr << "TESTING: Snack Preference: " << snackPreference;
		}
		else
		{
			strncpy(snackPreference, "M & M\'s", SNACK_PREF_SIZE);
			//cerr << "TESTING: Snack Preference: " << snackPreference;
		}
	}
	else
	{
		strncpy(snackPreference, "Skittles", SNACK_PREF_SIZE);
		cout << endl;
		//cerr << "TESTING: Snack Preference: " << snackPreference;
	}

	//if-then-else statement for beverage including string copy for each
	if (age >= 21)
	{
		strncpy(beverage, "beer", BEVERAGE_SIZE);
		//cerr << "TESTING: Beverage: " << beverage;
	}
	else
	{
		strncpy(beverage, "soda", BEVERAGE_SIZE);
		//cerr << "TESTING: Beverage: " << beverage;
	}

	cout << right;

	/*************************************************************************
	 * PROCESSING - none for this lab
	 *************************************************************************/

	/*************************************************************************
	 * OUTPUT - output will be what should be served to the friend including
	 * 			friend's full name, snack preference, and beverage:
	 *
	 *************************************************************************/

	cout << left;
	cout << "You should serve " << name << " " << snackPreference << " and "
		 << beverage << ".";
	cout << right << endl << endl;
	return 0;
}
