#include <iostream>
#include <cstdlib>
#include <cstring>
using namespace std;

bool palindrome(char *S, int l, int r){
	if (l >= r){
		return true;
		}
	if (S[l] != S[r]){
		return false;
		}
	return palindrome(S,l+1,r−1);
}

int main(int argc, char **argv){
	char S[] = "palabra";
	int l=7, n;
	long int num = 3984592137;
	char frase[256];
	
	cout << "ingrese una frase: " << endl;
	cin.getline (frase,256);
	cin.ignore();
	int len = strlen(frase);
	cout << "strlen(frase) = " << len << endl;
	cout << "Frase palindrome: " << palindrome(frase, 0 , len-1)<< endl;
	
	return 0;
}



