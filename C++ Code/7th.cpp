#include <iostream>
#include <limits.h>
#include <vector>

using namespace std ;

int main ()
{

    int arr[12] = { 1 , 0 , 1 , 0 ,1, 1, 0,0 ,0 ,0, 1};
    int size = 12;

    int zero=0;
    int one =0;

    for(int i = 0 ; i<size ; i++)
    {
        if(arr[i]== 0)
        {
            zero++;
        }
        if(arr[i]== 1)
            {
            one++;
        }
    }

    cout << " The Number of zero = " << zero << endl ;

    cout << " The Number Of One = " << one << endl;



}