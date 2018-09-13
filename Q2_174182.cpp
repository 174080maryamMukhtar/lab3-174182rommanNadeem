#include <iostream>

using namespace std;

void series(int *arr, int n); // calculate series 
void output(int *arr, int n); // for output 
int main()
{
   int n;
   cout<<"Enter size of series"<<endl;
   cin>>n;

   int *arr = new int[n]; // initializing dynamic array
   series(arr,n); // calling function of series
   cout<<"Fibonnaci Series"<<endl;
   output(arr,n); // output function
   delete []arr;  // deleting array


    return 0;
}
void series(int *arr, int n) // function for generating series
{
    if(n==1)
    {
       arr[0] = 1;
    }
    else if (n>1)
    {


        arr[0] = 1;
        arr[1] = 1;
        for (int i = 2; i < n; i++)
        {
            arr[i] = arr[i-1] + arr[i-2]; // adding sum of two previous iteration
        }
    }
}

void output(int *arr, int n) // function for output of file
{
     for (int i = 0; i < n; i++)
     {
         cout<<arr[i]<<" ";
     }

}
