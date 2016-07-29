#ifndef PERSON_H
#define PERSON_H

#include <iostream>
#include <string>

using namespace std;

class Person
{
    public:
        Person(string name = "dude", string type = "person");
        virtual ~Person();
        string getName() const;
        string getType() const;
        virtual void doSomething(string intro = "Hi my name is ");
        friend ostream& operator<< (ostream& stream, const Person& person);

    private:
        const string name;
        const string type;
};

#endif // PERSON_H
