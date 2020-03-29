#include <iostream>
#include <string.h>
using namespace std;

int main(){
	char test1[]="aba";
	char test2[]="radar";
	
	strrev(test1);
	cout<<test1<<endl;
	strrev(test2);
	cout<<test2<<endl;

	return 0;
}
