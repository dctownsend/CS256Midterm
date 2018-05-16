//
//  main.cpp
//  MidtermSimpsons
//
//  Created by dakota townsend on 5/15/18.
//  Copyright © 2018 dakota townsend. All rights reserved.
//

#include <iostream>
#include<string>
using namespace std;

class Human {
private:
    string name;
    int age;
    char sex;
  //  Human() {};
protected:
    Human(const string & n, const int & a, const char & s) : name(n), age(a), sex(s) {
        printf("person constructed\n");
    }
public:
    Human() {
        name = "";
        age = 0;
        sex = 0;
    }
    void setName(string);
    void setAge(int);
    void setSex(char);
    
    string getName();
    int getAge();
    char getSex();
    
    const string & _name() const{return name;}
    const int & _age() const{return age;}
    const char & _sex() const{return sex;}
    
};
void Human:: setName(string fname) {
    name = fname;
}
void Human:: setAge(int fage) {
    age = fage;
}
void Human:: setSex(char fsex) {
    sex = fsex;
}

string Human:: getName() {
    return name;
}
int Human:: getAge() {
    return age;
}
char Human:: getSex() {
    return sex;
}

class Parent : public Human {
    const int MAX = 18;
private:
  //  vector<Child> children(MAX);
public:
    Parent(string n, int a, char s) : Human (n, a, s) {
        printf("parent constructed\n");
    }
};

class Child : public Human {
    
private:
   // Parent Mom;
   // Parent Dad;
public:
    Child(string n, int a, char s) : Human (n, a, s) {
        printf("child contructed\n");
    }
};

int main(int argc, const char * argv[]) {
    
   Parent h("Homer", 36, 'M');
   Parent m("March", 37, 'F');
   Child l("Lisa", 12, 'F');
   Child b("Bart", 10, 'M');
   Child g("Maggie", 3, 'F');
    
    cout << "name: " << h.getName() << " age: " << h.getAge() << " sex: " << h.getSex() << "\n";
    cout << "name: " << m.getName() << " age: " << m.getAge() << " sex: " << m.getSex() << "\n";
    cout << "name: " << l.getName() << " age: " << l.getAge() << " sex: " << l.getSex() << "\n";
    cout << "name: " << b.getName() << " age: " << b.getAge() << " sex: " << b.getSex() << "\n";
    cout << "name: " << g.getName() << " age: " << g.getAge() << " sex: " << g.getSex() << "\n";
    
    return 0;
}
