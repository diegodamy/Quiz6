#include <iostream>
using namespace std;

int GetGDC(int numbers[], int size){
  int quotient;
  int modulus;



do {

  if (numbers[0] == 0){
    return 1; //cout << "GDC is " << numbers [1] << endl;
  } else if (numbers[1] == 0){
    return 0; //cout  << "GDC is " << numbers [0] << endl;
  }

 quotient = numbers[0]/numbers[1];
 modulus = numbers[0]%numbers[1];

 numbers [0] = (numbers [1]*quotient)+modulus;

 numbers [0] = numbers [1];
 numbers [1] = modulus;

} while ((numbers[0] == 0)||(numbers[1] == 0));

}

int main(){
  int array [2];

  cout << "In order to find the GCD of two numbers, please input two positive integers:" << endl;
  for (int i=0; i<2; i++) {
    cin >> array[i];
  }

if (GetGDC(array,2)==1) {
  cout << "The GDC of given numbers is " << array[1] << endl;
} else if (GetGDC(array,2)==0) {
  cout << "The GDC of given numbers is " << array[0] << endl;
} else {
cout << "The GDC of the given numbers is " << GetGDC(array,2) << endl;
}
}
