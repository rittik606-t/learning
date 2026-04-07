#include <iostream>
using namespace std;

void swapping(int a,int b){
    swap(a,b);
    cout << "using swap function a: "<< a << " b: "<< b << endl;
}

void swapping2(int a, int b){
    a=a+b;
    b=a-b;
    a=a-b;
    cout << "using sub and add operater a: "<< a << " b: "<< b << endl;
}

void swapping3(int a, int b){
        a=a^b;
        b=a^b;
        a=a^b;
        cout << "using XOR operator a: "<< a << " b: "<< b << endl;
    }

    int main()
    {
        int a;
        cout << "enter first(a) value to swap: ";
        cin >> a ;
    
        int b;
        cout << "enter second(b) value to swap: ";
        cin >> b;

        swapping(a,b);
        swapping2(a,b);
        swapping3(a,b);
        
    return 0;
}