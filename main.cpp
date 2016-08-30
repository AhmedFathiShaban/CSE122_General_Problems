

    #include <iostream>
    #include <iomanip> // for setw and setfill functions
    #include<cmath>

    #include <limits>
    #include <cstddef>
    #include <conio.h>

    #include <map>
    #include <cstdio>
    #include<string>

    using namespace std;


    // Q1 )) How to generate a diamond using recursion

    // CALL IN main as :: diamond(10,10,10,true);
    void diamond(int start, int end , int maxMiddleHeight , bool direction_increase)
    {
        static int currentMiddleHeight = 0;

        for(int i = 0 ; i<start ; i++)
        {
            cout  << setw(3) << left  << " ";
        }
    for(int i = start ; i<=end ; i++)
        {
            cout << setw(3) << left << "*";
        }
        cout << endl;
        currentMiddleHeight++;
        if(currentMiddleHeight >= maxMiddleHeight)
            direction_increase = false;

        if(!direction_increase && (start==end))
            return;

        if(direction_increase)
        diamond(start-1,end+1,maxMiddleHeight,direction_increase);
        else
        diamond(start+1,end-1,maxMiddleHeight,direction_increase);

    }


    int main()
    {
    diamond(10,10,10,true);
    }


