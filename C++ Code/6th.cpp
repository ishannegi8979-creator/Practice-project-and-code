// For Linear search in array .
#include <iostream>
#include <limits.h>
#include <vector>

using  namespace std ;

int main()
{
    int arr[] = { 1, 2 , 23 , 45  ,665 , 54, 324 };
    int size  = 7;

    cout << " ENter the key  = " ;
    int key ;
    cin >> key ;

    bool final = 0;

    for (int i = 0 ; i< size ; i++)
    {
        if(arr[i] == key)
        {
            final = 1;
            break;
        }
        
    }
    if(final)
    {
        cout << "Found" << endl;
    }
    else {
        cout << " Not Found " ;
    }
}
