#include <windows.h>

//color definition
#define 	BLACK			0
#define 	BLUE			1
#define 	GREEN			2
#define 	CYAN			3
#define 	RED				4
#define 	MAGENTA			5
#define 	BROWN			6
#define 	LIGHTGRAY		7
#define		DARKGRAY		8
#define 	LIGHTBLUE		9
#define 	LIGHTGREEN		10
#define 	LIGHTCYAN		11
#define 	LIGHTRED		12
#define 	LIGHTMAGENTA	13
#define 	YELLOW			14
#define 	WHITE			15

//keyboard keys definition
#define 	ESC 			27
#define 	F1 				59
#define 	F2 				60
#define 	F3 				61
#define 	F4 				62
#define 	F5 				63
#define 	F6 				64
#define 	F7 				65
#define 	F8 				66
#define 	F9 				67
#define 	F10 			68
#define 	HOME 			71
#define 	UP 				72
#define 	PAGE_UP 		73
#define 	LEFT 			75
#define 	RIGHT 			77
#define 	END 			79
#define 	DOWN 			80
#define 	PAGE_DOWN 		81

//setting a and print a color of a specific text
void flashcolor(char text[],char color[]) {
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
	printf("%s", text);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), WHITE);
}

//setting a color to a specific text
void setcolor(char text[],char color[]) {
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
	printf("%s", text);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), WHITE);
}

//clear
void clear(double x, double y) {
	COORD coord;
	coord.X = x;
	coord.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
	printf("%s\n", "          ");
}


//print a string to a coordination
void printstr(double x, double y, char text[]) {
	COORD coord;
	coord.X = x;
	coord.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
	printf("%s\n", text);
}

//print a character to a coordination
void printchar(double x, double y, char character) {
	COORD coord;
	coord.X = x;
	coord.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
	printf("%c\n", character);
}

//print an integer to a coordination
void printint(double x, double y, int number) {
	COORD coord;
	coord.X = x;
	coord.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
	printf("%d\n", number);
}

//print a double to a coordination
void printdouble(double x, double y, double number) {
	COORD coord;
	coord.X = x;
	coord.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
	printf("%f\n", number);
}

//print a float to a coordination
void printfloat(double x, double y, float number) {
	COORD coord;
	coord.X = x;
	coord.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
	printf("%f\n", number);
}

//cursor set to coordination
void cursor(double x, double y) {
	COORD coord;
	coord.X = x;
	coord.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
}


// convert to capital letters
//void touppercase(char word[], char i) {
//	word[i] = toupper(word[i]);
//}


// convert to small letters
//void tolowercase(char word[], char i) {
//	word[i] = tolower(word[i]);
//}


//flashing banner
void flashing () {		
	int f;
	for (f=0; f<=2; f++) {
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), RED);
		printstr(50,3,"Let the battle begin");
		Sleep(400);
		system("cls");
		Sleep(400);
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), WHITE);
	}
}


void SetTextBold()
{
    // hi-white on black 
    SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE),
                              FOREGROUND_RED |
                                FOREGROUND_GREEN |
                                FOREGROUND_BLUE |
                                FOREGROUND_INTENSITY );
}



// change console background color
//	system("COLOR 5");                            // change the text font color to pinnk (5)
//	printf("Hello,World!\n");
//	system("COLOR FC");                           // double degit is for changing the text font and the background color
//	printf("Goodbuy Moon\n");
//	system("COLOR 7");




// change font to BOLD
//	HANDLE outcon = GetStdHandle(STD_OUTPUT_HANDLE);
//	CONSOLE_FONT_INFOEX font;
//	font.dwFontSize.X=7;
//	font.dwFontSize.Y=12;
//	SetCurrentConsoleFontEx(outcon, false, &font);
//	SetConsoleTextAttribute(outcon, 0x0C);



// delete a character from a string and return the new string
char* delchar(char *tiles2, char rmvchr) {
	char *tiles;
	tiles = malloc(sizeof(char)*10);
//	tiles = malloc(sizeof(tiles)*10);
	strcpy(tiles,tiles2);
	char *m;
	m = strchr(tiles,rmvchr);
	if (m){
		int position = m - tiles;
		strcpy(&tiles[position], &tiles[position+1]);
		return tiles;
	}
	else return tiles2;
	return 0;
}



//another function for deleting a character from a string, but its not complete, doesn't work
//char *delchrinstr(int rmv) {
//	
//char tiles[]="abcdefghi";
//int toBeRemoved=rmv;                     // rmv=2 , digit of character to remove
//memmove(&tiles[toBeRemoved],&tiles[toBeRemoved+1],strlen(tiles)-toBeRemoved);
//puts(tiles);
//
////return tiles;
//}




// code for typing on the keyboard, and seeing the type on the screen
//int ch;
//while (ch != 0x1B) {
//	ch = getch();           // or _getch() can also be used
//	if (ch == 224) {
//		switch (ch = getch()) {
//		case 80: printf("Down"); break;
//		case 72: printf("UP"); break;			
//		case 77: printf("RIGHT"); break;			
//		case 75: printf("LEFT"); break;	
//		}
//	}
//	else {
//		printf("%c", ch);
//	}
//}





//counting how many words in a string
//	char string[] = "This is my room, and i love it";
//	printf("The string: %s\n", string);
//	printf("\n");
//	int countwords = 0;
//	for (int i=0; i<=30; i++) {
//		if (string[i] == ' ' || string[i] == '\0') {
//			countwords++;
//		}
//	}
//	printf("number of words: %d\n", countwords);








//finding a cahracter position in a string
//int charposition(char *strposition,char ch[],int i, char string[]) {
//	strposition = strchr(strposition,ch[i]);
//	int position = strposition - string;
//	return position;
//}