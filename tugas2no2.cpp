#include <iostream>
#include <string.h>
using namespace std;

int main()
{
   char string[100];   
   int stringbalik;     
   cout << "Masukkan string :";  
   cin  >> string;
   cout << "string setelah dibalik : ";
   stringbalik = strlen(string) - 1;
   while (stringbalik >= 0)        
   {
    cout << string[stringbalik];
    stringbalik = stringbalik - 1;  
   }

   return 0;
}
