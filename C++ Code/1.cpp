# include <iostream>
using namespace std ; 

int main ()
{
    int arr[500];
    // Number of Digits
    int n ; 
    cout << " How many number the array = " << endl;
   cin >> n;
 // your choice number like 1 , 2 ,3 ,4 ,5 ,6 ,7 etc.....
   cout<< " Enter the numbers " << endl ;

    for(int i = 0  ;i < n ; i++)
    {
        cin >> arr[i];
    }
    // doing Double of the number of your choice
    cout << "Double" << endl ;

    for(int i = 0 ; i < 5 ; i++)
    {
        cout << 2*arr[i]  << " " ;
    }
    return 0 ;
}