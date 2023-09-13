/*
Q1. Create a student class. input the ID, name, branch
Q2. Arithmetic addition, subtraction, multiplication and division class.
Q3. Swap two numbers using classes
Q4. WAP to find size of int, float, double, character
Q5. Print ASCII value of a character
*/

// Q2

#include<iostream>
using namespace std;

class Calculation{
    int a,b;
public:
    Calculation(){};
    Calculation(int a,int b){
        this->a = a;
        this->b = b;
    }
    int addition(){
       return (a+b);
    }
    int subtraction(){
        return (a-b);
    }
    int multiplication(){
        return (a*b);
    }
    int division(){
        return (a/b);
    }
    void display(){
        cout << "Addition: " << addition() << endl
             << "Subtraction: " << subtraction() << endl
             << "Multiplication: " << multiplication() << endl
             << "Division: " << division() << endl;
    }
};

int main(){
    int a,b;
    cin >> a >> b;
    Calculation obj1(a,b);
    obj1.display();
    return 0;
}
