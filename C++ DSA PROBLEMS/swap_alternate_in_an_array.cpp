//  arr[5] = {1 ,2 ,3, 4, 5, 6}
// the alternate array is arr[5] = {2,1,4,3,6,5}

#include <iostream>
using namespace std;
 
void alternate ( int arr[], int size)
{
    for ( int i =0 ; i < size ; i+=2)
    {
        int temp = arr[i];
        arr[i] = arr[i+1] ; 
        arr[i+1] = temp; 

    }
}


int main()
{
    int arr[100];
    int size;
    cout<<"Enter the size of the array ";
    cin>>size;
    cout<<"Enter the array elements: ";
    for ( int i = 0 ; i<size ; i++ )
    {
        cin>>arr[i];
        
    }

    alternate(arr,size);

    cout<<"Array after swaping the alternate elements: ";

    for ( int i = 0; i < size ; i++)
    {
        cout<<arr[i]<<" ";

    }



}