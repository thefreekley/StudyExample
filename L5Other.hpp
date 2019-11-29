#include <iostream>
#include <math.h>
const int n = 5;
using namespace std;

class Array // клас якій тримає в собі одновимірний масив і дружні функції
{
private:
 int ArrBlock[n];
public:
 friend void Input_(Array arr[]);
 friend void ShowYourMatrix(Array arr[]);
 friend void Sorting(Array arr[], int n);
 friend void Count(Array arr[]);
};

void Input_(Array arr[]) // функція бере в себе масив із елементів класу Array
{
 for (int i = 0; i < n; i++)
 for (int j = 0; j < n; j++)
 {
 cout << "[" << i + 1 << "][" << j + 1 << "] = ";
 cin >> arr[i].ArrBlock[j];
 }
}
void ShowYourMatrix(Array Arr[]) // показ матриці
{
 for (int i = 0; i < n; i++)
 {
 for (int j = 0; j < n; j++)
 {
 cout << Arr[i].ArrBlock[j] << "\t";
 }
 cout << endl;
 }
}


void Count(Array arr[]) // розрахунок зазначених математичних дій
{
 double product=1;
 for(int i=0;i<n-1;i++){
 int summ_of=0;
 for (int j = i+1; j <n ; j++) {
 summ_of+=arr[j].ArrBlock[i];
 }
 product*=summ_of;
 cout<< "The sum of the elements in each column "<< i <<" under the main diagonal of the matrix -" << summ_of << endl;
 }
 for(int i=0;i<2;i++){
 product=sqrt(abs(product));
 }
 cout << "\n" << "Geometric mean = " << product << "\n";
}
