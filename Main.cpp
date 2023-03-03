// 	Jiju Airlines Reservation v.1.1.5

#include <iostream> 	//library of standard input/output streams
#include <iomanip> 		//library containing functions manipluting outputs such as setw and setprecision
#include <cctype> 		//Library that declares a set of functions to classify and transform characters such as isalpha isspace
#include <ctime> 		//Library that contain functions to get and use date and time information based from the local system
#include <windows.h> 	//Library that contains declarations for all of the functions in the Windows API SetConsoleCursorPosition, SetConsoleCursor, gotoxy, GetAsyncKeyState
#include <string>		//Library that allows us to use and manipulate string data types

#pragma warning(disable: 4996)      //To disable IDE specific errors (Visual Studio, VS Code)
#pragma comment(lib, "User32.lib")  //To link Windows 32-bit library for windows.h 

using namespace std;

void gotoxy(int x, int y) //function to set cursor position to an exact coordinates based on the x and y axis of console/terminal
{
	COORD coord;
	coord.X = x;
	coord.Y = y;	//setting both x and y coordinate of cursor
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord); //set the cursor on the coordinates
}

void Color(int color) //function to change color of text and backround
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}

void ShowConsoleCursor(bool showCursor) //function to enable or disable cursor visibility
{
	HANDLE out = GetStdHandle(STD_OUTPUT_HANDLE);
	CONSOLE_CURSOR_INFO cursorInfo;
	GetConsoleCursorInfo(out, &cursorInfo); //get current status of cursor
	cursorInfo.bVisible = showCursor; // set the cursor visibility
	SetConsoleCursorInfo(out, &cursorInfo);
}

bool runAgain = false; //Used in the function below

void arrow_keys() { //Function to use arrow keys as input in yes or no inputs
	string logo = "\t\t\t\t\t  \xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb\n\t\t\t\t\t  \xba       \xdf\xdf\xdb \xdf\xdb\xdb\xdf  \xdf\xdf\xdb \xdb  \xdb      \xba\n   \t\t\t\t\t  \xba         \xdb  \xde\xdd     \xdb \xdb  \xdb      \xba\n   \t\t\t\t\t  \xba      \xdf\xdc\xdc\xdf \xdc\xdb\xdb\xdc \xdf\xdc\xdc\xdf \xdf\xdc\xdc\xdf      \xba\n \t\t\t\t\t  \xba A    I    R    L    I    N   E\xba\n\t\t\t\t\t  \xba     R E S E R V A T I O N S   \xba\n\t\t\t\t\t  \xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc";
	bool running = true;
	char yn = ' ';
	gotoxy(50, 14);
	gotoxy(1, 14);
	ShowConsoleCursor(false); //make cursor invisible
	cout << "\t\t\t\t"; Color(241); cout << char(186); Color(240); cout << "                 " << " YES" << "       NO                     "; Color(241); cout << char(186) << endl;
	yn = ' ';
	gotoxy(54, 14);
	while (running) { //run a loop with a bool as a condition
		if (GetAsyncKeyState(VK_RIGHT)) { //detect if left arrow key is pressed
			ShowConsoleCursor(false); //make cursor invisible
			gotoxy(1, 14);
			cout << "\t\t\t\t" << char(186); Color(240); cout << "                  YES"; Color(241); cout << "      \x10NO" << "                     " << char(186) << endl; //moves arrow and highltght NO
			yn = 'N';
			gotoxy(63, 14);
            continue;
		}
		if (GetAsyncKeyState(VK_LEFT)) { //detect if right arrow key is pressed
			ShowConsoleCursor(false); //make cursor invisible
			gotoxy(1, 14);
			cout << "\t\t\t\t"; Color(241); cout << char(186) << "                 " << "\x10YES"; Color(240); cout << "       NO                     "; Color(241); cout << char(186) << endl; //moves arrow and highltght YES
			yn = 'Y';
			gotoxy(54, 14);
            continue;
		}
		if (GetAsyncKeyState(VK_RETURN)) { //detect if enter key is pressed
			switch (yn) { //switch case of decision of user
			case 'y': case 'Y':
				system("cls");
				running = false; //sets bool value to false to stop loop
				gotoxy(1, 1);
				runAgain = true; //This is for last page of system
				break;
			case 'n': case 'N': // ends program if NO is the choice
				system("cls");
				cout << logo;
				cout << "\n\n\n\t\t\t\t\t      Thank You! And Goodbye!";
				Sleep(5000); //5 Second delay before program exits out
				exit(0);
				break;
			}
		}
	}
}

// Loading Screen Layout
void loading() {
	ShowConsoleCursor(false);
	cout << "\n\n\n\n\n\t\t\t\t\t\xfe JIJU Airlines Reservations is Loading \xfe\n\n";
	char a = 177, b = 219;
	cout << "\t\t\t\t\t\t";
	for (int i = 0; i <= 22; i++)
		cout << a;
	cout << "\r";
	cout << "\t\t\t\t\t\t";
	for (int i = 0; i <= 22; i++)
	{
		cout << b;
		for (int j = 0; j <= 3e7; j++);
	}
	ShowConsoleCursor(true);
}

// Function to pause system momentarily 
void any_keypress() {
	Color(241);
	ShowConsoleCursor(false);
	cout << char(201);      for (int i = 0; i < 66; i++) { cout << char(205); }      cout << char(187) << endl;
	cout << "\t\t\t " << char(186) << setw(67) << char(186) << endl;
	cout << "\t\t\t " << char(186) << setw(67) << char(186) << endl;
	cout << "\t\t\t " << char(186); Color(240); cout << "                     Press Any Key to Proceed  "; Color(241); cout << setw(20) << char(186) << endl;
	cout << "\t\t\t " << char(186) << setw(67) << char(186) << endl;
	cout << "\t\t\t " << char(186) << setw(67) << char(186) << endl;
	cout << "\t\t\t " << char(200);      for (int i = 0; i < 66; i++) { cout << char(205); }      cout << char(188) << endl;
	system("pause>nul");
	system("cls");
}

//Main Function Of The Program
int main() {
    
	string schedTime, numPassngers_input, dateInput, destination, ageInput, baggageInput, payInput, logo = "\t\t\t\t\t  \xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb\n\t\t\t\t\t  \xba       \xdf\xdf\xdb \xdf\xdb\xdb\xdf  \xdf\xdf\xdb \xdb  \xdb      \xba\n   \t\t\t\t\t  \xba         \xdb  \xde\xdd     \xdb \xdb  \xdb      \xba\n   \t\t\t\t\t  \xba      \xdf\xdc\xdc\xdf \xdc\xdb\xdb\xdc \xdf\xdc\xdc\xdf \xdf\xdc\xdc\xdf      \xba\n \t\t\t\t\t  \xba A    I    R    L    I    N   E\xba\n\t\t\t\t\t  \xba     R E S E R V A T I O N S   \xba\n\t\t\t\t\t  \xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc";

	time_t timeNow = time(0); 				//Using ctime library, get current time from local system
	tm* localTime = localtime(&timeNow);

	// Input: Welcome Screen [Y/N]
	system("Title Test Program");
	system("cls");
	system("color f5"); //Set the main color of text and backround of program to Light White Backround and Light Blue Texts
	cout << logo;
	cout << "\n\n\n\t\t\t\t" << char(201);      for (int i = 0; i < 51; i++) { cout << char(205); }      cout << char(187) << endl;
	cout << "\t\t\t\t" << char(186); Color(240); cout << "                                                   "; Color(241); cout << char(186) << endl;
	cout << "\t\t\t\t" << char(186); Color(240); cout << "                     TITLE                         "; Color(241); cout << char(186) << endl;
	cout << "\t\t\t\t" << char(186); Color(240); cout << "                                                   "; Color(241); cout << char(186) << endl;
	cout << "\t\t\t\t" << char(186); Color(240); cout << "                  DESCRIPTION                      "; Color(241); cout << char(186) << endl;
	cout << "\t\t\t\t" << char(186); Color(240); cout << "                  YES       NO                     "; Color(241); cout << char(186) << endl;
	cout << "\t\t\t\t" << char(186); Color(240); cout << "                                                   "; Color(241); cout << char(186) << endl;
	cout << "\t\t\t\t" << char(200);      for (int i = 0; i < 51; i++) { cout << char(205); }      cout << char(188) << endl;

	// Process: Reservation for L/R and Return Input
	arrow_keys();

	// Output: Loading Screen
	cout << logo;
	//do loading before program starts
	loading();
	system("cls");

	// Output: Ask user if they want to book again
	cout << logo;
	cout << "\n\n\n\t\t\t\t" << char(201);      for (int i = 0; i < 51; i++) { cout << char(205); }      cout << char(187) << endl;
	cout << "\t\t\t\t" << char(186); Color(240); cout << "                                                   "; Color(241); cout << char(186) << endl;
	cout << "\t\t\t\t" << char(186); Color(240); cout << "        Thank You for Booking with JIJU!           "; Color(241); cout << char(186) << endl;
	cout << "\t\t\t\t" << char(186); Color(240); cout << "                                                   "; Color(241); cout << char(186) << endl;
	cout << "\t\t\t\t" << char(186); Color(240); cout << "          Would You Like to Book Again?            "; Color(241); cout << char(186) << endl;
	cout << "\t\t\t\t" << char(186); Color(240); cout << "                  YES       NO                     "; Color(241); cout << char(186) << endl;
	cout << "\t\t\t\t" << char(186); Color(240); cout << "                                                   "; Color(241); cout << char(186) << endl;
	cout << "\t\t\t\t" << char(200);      for (int i = 0; i < 51; i++) { cout << char(205); }      cout << char(188) << endl;

	arrow_keys(); //Use arrow keys as input of Yes or No
	if(runAgain) //If user picks yes, then program reruns from int main()
		main();

	return 0;
}
