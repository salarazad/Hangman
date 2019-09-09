#include <stdio.h>
#include <myheader.h>
#include <string.h>

void character() {
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), GREEN);
	printchar(37,3,'_');
	printchar(36,4,'(');
	printchar(38,4,')');
	printchar(37,4,'_');
	printchar(37,5,'|');
	printchar(37,6,'|');
	printchar(38,6,'_');
	printchar(39,6,'/');
	printchar(36,6,'_');
	printchar(35,6,'\\');
	printchar(37,7,'|');
	printchar(37,8,'|');
	printchar(38,8,'_');
	printchar(39,9,'\\');
	printchar(36,8,'_');
	printchar(35,9,'/');
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), WHITE);
}

void inputlayout() {
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), BLUE);
	printchar(50,8,'_');
	printchar(52,8,'_');
	printchar(54,8,'_');
	printchar(56,8,'_');
	printchar(58,8,'_');
	printchar(60,8,'_');
	printchar(62,8,'_');
	printchar(64,8,'_');
	printchar(66,8,'_');
	printchar(68,8,'_');
	printchar(70,8,'_');
	printchar(72,8,'_');
	printchar(74,8,'_');
	printchar(76,8,'_');
	printchar(78,8,'_');
	printchar(80,8,'_');
	printchar(82,8,'_');
	printchar(84,8,'_');
	printchar(86,8,'_');
	printchar(88,8,'_');
	printchar(90,8,'_');
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), WHITE);
}


int main(int argc, char **argv)
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), RED);
	printstr(55,1,"--- Hangman ---");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), WHITE);
	
	char string[] = "Massachusetts";
	char guess;
	int numguesses = 0;
	
	character();
	inputlayout();
	
	printstr(50,3,string);
	printstr(50,4,"Your guess: ");
	cursor(62,4);
	
	do {
		guess = getch();
		int freq = 0;
		printf("%c\n", guess);
		for (int x=0; x<strlen(string); x++) {
			if (guess == string[x]) {
				printchar(50+(x*2),7,string[x]);
				freq++;
			}
		}
		if (freq == 0) {
			printstr(20,5,"wrong key");
			Sleep(500);
			clear(20,5);
		}
		numguesses ++;
	} while (numguesses < 25);
	
	
	
	
	
	
	
	
//				chposition = strchr(chposition,string[x]);
//				printf("%s\n", chposition);
//				int chindex = chposition - string;
//				switch (chindex) {
//					case 0: printchar(50,7,string[0]); break;
//					case 1: printchar(52,7,string[1]); break;
//					case 2: printchar(54,7,string[2]); break;
//					case 3: printchar(56,7,string[3]); break;
//					case 4: printchar(58,7,string[4]); break;
//					case 5: printchar(60,7,string[5]); break;
//					case 6: printchar(62,7,string[6]); break;
//					case 7: printchar(64,7,string[7]); break;
//					case 8: printchar(66,7,string[8]); break;
//					case 9: printchar(68,7,string[9]); break;
//					case 10: printchar(70,7,string[10]); break;
//					case 11: printchar(72,7,string[11]); break;
//					case 12: printchar(74,7,string[12]); break;
//					case 13: printchar(76,7,string[13]); break;
//					case 14: printchar(78,7,string[14]); break;
//					case 15: printchar(80,7,string[15]); break;
//					case 16: printchar(82,7,string[16]); break;
//					case 17: printchar(84,7,string[17]); break;
//					case 18: printchar(86,7,string[18]); break;
//					case 19: printchar(88,7,string[19]); break;
//					case 20: printchar(90,7,string[20]); break;
//				}
//				printf("out of switch loop\n");
	
	
//	char *chposition = strchr(string,guess);
//	int chindex = chposition - string;
//	printf("Location of %c: %d\n", guess, chindex);
//	switch (chindex) {
//		case 0: printchar()
//	}
//	itoa(chindex,chstring,10);
//	if (chstring[0] == '-') {
//		printf("%c does not exist\n", guess);
//	}
//	else {
//		printf("$c exists", guess);
//	}
	
	
	printf("\n\n\n\n\n\n");
	
	return 0;
}
