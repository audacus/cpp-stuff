#ifndef MAN_H
#define MAN_H

#include <Person.h>


class Man : public Person
{
    public:
        Man(string name = "Hans");
        virtual ~Man();

    protected:

    private:
};

#endif // MAN_H
