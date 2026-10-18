#include <iostream>

using namespace std;

int main()
{
    int arr[] = { 1 , 2 , 3 , 4, 5, 6};

    int size =10;
    cout << " The key = ";
    int key;
    cin>> key;

    bool fl = 0;

    for(int i = 0 ; i<size ;  i++)
    {
        if(arr[i] == key)
        {
            fl = 1 ;
            break;
        }
    }
//
    if(fl )
    {
        cout << " Found " << endl ;
    }
    else{
        cout << " NOT found " << endl ;
    }
}



