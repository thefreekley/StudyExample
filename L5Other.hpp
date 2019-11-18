#include <iostream>
#include <math.h>
const int n = 5;
const int m = 5;
using namespace std;

class Array // клас якій тримає в собі одновимірний масив і дружні функції
{
private:
 int dArr[m];
public:
 friend void Input_(Array arr[]);
 friend void ShowYourMatrix(Array arr[]);
 friend void Sorting(Array arr[], int n);
 friend void Count(Array arr[]);
};

void Input_(Array arr[]) // функція бере в себе масив із елементів класу Array
{
 for (int i = 0; i < n; i++)
 for (int j = 0; j < m; j++)
 {
 cout << "[" << i + 1 << "][" << j + 1 << "] = ";
 cin >> arr[i].dArr[j];
 }
}
void ShowYourMatrix(Array Arr[]) // показ матриці
{
 for (int i = 0; i < n; i++)
 {
 for (int j = 0; j < m; j++)
 {
 cout << Arr[i].dArr[j] << "\t";
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
 summ_of+=arr[j].dArr[i];
 }
 product*=summ_of;
 cout<< "f("<< i <<")=" << summ_of << endl;
 }
 for(int i=0;i<2;i++){
 product=sqrt(abs(product));
 }
 cout << "\n" << "F = " << product << "\n";
}