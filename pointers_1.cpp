#include <iostream>
using namespace std;


int main(){
int num = 5;



cout<<"your number is: "<<num<<endl;
cout<<"address of num is: "<<&num<<endl;

//the function of address is to store the address

int* pointer = &num;

cout<<"your pointer value is: "<<pointer<<endl;
cout<<"the value stored in the address stored in the pointer is: "<<*pointer<<endl;

//printing *pointer is not the same as declaring *pointer
//after daclaring pointer, if you want to print it, you will use only pointer 
//but if you want to print the value of the address stored in it, you'll use 
//the dereferencing symbol * i.e *pointer.
//therefore printing num and printing *pointer will give you the same value
 



return 0;
}