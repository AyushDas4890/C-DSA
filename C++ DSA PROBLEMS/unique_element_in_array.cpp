#include <iostream>
using namespace std;




int main()
{
    cout<<"Enter the size of the array: ";
    int size;
    int arr[100];
    cin>>size;
    cout<<"Enter the array elements : ";

    for ( int i = 0 ; i < size ; i++)
    {
        cin>>arr[i];
    }

    cout << "the original array: "<<endl;

    for ( int i = 0 ; i < size ; i++)
    {
        cout<<arr[i]<<" "<<endl;
    }
    


    cout<<"The unique elements in the array are: ";
    /*for ( int i = 0 ; i < size ; i++)
    {
        int j;
        for ( j = 0 ; j < i ; j++)
        {
            if ( arr[i] == arr[j] )
            {
                break;
            }

            if ( i == j){  // if the index of i and j are same print the array
                cout<<arr[i]<<" ";
            }
        }
    }*/
   for (int i = 0; i < size; i++) // Loop to find and output unique elements
    {
        int j;
        for (j = 0; j < i; j++) // Inner loop to check for duplicates until the current index i
        {
            if (arr[i] == arr[j]) // If a duplicate is found
                break; // Break the loop
        }
        if (i == j) // If the index is equal to the inner loop's index j
            cout << arr[i] << " "; // Output the unique element at index i
    }

}