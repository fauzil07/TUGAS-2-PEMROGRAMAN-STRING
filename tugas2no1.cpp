#include <iostream>
#include <string.h>
using namespace std;

int main(){
	 char string[80]; 
       int jum_karakter;
       cout<<"Masukkan string : ";
       cin.getline(string, sizeof(string));
       cout<<"Panjang String"<<endl;
       jum_karakter = 0;
       for(int i = 0; string[i]; i++)
              jum_karakter++;

       cout<<"> dengan perulangan for  = "<<jum_karakter<<" karakter"<<endl;
       cout<<"> dengan cin.gcount()    = "<<cin.gcount()-1<<" karakter"<<endl;
	return 0;
}
