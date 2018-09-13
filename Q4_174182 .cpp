#include <iostream>

using namespace std;

// prototypes

void Input(int **ptr, int rows, int col); // prototype input function
void Output(int **ptr, int rows, int col); // prototype output function
int Odd(int **ptr, int rows, int col); // // prototype function to count odd numbers

int main()
{
   int r,c; // r for rows and c for column

   cout<<"Enters rows of Matrix"<<endl;
   cin>>r;                                      // input no of rows
   cout<<"Enter column  of Matrix"<<endl;
   cin>>c;                                      // input no of columns
   cout<<endl;

   int **mat;                                     // declaring double pointer for dynamic array
   mat= new int*[r];                              // initializing array of pointers
      for(int i = 0 ; i < r; i++)
      {
          mat[i]= new int [c];                    // creating arrays of number of rows and size of number of columns
      }
  cout<<"Enter elements of matrix "<<endl;
  Input(mat,r,c);                               // calling input function
  cout<<"Elements you entered in matrix"<<endl;
  Output(mat,r,c);                              // calling output function
  cout<<endl;
  cout<<"Number od odd elements in Matrix : "<<Odd(mat,r,c); // calling function to count number of odds
  for(int i = 0 ; i < r; i++)                  // deleting rows
  {
      delete[]mat[i];
  }
  delete []mat;                                 // deleting pointer array
    return 0;
}

//functions

void Input(int **ptr, int rows, int col)  // input elements in array
{
         for (int i = 0; i < rows ; i++)
           {
            for(int j = 0; j < col; j++)
                {
                cout<<"["<<i<<"]"<<"["<<j<<"]: ";
                cin>>ptr[i][j];
                }
           }
}

void Output(int **ptr, int rows, int col) // output elements in array
{

     for (int i = 0; i < rows ; i++){
    for(int j = 0; j < col; j++){
        cout<<ptr[i][j]<<" ";
    }
    cout<<endl;
   }
}

int Odd(int **ptr, int rows, int col) // for counting number of odds
{
    int count=0;

    for (int i = 0; i < rows ; i++){
    for(int j = 0; j < col; j++){
       if(ptr[i][j]%2 != 0)          // if element in current iteration mod is not equal to zero then count for odd in incremented
        {
            count++;
        }
    }
   }
   return count;
}


