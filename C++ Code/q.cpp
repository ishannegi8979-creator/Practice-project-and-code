 #include <iostream>
 #include <vector>
 #include <limits.h>

 using namespace std;

 int main()
{
    // Created the first array  
    int arr[] = { 1 , 2 , 3 , 4 , 5 , 6}; 
    int size1 = 6;

    // reated the second array
    int brr[] = { 7 , 8 , 9 , 10}; 
    int size2 = 4;

    // created the third array as a dynamic array
    vector <int> ans; 

    // putting all element of arr[] in ans array
    for (int i = 0 ; i < size1 ; i++)
    {
        ans.push_back(arr[i]); 
    }
    // putting all element of brr[] in ans array
    for (int i = 0 ; i<size2 ; i++)
    {
        ans.push_back(brr[i]); 
    }
    
    // Line number 28 to 33 is printing the ans array " The Dynamic one "
    cout << " Printing the answer" <<  endl ;

    for (int i = 0 ; i< ans.size() ; i++)
    {
        cout << ans[i] << " ";
    }
}