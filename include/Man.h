#ifndef MAN_H
#define MAN_H

#include <Person.h>

class Man : public Person
{
    public:
        Man(string name = "Bob");
        virtual void doSomething(string intro = "Hey hou! :D It's me ");
};

#endif // MAN_H
