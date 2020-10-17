#include <stdio.h>
#include <string.h>
#include<iostream>

using namespace std;

#define NAME_SIZE 50 // Define Macro

class person {
    int id; // All members are private by default
    char name[NAME_SIZE];

public:
    void aboutMe() {
        cout << "My name is jay.";
    }
};

class student : public person {
    public:
        void aboutMe() {
            cout << "Im a student.";
        }
};

int main(){
    student * p = new student();
    p->aboutMe(); // "Prints im a student."
    delete p; // Important! make sure to delete the allocated memory.
    return 0;
}

