#include "Person.h"

Person::Person(string name, string type) : name(name), type(type)
{
    cout << "new " << type << " created with name " << name << endl;
}

Person::~Person()
{
    //dtor
}

string Person::getName() const {
    return this->name;
}

ostream& operator<< (ostream& stream, const Person& person) {
    return stream << person.getName();
}
