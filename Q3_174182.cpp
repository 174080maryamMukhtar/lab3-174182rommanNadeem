#include <iostream>

using namespace std;

//Prototype of functions
void Input(int *A, int n); // Input fucntion

void Area(int length[], int width[], int *area, int n); // function to calculate area
void Output(int arr[], int n);

int main()
{
   int n;
   cout<<"Enter size of series"<<endl;
   cin>>n;
   cout<<endl;
   int *length= new int[n];// initializing dynamic array for length
   int *width = new int[n];// initializing dynamic array for width
   int *area = new int[n]; // initializing dynamic array for area

   cout<<"Enter lengths"<<endl;
   Input(length,n);      // calling input function
   cout<<endl;

   cout<<"Enter widths"<<endl;
   Input(width,n);        // calling input function
   Area(length,width,area,n); // calling Area function
   cout<<endl;

   cout<<"Area calculated"<<endl;
   Output(area,n);  // output of Area
	delete []length;
    delete []width;
    delete []area;



    return 0;
}

//functions

void Input(int *A, int n) // input
{

    for (int i = 0; i < n; i++)
    {
       cin>>A[i];
    }
}





void Area(int length[], int width[], int *area, int n) // function for calculating area
{
     for (int i = 0; i < n; i++)
     {
        area[i]=length[i]*width[i]; // multiplying corresponding elements or length array with width and storing in area array
     }

}

void Output(int arr[], int n) //output function
{
    for(int i = 0; i < n; i++)
    {
    cout<<arr[i]<<" ";
    }
}
