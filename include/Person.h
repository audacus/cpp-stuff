#ifndef PERSON_H
#define PERSON_H

#include <iostream>
#include <string>

using namespace std;

class Person
{
    public:
        Person(string name = "derp", string type = "person");
        virtual ~Person();

        string getName() const;

        friend ostream& operator<< (ostream& stream, const Person& person);
    protected:

    private:
        const string name;
        const string type;
};

#endif // PERSON_H
