/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

int sort(int *array, int size);
void displayArr(int arr[], int size);

int sort(int *array, int size)
{
int actionPerformed = 0;

for (int i = 0; i < size; i++)
{
    for (int j = 1; j < (size - i); j++)
    {
        actionPerformed += 1;
        if (array[j - 1] > array[j])
        {
            actionPerformed += 3;
            int temp = array[j - 1];
            array[j - 1] = array[j];
            array[j] = temp;
        }
    }
}

return actionPerformed;
}

void displayArr(int array[], int size)
{
    cout << "(" << array[0];
    for (int i = 1; i < size; i++)
    {
        cout << "," << array[i];
    }
    cout << ")";
}

int main()
{
int ar1[10] = {1, 3, 7, 5, 2, 4, 6, 8, 9, 10};
int ar2[10] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
int ar3[10] = {1, 10, 2, 9, 3, 8, 4, 7, 5, 6};
int size = 0;
int actions = 0;

size = sizeof(ar1) / sizeof(int);
cout << "array 1: ";
displayArr(ar1, size);
cout << endl;
actions = sort(ar1, size);
cout << "Sorted List: ";
displayArr(ar1, size);
cout << " " <<" Actions Performed: "<<actions  << endl;

size = sizeof(ar2) / sizeof(int);
cout << "array 2: ";
displayArr(ar2, size);
cout << endl;
actions = sort(ar2, size);
cout << "Sorted List: ";
displayArr(ar2, size);
cout << " " <<" Actions Performed: "<< actions << endl;

size = sizeof(ar3) / sizeof(int);
cout << "array 3: ";
displayArr(ar3, size);
cout << endl;
actions = sort(ar3, size);
cout << "Sorted List: ";
displayArr(ar3, size);
cout << " " <<" Actions Performed: " <<actions << endl;

return 0;
}