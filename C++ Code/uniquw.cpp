#include <iostream>// lines 1 , 2 and 3 only have pakeges included and header file with .h extension
#include <limits.h>
#include <vector>

using namespace std ;// this is use for usind standard naming keywords in c++

int findunique(vector<int>arr)// We have made a function to find unique number
{

    int answer = 0;// initial value od variable answer

    for (int i = 0 ; i < arr.size() ; i++ )
    {
        answer = answer ^ arr[i];// The value of Anser variable is modifying here
    }
    return answer ;
}

int main() {//Main Function

    int n ; // for taking value from user
    cout << " Enter the value of n " << endl;
    cin >> n;
    
    vector <int> arr(n);// initialization of dynaminc array
    cout << " Enter the elements " << endl;

    for (int i = 0; i < arr.size() ; i++)
    {
        cin >> arr[i];
    }
    int number = findunique(arr);// lines 32 and 34 will return the unique number

    cout << " The unique number is " << number << endl;
}
