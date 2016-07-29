#include "Person.h"

Person::Person(string name, string type) : name(name), type(type)
{
    cout << "new " << type << " with name " << name << endl;
}

Person::~Person()
{
    cout << "destructor@person" << endl;
}

string Person::getName() const
{
    return this->name;
}

string Person::getType() const
{
    return this->type;
}

void Person::doSomething(string intro)
{
    cout << intro << this->getName() << endl;
}

ostream& operator<< (ostream& stream, const Person& person)
{
    return stream << person.getName();
}
