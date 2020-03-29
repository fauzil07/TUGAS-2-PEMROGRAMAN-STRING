#include <iostream>
#include <string.h>
using namespace std;

int main(){
	char kata[100];
	char kata2[100];
	
	cout<<"Masukkan kalimat : ";
	gets(kata);
	cout<<"Masukkan kalimat pengganti : ";
	gets(kata2);
	
	strcpy(kata,kata2);
	cout<<endl<<kata;
	return 0;
}
