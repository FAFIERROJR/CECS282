//Fancisco Fierro
//Lab 8

#include <iostream>
#include <string.h>
using namespace std;

void transform(char *raw, char *testStr);
bool testPalindrome(char *str);

int main(){
	char again = 'y';
	while(again == 'y'){
		char * rawStr = new char[80];
		char * testStr = new char[80];

		cout << "Enter a string" << endl;
		cin.getline(rawStr, 80, '\n');

		transform(rawStr, testStr);
		if(testPalindrome(testStr)){
			cout << "\"" << rawStr << "\"" << " is a Palindrome" <<endl;
		}
		else{
			cout << "\"" << rawStr << "\"" << " is not a Palindrome" << endl;
		}

		cout << "Try another?(y/n)" << endl;
		cin >> again;
		cin.ignore();
	}
	return 0;
}

void transform(char *raw, char *testStr){
	int j = 0;
	for(int i = 0; i < strlen(raw); i++){
		if(isalnum(raw[i])){
			testStr[j] = toupper(raw[i]);
			j++;
		}
	}
	testStr[j] = '\0';
}

bool testPalindrome(char * str){
	int start = 0;
	int end = strlen(str) - 1;

	while(start < end){
		if(str[start] != str[end]){
			return false;
		}
		start++;
		end--;
	}
	return true;
}