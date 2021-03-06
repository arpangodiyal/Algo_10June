// Deepak Aggarwal, Coding Blocks
// deepak@codingblocks.com
#include <iostream>
#include <cstring>
using namespace std;
class Person{
public:
    char*  name;
    int age;
    Person(){
        age = 0;
        name = NULL;
    }

    Person(int a, const char n[]){
            age = a;
            int len = strlen(n) + 1;
            name = new char[len];
            strcpy(name, n);
    }

    void print(){
        cout << name << " " << age << endl;
    }
};

int main(){   
    // Person p1 = {"Jonny", 20};
    // Person p2 = {"Jonny", 20};
    // Person p1(20, "Jonny");
    // p2.name[0] = 'T';
    // p1.print();
    // p2.print();

    Person p1(20, "Jonny");
    Person p2 = p1;
    p2.name[0] = 'T';
    p1.print();
    p2.print();

}