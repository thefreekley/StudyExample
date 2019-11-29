#include <iostream>
#include <math.h>
const int n = 5;

using namespace std;

class Array // ���� ��� ����� � ��� ����������� ����� � ����� �������
{
private:
 int ArrayBlock[n];
public:
 friend void Input_(Array arr[]);
 friend void ShowYourMatrix(Array arr[]);
 friend void Sorting(Array arr[], int n);
 friend void Count(Array arr[]);
};

void Input_(Array arr[]) // ������� ���� � ���� ����� �� �������� ����� Array
{
 for (int i = 0; i < n; i++)
 for (int j = 0; j < n; j++)
 {
 cout << "[" << i + 1 << "][" << j + 1 << "] = ";
 cin >> arr[i].ArrayBlock[j];
 }
}
void ShowYourMatrix(Array Arr[]) // ����� �������
{
 for (int i = 0; i < n; i++)
 {
 for (int j = 0; j < n; j++)
 {
 cout << Arr[i].ArrayBlock[j] << "\t";
 }
 cout << endl;
 }
}


void Count(Array arr[]) // ���������� ���������� ������������ ��
{
 double product=1;
 for(int i=0;i<n-1;i++){
 int summ_of=0;
 for (int j = i+1; j <n ; j++) {
 summ_of+=arr[j].ArrayBlock[i];
 }
 product*=summ_of;
 cout<< "the sum of the elements in column "<< i <<" under the main diagonal of the matrix =" << summ_of << endl;
 }
 for(int i=0;i<2;i++){
 product=sqrt(abs(product));
 }
 cout << "\n" << "Geometric mean = " << product << "\n";
}
