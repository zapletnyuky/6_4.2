#include <iostream>
#include <iomanip>
#include <time.h>

using namespace std;


void Create(int* a, const int size, const int Low, const int High, int i) {
    a[i] = Low + rand() % (High-Low+1);
    if (i<size-1)
        Create(a, size, Low, High, i+1);
}
void Print(int* a, const int size, int i)
{
    cout << setw(4) << a[i];
    if (i<size-1)
        Print(a, size, i+1);
else
cout << endl;
}
int iMax(int* a, int size, int& imax, int i, int max)
{
    if (a[i] > max)
    {
        max=a[i];
        imax = i;
    }
    if (i<size)
    {
        return iMax(a, size, imax, i+1, max);
    }
    else
        return imax;
}
void Dob(int* a, const int size,  int& one, int& too, int k, int i)
{
    if (a[i] == 0 && k < 1)
    {
        one = i;
        k++;
        if (a[i + 1] == 0 && k < 2)
        {
            too = i + 1;
            k++;
        }
        return Dob(a,size,one,too,k,i+1);
    }
    int dob (int* a, const int size,  int& one, int& too, int k, int i){
        int dod;
        dod*=a[i];
        
        if(one<too)
            return Dod(a,size,one,too,I+1);
        
    }
}
void Inverse(int*a, const int size, int i, int j)
{
    if (i < size/2)
        if (j < size/2){
            i++;
            j++;
            {
                swap(a[j], a[j + 1]);
                
                //    for (int i = 0; i < size/2; i++)
                //            for (int j = i + 1; j < size - 1; j++)
                //                swap(a[j], a[j + 1]);
            }
        }
}
int main()
{
    srand((unsigned)time(NULL));
    int Low = -5;
    int High = 5;
    int n, i;
    int one = 0, too = 0, k = 0, pr = 1;
    int imax = 0;
    cout << "n = "; cin >> n;
    int *a = new int[n];
    int max = a[0];
    Create(a, n, Low, High, 0);
    Print(a, n, 0);
    imax = iMax(a, n, imax, 0, max);
    cout << "1.1. Max = " << iMax(a, n, i, max, imax) << endl;
  //  Dob(a, n, i);
    Dob(a, n, one , too, 0, 1);
    cout << "1.2. Dobytok = " << endl;
    cout << endl;
    
  cout << "2. Perestanovka: " << endl;
  Inverse(a, n, 0, 0);
  Print(a,n, 0);
    
    delete[]a;
}
