#include <iostream>
using namespace std;

// demonstrates what happens when you dereference a pointer

int main(){
    int varN = 0;
    int *ptrN = &varN; // ptrN points to varN address

    cout << "varN value: " << varN << endl;
    cout << "varN location: " << ptrN << endl;
    cout << "dereference ptrN: " << *ptrN << endl;

    return 0;
}