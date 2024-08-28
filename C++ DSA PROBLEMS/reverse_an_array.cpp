#include<iostream>
using namespace std;

void revers( int arr[],int size)
{
    for ( int i = 0 ; i < size/2 ; i++)
    {
        int temp = arr[i];

        arr[i] = arr[size-i-1];

        arr[size-i-1] = temp;
    }

    
}

int main()
{
    int arr[4] = { 2, 7 , 5, 9};
    revers(arr,4);

    cout<<"The reversed array is : ";
    for ( int i = 0 ; i < 4 ; i++)
    {
        cout<<arr[i]<<" ";
    }


}