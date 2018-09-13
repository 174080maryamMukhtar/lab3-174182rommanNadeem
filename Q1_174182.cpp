#include <iostream>

using namespace std;

// prototypes
void Input(int *ptr, int n);
int * intcpy(int * destination, const int * source, int size);
void Output(int *ptr, int n);
int intcmp(const int * str1, const int * str2, int size);


int main()
{
	int n;
	cout << "Enter size of Array" << endl;
	cin >> n;

	int *s;                        // 's' pointer for source array formation
	int *d;                        // 'd' pointer for source array formation
	s = new int[n];                // creating dynamic array on pointer s
	d = new int[n];                // creating dynamic array on pointer d
	cout << "Enter elements of source array " << endl;
	Input(s, n);                    // input elements in array s
	cout << endl;
	int *copy=intcpy(d, s, n);                 // calling copy function
	cout << endl << "Copy of Entered Array" << endl;
	Output(d, n);                   // calling output function showing copied elements
	cout << endl << endl;

	delete[]s;                       // deleting s
	delete[]d;                       // deleting d
	delete[]copy;

	int *arr1;                       //pointer for array 1
	int *arr2;                       //pointer for array 2
	             
	arr1 = new int[n];
	cout << endl << "Enter Elements of Array 1" << endl;
	Input(arr1, n);                   // for entering in array 1
	                       // taking size of array 2
	arr2 = new int[n];
	cout << endl << "Enter Elements of Array 2" << endl;
	Input(arr2, n);                    // for entering elements in array 2



	cout << endl;


	int compare = intcmp(arr1, arr2, n);    // calling compare function
	if (compare == 1)                          // checking flag value return by compare function
	{
		cout << "Array size and elements are same " << endl;
	}
	else if (compare == 0)                 // for checking if array sizes not same
	{
		cout << "Array not same " << endl;
	}
	
	delete[]arr1;
	delete[]arr2;
	system("pause");
	return 0;
}



void Input(int *ptr, int n)  // input elements in array
{

	for (int j = 0; j < n; j++)
	{
		cin >> ptr[j];
	}

}


int * intcpy(int *destination, const int * source, int size) // function to copy elements of 1 array to other
{
	for (int i = 0; i < size; i++)
	{
		destination[i] = source[i];
	}
	cout << endl << "Destination Array" << endl;
	for (int i = 0; i < size;  i++)
	{
		cout << destination[i]<<" ";
	}
	return destination;
}

void Output(int *ptr, int n)  // input elements in array
{

	for (int j = 0; j < n; j++)
	{
		cout << ptr[j] << " ";
	}

}

int intcmp(const int * str1, const int * str2, int size ) //function to compare elements
{
	int flag = 1;   // flag to check true
	

		for (int i = 0; i < size; i++)
		{
			if (str1[i] == str2[i])       // comparing elements
			{
				flag = 1;          // flag will remain 1 is elements are same
			}
			else
			{
				flag = 0;        // if elements is not same flag will turn 2 and loop will be terminated by iteration equals to size
				i = size;

			}
		}
	

	return flag;

}
