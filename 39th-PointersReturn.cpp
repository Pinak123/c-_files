#include<iostream>
using namespace std;

int main() {
    // Basic example
    int a =2;
    int* add = &a;

    cout << "The value of a is "<< *add << endl;//we do *add to derefrence the add so that it returns a;

    //New operator/keyword
    int *b = new int(20);
    cout << "The value of b is "<< *b << endl;

    int* arr = new int[3];
    arr[0] =10;
    arr[1] =20; /// --> It can be done like this => *(arr + 1) ==== arr[1]
    arr[2] =30;
    cout << "The value of arr[0] is "<< arr[0] << endl;
    cout << "The value of arr[1] is "<< arr[1] << endl;
    cout << "The value of arr[2] is "<< arr[2] << endl;
    // delete operator
    delete[] arr;// frees the memory allocated
    return 0;
}