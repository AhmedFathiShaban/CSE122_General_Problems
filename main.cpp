#include <iostream>
#include <string.h>

using namespace std ;

void duplicate(char str[],char c , int times)
{
    char * modified = new char[strlen(str)*2];
    strcpy(modified,"");

    for(int i = 0 ; i<strlen(str); i++ )
        {
            if(str[i] != c)
            {
            strncat(modified,&str[i],1);
            }
            else
            {
                char cc = str[i];
               for(int k = 0 ; k <times ; k++)
               {
                   strncat(modified,&cc,1);
               }
            }
        }

        cout << modified << endl;
}


int main()
{
    char x[100] = "I Am AhmedAA AoA";

    duplicate(x,'A',3);
}
