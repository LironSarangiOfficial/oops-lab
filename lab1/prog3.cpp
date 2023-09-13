/*
Q1. Create a student class. input the ID, name, branch
Q2. Arithmetic addition, subtraction, multiplication and division class.
Q3. Swap two numbers using classes
Q4. WAP to find size of int, float, double, character
Q5. Print ASCII value of a character
*/

#include<iostream>
using namespace std;

class numbers{
    int a,b;
public:
    numbers(){};
    numbers(int a,int b){
        this->a = a;
        this->b = b;
    }
    void display(){
        cout << "a = " << a << ", b = " << b << endl;
    }
    void swapnum(){
        int temp = a;
        a = b;
        b = temp;
    }
};

int main(){
    int a,b;
    cin >> a >> b;
    numbers o1(a,b);
    o1.display();
    o1.swapnum();
    o1.display();

    return 0;
}
