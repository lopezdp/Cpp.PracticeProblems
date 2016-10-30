#include <iostream>

using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int size;

    cin >> size;

    //dynamically create a new array called arr of type int by using the new operator
    int *arr = new int[size];

    for(int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    for(int i = size - 1; i >= 0; i--)
    {
        cout << arr[i] << " ";
    }
    
    return 0;
}