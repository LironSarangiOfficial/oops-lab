/*
Q1. Create a student class. input the ID, name, branch
Q2. Arithmetic addition, subtraction, multiplication and division class.
Q3. Swap two numbers using classes
Q4. WAP to find size of int, float, double, character
Q5. Print ASCII value of a character
*/

// Q1
#include<iostream>
#include<string>
using namespace std;

class student{
    string name;
    string branch;
    string id;
    string address;
public:
    student(){};
    student(string n,string b,string id,string a){
        this->name = n;
        this->branch = b;
        this->id = id;
        this->address = a;
    }
    void display(){
        cout << "Name: " << name << endl
             << "ID: " << id << endl
             << "Branch: " << branch << endl
             << "Address: " << address << endl;
    }
};

int main(){
    string n,a,id,b;
    cin >> n >> b >> id;
    getline(cin , a);
    student s1(n,b,id,a);
    s1.display();
    return 0;
}
