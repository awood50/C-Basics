#include <iostream>
using namespace std;

int main()
{
    int myInt = 15; //creates integer variable
    int *myPointer; //creates pointer
    myPointer = &myInt; //assigns pointer to the address of the integer value
    
    
    myInt= 10;//"Change the value of myInt to 10 and print"
    
    
    
    cout <<"The pointer address: "<< myPointer<<endl;
    cout<<"The value of the integer: "<<myInt<<endl;
    cout<<"The value of the pointer: "<<*myPointer<<endl;
    return 0;
}