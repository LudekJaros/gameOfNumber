#include "iostream"
#include "color.h"
#include "ctime"

/*Guessing a secret number*/
using namespace std;
int main(int argc, char *argv[]){
	system("chcp 65001>nul");
	srand(time(0));
	int secretNumber;
	int playersNumber;
	secretNumber = rand()%5+1; // random from 1 to 5
	cout << "Enter your type for a secret number: ";
	cin >> playersNumber;
	return 0;
}
