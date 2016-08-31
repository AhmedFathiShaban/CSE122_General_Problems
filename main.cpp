#include <iostream>
#include<string.h>

using namespace std;


char * reverse(char x[], int size)
{
    static char y [1000] = "" ;


    if(size == 0)
    {
        return strdup(y); // use strdup ( meaning string duplicate) because y is a static char array
        // this strdup transforms a static char array into dynamic char array
    }

    char c = x[size-1];
    strncat(y,&c,1);
    size--;
    reverse(x,size);

}

int main ()
{
    char x[100] = "Hello I am here";

    char *z = reverse(x,strlen(x));
    cout << z ;


}
