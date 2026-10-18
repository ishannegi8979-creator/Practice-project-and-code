#include <iostream>
#include <limits.h>

using namespace std;

int main()
{
    int arr[] = { 1 , 3 , 4, 5, 7, 8, 10 ,697 , 64};
    int size= 9;
    //INT_MIN  , INT_MAX only used for telling that it has integr ki minimum , maxvalue value that system kno
    int mini = INT_MAX;

    for(int i = 0 ; i<size ; i++)
    {
        if(arr[i] < mini)
        {
            mini = arr[i];
        }
    }
    cout << " the maximun number = " << mini<< endl;

}