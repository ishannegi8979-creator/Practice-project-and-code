#include <iostream>
#include <limits.h>
#include <vector>

 using namespace std;

 int main()
{

     vector <int> arr ;

    int ans = sizeof(arr)/sizeof(int);
    cout << ans << endl;

    cout << arr.size() << endl;
    cout << arr.capacity() << endl; 

    arr.push_back(5); // inserting the number
    arr.push_back(4);
    
    for (int i = 0 ; i<arr.size() ; i++) // printing the number
    {
        cout << arr[i]  << " ";
    }
    cout << endl;

    arr.pop_back();// deleting the number

    for(int i = 0 ; i< arr.size() ; i++)
    {
        cout << arr[i] << " " ;
    }
    cout << endl ; 

    int n ;
    
    cin>>n;
    
    vector <int> brr( n , 110);
    cout<< brr.size()<< endl ;
    cout << brr.capacity()<< endl;

        for (int i = 0 ; i<arr.size() ; i++)// printing the number
    {
        cout << brr[i]  << " ";
    }

    cout << endl;  
    cout << " printing crr" << endl;

    vector <int> crr{ 10 , 20 ,30 ,40 ,50};

    for(int i= 0 ; i< crr.size() ; i++)
    {
        cout << crr[i] <<" " ;
    }
    cout << endl;
    cout << crr.empty() << endl;

    vector<int>drr;
    cout << " Vector drr is " << drr.empty() << endl;
    return 0 ;
}
   